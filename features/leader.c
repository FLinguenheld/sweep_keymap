// Copyright 2023 Florent Linguenheld (@FLinguenheld)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <stdlib.h>
#include "keycodes.h"


LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_TWO_KEYS(KC_M, KC_S) {
      SEND_STRING("f@linguenheld.fr"); }
    SEQ_TWO_KEYS(KC_M, KC_L) {
      SEND_STRING("florent@linguenheld.fr"); }
    SEQ_TWO_KEYS(KC_F, KC_L) {
      SEND_STRING("FLinguenheld"); }

    SEQ_THREE_KEYS(KC_T, KC_E, KC_S) {
      SEND_STRING("test01234"); }
    SEQ_THREE_KEYS(KC_A, KC_D, KC_M) {
      SEND_STRING("admin01234"); }

    SEQ_ONE_KEY(KC_C) {
      SEND_STRING(" | xclip -r -selection clipboard"); }

    /* Keyring requests, improbable combinaisons used by i3 */
    SEQ_THREE_KEYS(KC_G, KC_I, KC_T) {
        register_code(KC_LEFT_GUI);
        register_code(KC_LEFT_SHIFT);
        register_code(KC_LEFT_CTRL);
        register_code(KC_0);
        unregister_code(KC_0);
        unregister_code(KC_LEFT_GUI);
        unregister_code(KC_LEFT_SHIFT);
        unregister_code(KC_LEFT_CTRL);
    };
    SEQ_THREE_KEYS(KC_M, KC_A, KC_I){
        register_code(KC_LEFT_GUI);
        register_code(KC_LEFT_SHIFT);
        register_code(KC_LEFT_CTRL);
        register_code(KC_1);
        unregister_code(KC_1);
        unregister_code(KC_LEFT_GUI);
        unregister_code(KC_LEFT_SHIFT);
        unregister_code(KC_LEFT_CTRL);
    };
    /* ----- */
    SEQ_THREE_KEYS(KC_D, KC_E, KC_G) {
      tap_code16(US_DEG); } // °
    SEQ_THREE_KEYS(KC_D, KC_I, KC_A) {
      tap_code16(US_OSTR); } // ø
    SEQ_THREE_KEYS(KC_S, KC_E, KC_C) {
      tap_code16(US_SECT); } // §

    /* Copyright / Register */
    SEQ_THREE_KEYS(KC_C, KC_O, KC_P) {
      tap_code16(US_COPY); }
    SEQ_THREE_KEYS(KC_R, KC_E, KC_G) {
      tap_code16(US_REGD); }

    /* Currency */
    SEQ_THREE_KEYS(KC_E, KC_U, KC_R) {
      tap_code16(US_EURO); }
    SEQ_THREE_KEYS(KC_P, KC_O, KC_U) {
      tap_code16(US_PND); }
    SEQ_THREE_KEYS(KC_Y, KC_E, KC_N) {
      tap_code16(US_YEN); }
    SEQ_THREE_KEYS(KC_C, KC_E, KC_N) {
      tap_code16(US_CENT); }

    /* Fractions */
    SEQ_THREE_KEYS(KC_F, KC_C, KC_T) {
      tap_code16(US_QRTR); } // ¼
    SEQ_THREE_KEYS(KC_F, KC_C, KC_G) {
      tap_code16(US_HALF); } // ½
    SEQ_THREE_KEYS(KC_F, KC_H, KC_T) {
      tap_code16(US_TQTR); } // ¾

    /* Maths */
    SEQ_THREE_KEYS(KC_M, KC_U, KC_L) {
      tap_code16(US_MUL); } // ×
    SEQ_THREE_KEYS(KC_D, KC_I, KC_V) {
      tap_code16(US_DIV); } // ÷
    SEQ_TWO_KEYS(KC_P, KC_M) {
      send_unicode_string("±"); }
    SEQ_THREE_KEYS(KC_I, KC_N, KC_E) {
      send_unicode_string("≠"); }
    SEQ_THREE_KEYS(KC_A, KC_L, KC_M) {
      send_unicode_string("≈"); }
    SEQ_THREE_KEYS(KC_S, KC_Q, KC_U) {
      send_unicode_string("√"); }
    SEQ_THREE_KEYS(KC_I, KC_N, KC_F) {
      send_unicode_string("∞"); }
    SEQ_TWO_KEYS(KC_LABK, KC_LABK) {
      send_unicode_string("≤"); }
    SEQ_TWO_KEYS(KC_RABK, KC_RABK) {
      send_unicode_string("≥"); }

    /* Greek */
    SEQ_TWO_KEYS(KC_P, KC_I) {
      send_unicode_string("π"); }
    SEQ_THREE_KEYS(KC_P, KC_I, KC_I) {
      send_unicode_string("Π"); }

    SEQ_THREE_KEYS(KC_O, KC_M, KC_E) {
      send_unicode_string("ω"); }
    SEQ_FOUR_KEYS(KC_O, KC_M, KC_E, KC_G) {
      send_unicode_string("Ω"); }

    /* Icons */
    SEQ_THREE_KEYS(KC_F, KC_L, KC_A) {
      send_unicode_string("⚡"); }
    SEQ_THREE_KEYS(KC_S, KC_T, KC_A) {
      send_unicode_string("⭐"); }
    SEQ_THREE_KEYS(KC_S, KC_P, KC_A) {
      send_unicode_string("✨"); }
    SEQ_THREE_KEYS(KC_P, KC_O, KC_P) {
      send_unicode_string("🎉"); }
    SEQ_THREE_KEYS(KC_R, KC_E, KC_C) {
      send_unicode_string("♻️"); }
    SEQ_THREE_KEYS(KC_L, KC_O, KC_V) {
      send_unicode_string("❤️"); }
    SEQ_THREE_KEYS(KC_F, KC_I, KC_R) {
      send_unicode_string("🔥"); }
    SEQ_THREE_KEYS(KC_B, KC_O, KC_M) {
      send_unicode_string("💣"); }
    SEQ_FOUR_KEYS(KC_B, KC_O, KC_U, KC_M) {
      send_unicode_string("💥"); }
    SEQ_THREE_KEYS(KC_R, KC_O, KC_C) {
      send_unicode_string("🚀"); }
    SEQ_THREE_KEYS(KC_T, KC_E, KC_L) {
      send_unicode_string("🔭"); }
    SEQ_THREE_KEYS(KC_M, KC_A, KC_G) {
      send_unicode_string("🔎"); }
    SEQ_THREE_KEYS(KC_W, KC_A, KC_R) {
      send_unicode_string("⚠️"); }

    SEQ_THREE_KEYS(KC_B, KC_U, KC_L) {
      send_unicode_string("💡"); }
    SEQ_FOUR_KEYS(KC_I, KC_N, KC_F, KC_O) {
      send_unicode_string("ℹ️"); }
    SEQ_THREE_KEYS(KC_G, KC_E, KC_A) {
      send_unicode_string("⚙️"); }
    SEQ_THREE_KEYS(KC_L, KC_I, KC_N) {
      send_unicode_string("🔗"); }
    SEQ_THREE_KEYS(KC_P, KC_I, KC_N) {
      send_unicode_string("📌"); }
    SEQ_FOUR_KEYS(KC_F, KC_L, KC_A, KC_G) {
      send_unicode_string("🚩"); }
    SEQ_THREE_KEYS(KC_B, KC_A, KC_L) {
      send_unicode_string("🎈"); }
    SEQ_THREE_KEYS(KC_G, KC_I, KC_F) {
      send_unicode_string("🎁"); }

    SEQ_THREE_KEYS(KC_P, KC_E, KC_N) {
      send_unicode_string("✏️"); }
    SEQ_THREE_KEYS(KC_K, KC_E, KC_Y) {
      send_unicode_string("🔑"); }
    SEQ_THREE_KEYS(KC_B, KC_O, KC_X) {
      send_unicode_string("🧰"); }

    SEQ_TWO_KEYS(KC_O, KC_K) {
      send_unicode_string("👌"); }
    SEQ_THREE_KEYS(KC_O, KC_W, KC_D) {
      send_unicode_string("⛔"); }

    SEQ_ONE_KEY(KC_V) {
      send_unicode_string("✓"); }
    SEQ_TWO_KEYS(KC_V, KC_B) {
      send_unicode_string("☑"); }
    SEQ_TWO_KEYS(KC_V, KC_G) {
      send_unicode_string("✅"); }

    SEQ_ONE_KEY(KC_X) {
      send_unicode_string("✗"); }
    SEQ_TWO_KEYS(KC_X, KC_B) {
      send_unicode_string("☒"); }
    SEQ_TWO_KEYS(KC_X, KC_G) {
      send_unicode_string("❎"); }
    SEQ_TWO_KEYS(KC_X, KC_R) {
      send_unicode_string("❌"); }

    SEQ_ONE_KEY(KC_QUESTION) {
      send_unicode_string("❔"); }
    SEQ_ONE_KEY(KC_EXCLAIM) {
      send_unicode_string("❕"); }
    SEQ_TWO_KEYS(KC_QUESTION, KC_QUESTION) {
      send_unicode_string("❓"); }
    SEQ_TWO_KEYS(KC_EXCLAIM, KC_EXCLAIM) {
      send_unicode_string("❗"); }

    SEQ_THREE_KEYS(KC_C, KC_O, KC_F) {
      send_unicode_string("☕"); }
    SEQ_THREE_KEYS(KC_U, KC_M, KC_B) {
      send_unicode_string("☔"); }

    SEQ_THREE_KEYS(KC_L, KC_O, KC_L) {
      send_unicode_string("😀"); }
    SEQ_THREE_KEYS(KC_M, KC_D, KC_R) {
      send_unicode_string("🤣"); }
    SEQ_THREE_KEYS(KC_K, KC_I, KC_S) {
      send_unicode_string("😙"); }
    SEQ_THREE_KEYS(KC_A, KC_N, KC_G) {
      send_unicode_string("😇"); }
    SEQ_THREE_KEYS(KC_G, KC_L, KC_A) {
      send_unicode_string("😎"); }
    SEQ_THREE_KEYS(KC_A, KC_N, KC_G) {
      send_unicode_string("🤬"); }
    SEQ_THREE_KEYS(KC_F, KC_E, KC_A) {
      send_unicode_string("😱"); }
    SEQ_THREE_KEYS(KC_N, KC_E, KC_U) {
      send_unicode_string("😐"); }
    SEQ_THREE_KEYS(KC_T, KC_H, KC_I) {
      send_unicode_string("🤔"); }
    SEQ_THREE_KEYS(KC_Z, KC_I, KC_P) {
      send_unicode_string("🤐"); }
    SEQ_THREE_KEYS(KC_S, KC_U, KC_R) {
      send_unicode_string("😯"); }
    SEQ_THREE_KEYS(KC_R, KC_O, KC_L) {
      send_unicode_string("🙄"); }
    SEQ_THREE_KEYS(KC_M, KC_O, KC_O) {
      send_unicode_string("🌝"); }
    SEQ_THREE_KEYS(KC_H, KC_U, KC_G) {
      send_unicode_string("🫂"); }

    SEQ_THREE_KEYS(KC_H, KC_E, KC_N) {
      send_unicode_string("🐔"); }
    SEQ_THREE_KEYS(KC_R, KC_O, KC_O) {
      send_unicode_string("🐓"); }
    SEQ_THREE_KEYS(KC_D, KC_U, KC_C) {
      send_unicode_string("🦆"); }
    SEQ_THREE_KEYS(KC_P, KC_E, KC_A) {
      send_unicode_string("🦚"); }
    SEQ_THREE_KEYS(KC_B, KC_I, KC_R) {
      send_unicode_string("🐦"); }

    /* Subscript / superscript */
    SEQ_THREE_KEYS(KC_U, KC_P, KC_N) {
      send_unicode_string("⁰"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_N) {
      send_unicode_string("₀"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_C) {
      tap_code16(US_SUP1); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_C) {
      send_unicode_string("₁"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_G) {
      tap_code16(US_SUP2); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_G) {
      send_unicode_string("₂"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_H) {
      tap_code16(US_SUP3); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_H) {
      send_unicode_string("₃"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_T) {
      send_unicode_string("⁴"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_T) {
      send_unicode_string("₄"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_S) {
      send_unicode_string("⁵"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_S) {
      send_unicode_string("₅"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_R) {
      send_unicode_string("⁶"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_R) {
      send_unicode_string("₆"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_P) {
      send_unicode_string("⁷"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_P) {
      send_unicode_string("₇"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_D) {
      send_unicode_string("⁸"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_D) {
      send_unicode_string("₈"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_L) {
      send_unicode_string("⁹"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_L) {
      send_unicode_string("₉"); }
  };
}
