// vim: foldmethod=marker ft=c

// Vanha kunnon possu ISONA.
// Jan Äärelä ~ 2025
// ELEKTRONIIKKAKERHO

// Tuodaan muut tiedostot.
#include "vilkutus.c"
#include <avr/io.h>
#include <stdint.h>

// Muuttujia
int8_t kirkkaus[64];

// Kaikki ledit ON/OFF {{{
void kaikki(int tila) {
  int i;
  for (i = 0; i <= 63; i++) {
    kirkkaus[i] = tila;
  }
  vilkutus();
} // }}}

// Pulse efekti {{{
void himmennys(uint16_t kerrat, uint8_t nopeus) {} // }}}

// Ympäri kiertelevä {{{
void ympari(uint16_t kerrat, uint8_t nopeus) {} // }}}

// Aalto {{{
void aalto(uint16_t kerrat, uint8_t nopeus) {} // }}}

// 4 pikku rakettia, jotka kiertelee logo {{{
void raketit(uint16_t kerrat, uint8_t nopeus) {} // }}}
