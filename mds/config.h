#pragma once

#define TAPPING_TERM 175

// If the IGNORE_MOD_TAP_INTERRUPT option is enabled, Mod Tap keys are
// no longer treated as a special case, and their behavior will match
// the behavior of other dual-role keys such as Layer Tap. Then the
// behavior of Mod Tap keys can be further tuned using other options
// such as PERMISSIVE_HOLD or HOLD_ON_OTHER_KEY_PRESS.
// See: https://docs.qmk.fm/#/tap_hold?id=ignore-mod-tap-interrupt
#define IGNORE_MOD_TAP_INTERRUPT

// This makes tap and hold keys (like Layer Tap) work better for fast
// typists, or for high TAPPING_TERM settings.
// See: https://docs.qmk.fm/#/tap_hold?id=permissive-hold
#define PERMISSIVE_HOLD
