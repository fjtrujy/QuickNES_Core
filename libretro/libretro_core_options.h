#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_definition option_defs_us[] = {
   {
      "quicknes_up_down_allowed",
      "Allow Opposing Directions",
      "Enabling this will allow pressing / quickly alternating / holding both left and right (or up and down) directions at the same time. This may cause movement-based glitches.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "quicknes_aspect_ratio_par",
      "Aspect Ratio",
      "Choose the preferred content aspect ratio. This will only apply when RetroArch's aspect ratio is set to 'Core provided' in the Video settings.",
      {
         { "PAR", NULL },
         { "4:3", NULL },
         { NULL, NULL },
      },
      "PAR",
   },
#ifndef PSP
   {
      "quicknes_use_overscan_h",
      "Show Horizontal Overscan",
      "Disable this to crop out (horizontally) the potentially random glitchy video output that would have been hidden by the bezel around the edge of a standard-definition television screen.",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "quicknes_use_overscan_v",
      "Show Vertical Overscan",
      "Disable this to crop out (vertically) the potentially random glitchy video output that would have been hidden by the bezel around the edge of a standard-definition television screen.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
#endif
   {
      "quicknes_no_sprite_limit",
      "No Sprite Limit",
      "Removes the 8-sprite-per-scanline hardware limit. This reduces flickering but can cause visual glitches, as some games exploit the hardware limit to generate special effects.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "quicknes_audio_nonlinear",
      "Audio Mode",
      "Configure audio emulation. 'Non-Linear' simulates the non-linear channel mixing of the NES APU. 'Linear' uses a less accurate approximation, which reduces quality but increases performance on low-end hardware. 'Stereo Panning' adds depth to the NES mono output through the use of panning techniques and reverb effects.",
      {
         { "nonlinear",      "Non-Linear" },
         { "linear",         "Linear" },
         { "stereo panning", "Stereo Panning" },
         { NULL, NULL },
      },
      "nonlinear",
   },
   {
      "quicknes_audio_eq",
      "Audio Equalizer Preset",
      "Adjust the balance between audio frequency components with a custom equalizer preset.",
      {
         { "default", "Default" },
         { "famicom", "Famicom" },
         { "tv",      "TV" },
         { "flat",    "Flat" },
         { "crisp",   "Crisp" },
         { "tinny",   "Tinny" },
         { NULL, NULL },
      },
      "default",
   },
   {
      "quicknes_palette",
      "Color Palette",
      "Specifies which color palette to use when decoding the NTSC video signal output by the NES.",
      {
         { "default",              NULL },
         { "asqrealc",             NULL },
         { "nintendo-vc",          NULL },
         { "rgb",                  NULL },
         { "yuv-v3",               NULL },
         { "unsaturated-final",    NULL },
         { "sony-cxa2025as-us",    NULL },
         { "pal",                  NULL },
         { "bmf-final2",           NULL },
         { "bmf-final3",           NULL },
         { "smooth-fbx",           NULL },
         { "composite-direct-fbx", NULL },
         { "pvm-style-d93-fbx",    NULL },
         { "ntsc-hardware-fbx",    NULL },
         { "nes-classic-fbx-fs",   NULL },
         { "nescap",               NULL },
         { "wavebeam",             NULL },
         { NULL, NULL},
      },
      "default",
   },
   {
      "quicknes_turbo_enable",
      "Turbo Enable",
      "Enables the use of the Turbo A and Turbo B buttons.",
      {
         { "none",     "None" },
         { "player 1", "Player 1" },
         { "player 2", "Player 2" },
         { "both",     "Player 1 & 2" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "quicknes_turbo_pulse_width",
      "Turbo Pulse Width (in frames)",
      "Specifies both the width and spacing (in frames) of input 'pulses' when the Turbo A and Turbo B buttons are held down. For example, the default setting of '3' corresponds to a (60/(3+3)) = 10 Hz turbo frequency (10 presses per second).",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3",
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "quicknes_up_down_allowed",
      "Karşı Yönlere İzin Ver",
      "Bunu etkinleştirmek aynı anda hem sola hem de sağa (veya bazı oyunlarda yukarı ve aşağı) yönlere basma / hızlı değiştirme / tutma olanağı sağlar. Bu, bazı oyunlarda harekete dayalı hataların oluşmasına neden olabilir. Bu core seçeneğinin devre dışı bırakılması en iyisidir.",
      {
         { "disabled",  NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "quicknes_aspect_ratio_par",
      "En Boy Oranı",
      "QuickNES Core'un sağlanan en boy oranını yapılandırın.",
      {
         { "PAR", NULL },
         { "4:3",     NULL },
         { NULL, NULL},
      },
      "PAR",
   },
#ifndef PSP
   {
      "quicknes_use_overscan_h",
      "Yatay ekran taşmasını göster",
      "Standart bir televizyon ekranının kenarına çerçeve tarafından gizlenmiş potansiyel olarak rastgele rastlanan video çıkışını kesmek (yatay olarak) için bunu devre dışı olarak ayarlayın.",
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "quicknes_use_overscan_v",
      "Yatay ekran taşmasını göster",
      "Standart bir televizyon ekranının kenarına çerçeve tarafından gizlenmiş potansiyel olarak rastgele rastlanan video çıkışını kesmek (dikey olarak) için bunu devre dışı olarak ayarlayın.",
      {
         { "disabled",     NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "enabled",
   },
#endif
   {
      "quicknes_no_sprite_limit",
      "Sprite Sınırı Yok",
      "Scanline başına 8 donanım sınırını kaldırır. Bu, sprite titremesini azaltır ancak bazı efektler için bunu kullandığında bazı oyunların hata yapmasına neden olabilir.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "quicknes_audio_nonlinear",
      "Ses Modu",
      "Ses modunu yapılandırın. Stereo kaydırma, derinlik yöntemi eklemek için kaydırma yöntemi ve bazı yankı efektleri kullanarak stereoyu simüle eder.",
      {
         { "nonlinear",  NULL },
         { "linear",  NULL },
         { "stereo spanning",  NULL },
         { NULL, NULL },
      },
      "nonlinear",
   },
   {
      "quicknes_audio_eq",
      "Ses ekolayzer ön ayarı",
      "Sesi eşitlemeye bir ön ayar uygular",
      {
         { "default",      "Varsayılan" },
         { "famicom",      "Famicom" },
         { "tv",           "TV" },
         { "flat",         "Flat" },
         { "crisp",        "Crisp" },
         { "tinny",        "Tinny" },
         { NULL, NULL},
      },
      "default",
   },
   {
      "quicknes_palette",
      "Renk paleti",
      "NTS tarafından NTSC video sinyali çıkışının kodunu çözerken hangi renk paletinin kullanılacağını belirtir.",
      {
         { "default",              "Varsayılan" },
         { "asqrealc",             NULL },
         { "nintendo-vc",          NULL },
         { "rgb",                  NULL },
         { "yuv-v3",               NULL },
         { "unsaturated-final",    NULL },
         { "sony-cxa2025as-us",    NULL },
         { "pal",                  NULL },
         { "bmf-final2",           NULL },
         { "bmf-final3",           NULL },
         { "smooth-fbx",           NULL },
         { "composite-direct-fbx", NULL },
         { "pvm-style-d93-fbx",    NULL },
         { "ntsc-hardware-fbx",    NULL },
         { "nes-classic-fbx-fs",   NULL },
         { "nescap",               NULL },
         { "wavebeam",             NULL },
         { NULL, NULL},
      },
      "default",
   },
   {
      "quicknes_turbo_enable",
      "Turbo'yu Etkinleştir",
      "Turbo A ve Turbo B düğmelerinin kullanılmasını sağlar.",
      {
         { "none", "Hiçbiri" },
         { "player 1",  "1. Oyuncu" },
         { "player 2",  "2. Oyuncu" },
         { "both",  "ikisi içinde" },
         { NULL, NULL},
      },
      "none",
   },
   {
      "quicknes_turbo_pulse_width",
      "Turbo darbe genişliği (çerçevelerde)",
      "Turbo A ve Turbo B düğmeleri basılı tutulduğunda 'darbelerin' girişinin hem genişliğini hem de aralığını (çerçevelerde) belirtir. Örneğin, varsayılan '3' ayarı bir (60 / (3 + 3)) = 10 Hz turbo frekansına (saniyede 10 basma) karşılık gelir.",
      {
         { "1",     NULL },
         { "2",     NULL },
         { "3",     NULL },
         { "5",     NULL },
         { "10",     NULL },
         { "15",     NULL },
         { "30",     NULL },
         { "60",     NULL },
         { NULL, NULL},
      },
      "3",
   },
   { NULL, NULL, NULL, { NULL, NULL }, NULL },
};

/*
 ********************************
 * Language Mapping
 ********************************
*/

struct retro_core_option_definition *option_defs_intl[RETRO_LANGUAGE_LAST] = {
   option_defs_us, /* RETRO_LANGUAGE_ENGLISH */
   NULL,           /* RETRO_LANGUAGE_JAPANESE */
   NULL,           /* RETRO_LANGUAGE_FRENCH */
   NULL,           /* RETRO_LANGUAGE_SPANISH */
   NULL,           /* RETRO_LANGUAGE_GERMAN */
   NULL,           /* RETRO_LANGUAGE_ITALIAN */
   NULL,           /* RETRO_LANGUAGE_DUTCH */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   NULL,           /* RETRO_LANGUAGE_RUSSIAN */
   NULL,           /* RETRO_LANGUAGE_KOREAN */
   NULL,           /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   NULL,           /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   NULL,           /* RETRO_LANGUAGE_ESPERANTO */
   NULL,           /* RETRO_LANGUAGE_POLISH */
   NULL,           /* RETRO_LANGUAGE_VIETNAMESE */
   NULL,           /* RETRO_LANGUAGE_ARABIC */
   NULL,           /* RETRO_LANGUAGE_GREEK */
   option_defs_tr, /* RETRO_LANGUAGE_TURKISH */
};

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb)
{
   unsigned version = 0;

   if (!environ_cb)
      return;

   if (environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version) && (version == 1))
   {
      struct retro_core_options_intl core_options_intl;
      unsigned language = 0;

      core_options_intl.us    = option_defs_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = option_defs_intl[language];

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_intl);
   }
   else
   {
      size_t i;
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      /* Allocate arrays */
      variables  = (struct retro_variable *)calloc(num_options + 1, sizeof(struct retro_variable));
      values_buf = (char **)calloc(num_options, sizeof(char *));

      if (!variables || !values_buf)
         goto error;

      /* Copy parameters from option_defs_us array */
      for (i = 0; i < num_options; i++)
      {
         const char *key                        = option_defs_us[i].key;
         const char *desc                       = option_defs_us[i].desc;
         const char *default_value              = option_defs_us[i].default_value;
         struct retro_core_option_value *values = option_defs_us[i].values;
         size_t buf_len                         = 3;
         size_t default_index                   = 0;

         values_buf[i] = NULL;

         if (desc)
         {
            size_t num_values = 0;

            /* Determine number of values */
            while (true)
            {
               if (values[num_values].value)
               {
                  /* Check if this is the default value */
                  if (default_value)
                     if (strcmp(values[num_values].value, default_value) == 0)
                        default_index = num_values;

                  buf_len += strlen(values[num_values].value);
                  num_values++;
               }
               else
                  break;
            }

            /* Build values string */
            if (num_values > 1)
            {
               size_t j;

               buf_len += num_values - 1;
               buf_len += strlen(desc);

               values_buf[i] = (char *)calloc(buf_len, sizeof(char));
               if (!values_buf[i])
                  goto error;

               strcpy(values_buf[i], desc);
               strcat(values_buf[i], "; ");

               /* Default value goes first */
               strcat(values_buf[i], values[default_index].value);

               /* Add remaining values */
               for (j = 0; j < num_values; j++)
               {
                  if (j != default_index)
                  {
                     strcat(values_buf[i], "|");
                     strcat(values_buf[i], values[j].value);
                  }
               }
            }
         }

         variables[i].key   = key;
         variables[i].value = values_buf[i];
      }
      
      /* Set variables */
      environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);

error:

      /* Clean up */
      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
