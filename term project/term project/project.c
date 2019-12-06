#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <string.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

int i = 0;

// 테마선택
char* theme = "\n\n\n,ZZZZZ   8ZZZZZ   ZZZZZ5   ZZZZZ   ,ZZZZZ   BZZZZZ   ZZZZZ8   ZZZZZ,   ZZZZZ   5ZZZZZ   ZZZZZ8   \n                                                                                                    \n               ,   BD                   5D                             yD                 WW   BD   \n  jzBBBBBzZ   ZZZ ZZZE    BzzzzzzzB5   zZZZ                 ZZZ       BZZZ    ZZZZZZZZZ8 5ZZZ ,ZZZ  \n jZZZZZZZZZZ  ZZZ BZZD   ZZZZZZZZZZZB  jZZZ                 ZZZ        ZZZ    ZZZZZZZZZZ  ZZZ  ZZZ  \n ,ZZZ         ZZZ BZZD   ZZZ     ZZZD  jZZZ                 ZZZ   WZEB9ZZZ    ZZZ         ZZD  ZZZ  \n  ZZZ         ZZZ BZZD   ZZZ     ZZZ5  jZZZ                DZZZ   ZZZZZZZZ    ZZZZZZZZZy  ZZZZZZZZ  \n  ZZZZZZZZ ZZZZZZ BZZD   ZZZ     ZZZ5  jZZZZZZ9           ZZZZZZB      ZZZ    ZZZ wWWWD   ZZZ 5ZZZ  \n  ZZZyEZZZ W85ZZZ BZZD   ZZZ     ZZZ5  jZZZ,zZ          ZZZZZ ZZZZ9   ,ZZZ    ZZZ      ,  ZZz  ZZZ  \n  ZZZ         ZZZ BZZD   ZZZ     ZZZ5  jZZZ           ZZZZZ     ZZZZ  wZZZ    ZZZZZZZZZZZ ZZZ  ZZZ  \n WZZZ,BzzEZZ  ZZZ BZZD   ZZZEBEEyZZZB  jZZZ            ZZ         W   wZZZ                ZZ   ZZ9  \n  ZZZZZZZZZZ  ZZZ BZZD   ZZZZZZZZZZZw  jZZZ               wZZj        BZZZ        z555Dzz5, jBy,    \n              ZZZ BZZD                 jZZZ               ZZZZ         EZy       ZZZZZZZZZZZZZZZZZ  \n              ZZZ BZZD                 jZZZ               ZZZZ                                8ZZZ  \n              ZZZ ZZZZ                 zZZZ               ZZZZwBzzzzzzzzzZ                    ZZZZ  \n                   DB                   yD                EZZZZZZZZZZZZZZZE                   ZZZZ  \n                                                                                               ,W   \n    zyy5D   ,DyyDW   y5yyB    zyyyz    zyyyB    Byy5y   WDjWy    jWww5    Bjyyz    Byy5y   WDj,,    \n    ZZZZZ   BZZZZE   ZZZZZj   ZZZZZ    ZZZZZ   5ZZZZZ   EZZZZB   ZZZZZ    ZZZZZ   jZZZZZ   EZZZZB   \n";

// 고인돌
char* goindol = "\n\n\n                                            ,wyDzE9EZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZB                \n                   j,yB89ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ             \n     wzEZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ           \n    ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZE         \n     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        \n      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ8      \n       ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZB    \n          ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZj   \n              ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ    \n                  yZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ    \n                        ZZZZZZZZ5ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZB    \n                        ZZZZZZZZ                         ,ywj9ZZZZZZZ                               \n                        ZZZZZZZZ                              ZZZZZZZ                               \n                       wZZZZZZZZ                              ZZZZZZZZ                              \n                       ZZZZZZZZZ                              ZZZZZZZZW                             \n                       ZZZZZZZZZ                              ZZZZZZZZZ                             \n                       ZZZZZZZZZ                              ZZZZZZZZZZ                            \n                       ZZZZZZZZZ                              ZZZZZZZZZZ                            \n                       ZZZZZZZZW                              ZZZZZZZZZZZ                           \n                      zZZZZZZZZ                               ZZZZZZZZZZZB                          \n                      ZZZZZZZZZ                               ZZZZZZZZZZZZ                          \n                      ZZZZZZZZz                               ZZZZZZZZZZZZZ                         \n                      ZZZZZZZZ                               DZZZZZZZZZZZZZ,                        \n                     ZZZZZZZZZ                               ZZZZZZZZZZZZZZZ                        \n                     ZZZZZZZZZ                               ZZZZZZZZZZZZZZZZ                       \n                    BZZZZZZZZZW                              ZZZZZZZZZZZZZZZZ                       \n                    ZZZZZZZZZZZ                             ZZZZZZZZZZZZZZZZZZ                      \n                   ZZZZZZZZZZZZ                            ZZZZZZZZZZZZZZZZZZZ                      \n                   ZZZZZZZZZZZZZ                          ZZZZZZZZZZZZZZZZZZZZZ                     \n                  ZZZZZZZZZZZZZZ                          ZZZZZZZZZZZZZZZZZZZZZ                     \n                 WZZZZZZZZZZZZZZ8                         ZZZZZZZZZZZZZZZZZZZZZy                    \n                 ZZZZZZZZZZZZZZZZ                         ZZZZZZZZZZZZZZZZZZZZZZ                    \n                  ZZZZZZZZZZZZZE                           ZZZZZZZZZZZZZZZZZZZZ5                    \n                                                             , WWBZZZZZZZZZZZZW                     \n";
// 1번 글씨
char* first = "\n\n                                     ZZ                   w         ZZE                     ZZE     \n          ZZZ       ZZZ     jZZZ    ZZZZ             ZZZZZZZZZZZ    ZZZ          ZZZ       yZZZ     \n      ,ZZZZZZz      ZZZy    zZZZ    ZZZZ            ZZZZ     9ZZZ   ZZZ          ZZZ        ZZZ     \n    ZZZZZZZZZj      ZZZD ,, 8ZZZ    ZZZZ            ZZZ       ZZZ   ZZZ          ZZZ        ZZZ     \n    ZZZB  ZZZj      ZZZZZZZZZZZZZZZZZZZZ            EZZZZ8B8ZZZZZ   ZZZ          ZZZ        ZZZ     \n          ZZZj      ZZZw    5ZZZZZZZZZZZ              zZZZZZZZz     ZZZ         8ZZZB       ZZZ     \n          ZZZj      ZZZ     wZZZ    ZZZZ                         z  ZZZ        WZZZZZ       ZZZ     \n          ZZZj      ZZZZZZZZZZZZ    ZZZZ          ZZZZZZZZZZZZZZZZZ ZZZ       ZZZZ ZZZZ     ZZZ     \n          ZZZj       EZE99EZZZZw    ZZZZ           EzzzjBZZZ ,      ZZZ     8ZZZZ   ZZZZ5   ZZZ     \n          ZZZj                      ZZZZ                 ZZZ   ZZZZZZZZ    ZZZZy     yZZZZ  ZZZ     \n          ZZZj         ZZZZ         ZZZZ                 8ZZ   jzBD8ZZZ    wZZ         BD   ZZZ     \n          ZZZB         ZZZZ                           ZZZy          BZE                     ZZZ     \n          ZZZ          ZZZZ                           ZZZz                                 ,ZZZ     \n                       ZZZZZZZZZZZZZZZZZ              ZZZZZZZZZZZZZZZZZZ                   ,ZZZ     \n                       ,ZZZZZZZZZZZZZZZZ,             8ZZZZZZZZZZZZZZZZZ                            \n                                                                                                    \n ZZZZZw   9ZZZZB   yZZZZZ    ZZZZZ    ZZZZZ    ZZZZZy   DZZZZ8   ,ZZZZZ    ZZZZZ    ZZZZZW   9ZZZZB \n";

// 성
char* castle = "\n\n\n                                                                                                   \n                                 ZZZZZZZ      ZZZZZZZZ     9ZZZZZZZ                                 \n                                 ZZZZZZZ      ZZZZZZZ8     wZZZZZZZ                                 \n                                 ZZZZZZZ      EZZZZZZy      ZZZZZZZ                                 \n                                 ZZZZZZZ Wyyy ZZZZZZZ9 yyy 5ZZZZZZZ                                 \n                                 ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                                 \n                                 ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                                 \n                                 ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                                 \n                                                                                                    \n                                                                                                    \n                                    8ZZZZZZZZZZZZZZZZZZZZZZZZZZ                                     \n                                    yZZZZZZZZZZZZZZZZZZZZZZZZZZ                                     \n                                    jZZZZZZZZZZZZZZZZZZZZZZZZZZ                                     \n                                    jZZZZZZZZZZZzww9ZZZZZZZZZZZ                                     \n                                    jZZZZZZZZZ       DZZZZZZZZZ                                     \n                                    jZZZZZZZZZ        ZZZZZZZZZ                                     \n                                    jZZZZZZZZZ        ZZZZZZZZZ                                     \n                                    DZZZZZZZZZ        ZZZZZZZZZ                                     \n                                    5ZZBZZZZZZ        ZZZZZZ8ZZ                                     \n                                        ZZZZZ9        ZZZZZy                                        \n           ZZZZZ   ZZZZZZZZZ   yZZZZZ   ZZZZZZyEEEEEEjZZZZZE   ZZZZZ    ZZZZZZZZj   ZZZZZ           \n           ZZZZZ   5ZZZZZZZZ    ZZZZz   ZZZZZZZZZZZZZZZZZZZE   ZZZZZ    ZZZZZZZZ    ZZZZZ           \n           ZZZZZ   wZZZZZZZZ    ZZZZz   ZZZZZZZZZZZZZZZZZZZE   ZZZZZ    ZZZZZZZZ    ZZZZZ           \n           ZZZZZZZZZZZZZZZZZZZZZZZZZz   ZZZZZZZZZZZZZZZZZZZE   ZZZZZZZZZZZZZZZZZZZZZZZZZZ           \n           ZZZZZZZZZZZZZZZZZZZZZZZZZz   ZZZZZZZZZZZZZZZZZZZE   ZZZZZZZZZZZZZZZZZZZZZZZZZZ           \n           ZZZZZZZZZZZZZZZZZZZZZZZZZZ   ZZZZZZZZZZZZZZZZZZZE   ZZZZZZZZZZZZZZZZZZZZZZZZZZ           \n           B                       j    ZZZZZZZZZZZZZZZZZZZE   j,                      wj           \n                                        ZZZZZZZZZZZZZZZZZZZD                                        \n               ZDDDDDDDDDDDDDDDzZ   wZD ZZZZZZZZZZZZZZZZZZZZ,DZ    ZDDDDDDDDDDDDDDDDZ               \n              wZZZZZZZZZZZZZZZZZZ   zZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZZZZZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZZZ  ,ZZZZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   jZZZZZZZZZZZZZZZZZZZZZZZZZZ    ZZZZZZ       ,ZZZZ               \n               ZZZZZZZZZZZZZZZZZZ   yZZZZZZZZZZZZZZZWZZZZZZZZZZ    ZZZZ     y      ,Z               \n               ZZZZZZZZZZZZZZZZZZ   ZZZ8W ZZZZZZZD     ZZZZZZZZ    ZZ     jZZZZy                    \n               ZZZZZZZZZZZZZZZZZZ           WZB         jZZZZZZ    9    wZZZZZZZZZy                 \n               ZZZZZZZZZZ9y             w         ,ZZ     EZZZZ        ZZZZZZZZZZZZZZ5              \n               ZZZZZZ             BZZZZZZZZW    ZZZZZZZ     ZZZ      ZZZZZZZZZZZZZZZZZZZ5           \n               ZZZZ5      ,5ZZZZZZZZZZZZZZZZZZZZZZZZZZZZz     Z    ZZZZZZZZZZZZZZZZZZZZZZZZ         \n               ZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ,      ZZZZZZZZZZZZZZZZZZZZZZZZZZZ        \n               ZZ    BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZD       \n              zZ    ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ       DZZZZZZZZZZZZZZZZZZZZZZZ       \n                   ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ5            DZZZZZZZZZZZZZZZZZ      \n                 DZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZEy         WZZZZZZZZZZZZZZZy     \n                ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZE     ZZZZZZZZZZZZZZZ     \n               ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZ    \n             yZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZy      ,8ZZZZZZZZZy   \n           yZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ            BZZZZ   \n         ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZjZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZD               \n      BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZB         8ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZW         \n   ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ9                  WZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ8, \n                                                                                                  , \n";
// 2번 글씨
char* second = "\n\n                                                                                                    \n         ,          w5W      D5     ZZZZ             ZZZZZZZZZZZZZZZZZ          W      yZZZ ZZZZ    \n    ,ZZZZZZZZZ      ZZZW    ZZZZ    ZZZE            DZZZZZZZZZZZZZZZZZ        wZZZ     zZZZ zZZZ    \n   ZZZZZD5BZZZZ     ZZZ     BZZZ    ZZZ9                   WZZZ                ZZZ     5ZZZ BZZZ    \n   ZZZ      ZZZZ    ZZZZZZZZZZZZwzz ZZZ9                8ZZZZZZZZZ5            ZZZ      ZZZ BZZZ    \n            ZZZD    ZZZZZZZZZZZZZZZZZZZ9            ZZZZZZZZ  yZZZZZZZZ        ZZZ  ZZZZZZZ BZZZ    \n           ZZZZ     ZZZ     yZZE    ZZZ9            EZ5             5Z        ZZZZE  ZEZZZZ BZZZ    \n         ZZZZZ      ZZZZEZZzZZZZ    ZZZ9          ZE5wwyBEZZZZZZZEBjwjzZ     ZZZZZZ5    ZZZ BZZZ    \n       5ZZZZ        ZZZZZZZZZZZ8    ZZZ9          ZZZZZZZZZZZZZZZZZZZZZZZ   ZZZZ ZZZZ  yZZZ BZZZ    \n      ZZZZW                         ZZZ9                    ZZZ           ZZZZZ   ZZZZ jZZZ BZZZ    \n    ZZZZ               8ZZW         ZZZZ                zZZZZZZZZZw       ZZZ       ZZ jZZZ BZZZ    \n  wZZZZzBZZZZZZZ       ZZZZ          98              zZZZZZZZZZZZZZZZ                  5ZZZ BZZZ    \n   ZZZZZZZZZZZZZE      ZZZZ                          ZZZ          ZZZZ                 8ZZZ BZZZ    \n                       ZZZZ yyyyyyyyy  y5j           ZZZW         ZZZZ                  ZZZ ZZZZ    \n                       ZZZZZZZZZZZZZZZZZ             wZZZZZZZZZZZZZZZ                        ZZ     \n                                                        y9ZZZZZZZz                                  \n\n                                                                                                    \n ZZZZZj   ZZZZZZ   ZZZZZZ   ZZZZZZ   jZZZZZ    ZZZZZB   ZZZZZZ   ZZZZZZ   ZZZZZZ   jZZZZZ    ZZZZZ9 \n";

// 아파트
char* apart = "\n\n                  ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ,                                                    \n                  EZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                      Z5W                            \n                  EZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                      ZZZZZZZZZZZZZZzDW              \n                  EZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZD  \n                  EZZZZZZ5    zZZZZ     ZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZE  \n                  EZZZZZZz    ZZZZZ     ZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n                  EZZZZZZW    DZZZZ     ZZZZZZZ                      ZZZZZZZ     ZZZZy    DZZZZZZB  \n                  EZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                      ZZZZZZZ     ZZZZD    8ZZZZZZB  \n                  EZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                      ZZZZZZZ     ZZZZw    jZZZZZZB  \n                  EZZZZZZZZZZZZZZZZEZZZEZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n                  EZZZZZZj    BZZZZ     ZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n                  EZZZZZZ5    8ZZZZ     ZZZZZZZ                      ZZZZZZZ     ZZZZW    yZZZZZZB  \n                  EZZZZZZZwBBwZZZZZ,DBB,ZZZZZZZ                      ZZZZZZZ     ZZZZD    8ZZZZZZB  \n                  EZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                      ZZZZZZZ     ZZZZW    5ZZZZZZB  \n                  ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n                                   ZZZZZZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n                                   ZZZZZZZZZZZZ                      ZZZZZZZjZZ9DZZZZZDZZDZZZZZZZB  \n                                   ZZZZZZZZZZZZ                      ZZZZZZZ     ZZZZj    DZZZZZZB  \n 9ZZZZZZZZZZZZZZZZZZZZZZZZZZZZD    ZZZZZZZZZZZZ                      ZZZZZZZ     ZZZZj    DZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZ                      ZZZZZZZjZZ9DZZZZZDZZDZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZ                      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                                       ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZ     ZZZZ     ZZZZZZZ                                       ZZZZZZZ     ZZZZy    DZZZZZZB  \n ,ZZZZZZZ     ZZZZ     ZZZZZZZ     5                           z     ZZZZZZZ     ZZZZB    8ZZZZZZB  \n ,ZZZZZZZ     ZZZZ     ZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZ     ZZZZ     WZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZ     ZZZZ     ZZZZZZZ     ZZZZZZZ     EZZZZ     ZZZZZZZ     ZZZZZZZ     ZZZZw    yZZZZZZB  \n ,ZZZZZZZ     ZZZZ     ZZZZZZZ     ZZZZZZZ     ZZZZZ     ZZZZZZZ     ZZZZZZZ     ZZZZy    BZZZZZZB  \n ,ZZZZZZZ 55wyZZZZD,55 ZZZZZZZ     ZZZZZZZB,55 ZZZZZ 55j,ZZZZZZZ     ZZZZZZZ y5j, ZZZ9 55 ZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZ     ZZZZ,    ZZZZZZZ     ZZZZZZZw    ZZZZZ     ZZZZZZZ     ZZZZZZZ     ZZZZD    zZZZZZZB  \n ,ZZZZZZZ     ZZZZ     ZZZZZZZ     ZZZZZZZ     ZZZZZ     ZZZZZZZ     ZZZZZZZ     ZZZZD    8ZZZZZZB  \n ,ZZZZZZZ     ZZZZ     ZZZZZZZ     ZZZZZZZ     9ZZZZ     ZZZZZZZ     ZZZZZZZ     ZZZZ,    jZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZB  \n ,ZZZZZZZZZZZD    jZZZZZZZZZZZ     ZZZZZZZZZZZZ     ZZZZZZZZZZZZ     ZZZZZZZZZZZZ     ZZZZZZZZZZZB  \n ,ZZZZZZZZZZZZ    EZZZZZZZZZZZ     ZZZZZZZZZZZZ     ZZZZZZZZZZZZ     ZZZZZZZZZZZZ    WZZZZZZZZZZZB  \n wZZZZZZZZZZZZ    EZZZZZZZZZZZ     ZZZZZZZZZZZZ     ZZZZZZZZZZZZ     ZZZZZZZZZZZZ    jZZZZZZZZZZZz  \n 8ZZZZZZZZZZZZ    ZZZZZZZZZZZZ5    ZZZZZZZZZZZZw    ZZZZZZZZZZZZ     ZZZZZZZZZZZZ    EZZZZZZZZZZZZ  \n";
// 3번 글씨
char* third = "\n\n\n      9ZZZZZ5       ZZZD     ZZZ    ZZZZ                ZZZ8        ZZZ     BEEEEEEEZ   ZZZ  ZZZ    \n    ZZZZZZZZZZZ     ZZZZ     ZZZ    BZZZ          8ZZZZZZZZZZZZZZ   ZZZ    ZZZZZZZZZZZ  ZZZ  ZZZ    \n    ZZ8     ZZZE    ZZZZ yy,jZZZ,   ,ZZZ           ZZZzyW, wWD9ZZ,  ZZZ    ZZZZ         ZZZ  ZZZ    \n            ZZZZ    ZZZZZZZZZZZZZZZZZZZZ                wz5     zZZZZZZ    ZZZZ         ZZZ  ZZZ    \n           8ZZZ     ZZZz     ZZZBZZ9ZZZZ             ZZZZZZZZZZ  ZzBZZZ    ZZZZ         ZZZZZZZZ    \n      ZZZZZZZ       ZZZ8     ZZZ    wZZZ            ZZZ     BZZ9    ZZZ    ZZZZ         ZZZE9ZZZ    \n       Z99ZZZZZD    ZZZZZZZZZZZZ    zZZZ            ZZZ     ZZZ98ZZZZZZ    ZZZZ         ZZZ  ZZZ    \n             ZZZ,    y5j, wy55y     zZZZ             ZZZZZZZZZZ  y  ZZZ    ZZZZwBzz9ZZ  ZZZ  ZZZ    \n             ZZZD                   EZZZ                  jy        ZZZ    EZZZZZZZZZZZ ZZZ  ZZZ    \n   ZZZ8    wZZZZ       zZZZ         WZZZ               ZZZ          ZZZ                 ZZZ  ZZZ    \n   EZZZZZZZZZZZ        wZZZ                            ZZZ                              ZZZ  ZZZ    \n,      zEZ95           WZZZ                            ZZZ                              ZZZ  ZZZ    \n                       DZZZZZZZZZZZZZZZZZ              ZZZZZZZZZZZZZZZZZ                     ZZZ    \n                        9ZZZZZZZZZZZZZZZ               DEZZZZZZZZZZZZZZy                            \n                                                                                                    \n ZZZZZZ   ZZZZZZ   zZZZZZ    ZZZZZW   ZZZZZZ   ZZZZZZ   zZZZZZ    ZZZZZW   ZZZZZZ   ZZZZZZ   ZZZZZZ \n";

//신전
char* sinjeon = "w, , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , \n, , w, , , , , , , , , , , w, , , , , , , , , , , , , , , , , , , , , , , , , BZZZZZ8, , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , \n, , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , BZZZZZZEEZZZZZZw, , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , \n, , , , , , , , w, , , , , , , , , , , , , , , , , , , , , , , DZZZZZZEEEEEEEEEEZZZZZZW, , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , \n, , , , , , , , , , , , , , , , , , , , , , , , , , , , BZZZZZZEEEEEEEEEEEEEEEEEEZZZZZZ5, , , , , , , , , , , , , , , , , , , , , , , , , , , , \n, , , , , , , , , , , , , , , , , , , , , , , zZZZZZZEEEEEEEEEEEEEEEEEEEEEEEEEEZZZZZZD, , , , , , , , , , , , , , , , , , , , , , , \n, , , , , , , , , , , , , , , , , , , BZZZZZZEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEZZZZZZz, , , , , , , , , , , , , , , , , , , \n, , , , , , , , , , , , , , , , zZZZZZE9EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEZZZZZZ9, , , , , , , , , , , , , , , \n, , , , , , , , , , , , zZZZZZZEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEZZZZZZw, , , , , , , , , , , \n, , , , , , , , zZZZZZZEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE9EZZZZZZW, , , , , , , \n, , , , , , zZZZZZEEEE99999EEEE999999999E999999EEE9999EEEE99999EEEE99EEEEEEEEEEEEEEEEEZZZZZZ5, , , , , \n, , , , , , ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ, , , , , \n, , , , , , Wjwww, wwww5, , , , , \n, , , , , , ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ, , , , , \n, , , , , , , , , , , , ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ, , , , , , , , , , \n, , , , , , , , , , , ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ, , , , , , , , , , , \n, , , , , , , , , , , , , , , , , , , , , , , \n, , , , , , , , , , , , , , ZZZZZZZZZZ         DZZZZZZZZZ8         ZZZZZZZZZZw         ZZZZZZZZZZ, , , , , , , , , , , , \n, , , , , , , , , , , , , , Z999EZ, 5Z999Zz             Z9999Z              Z9999Z, , , , , , , , , , , \n, , , , , , , , , , , , , , BZ999EZ, ZZ999ZZ             Z9999Zz             Z9999Z, , , , , , , , , , , \n, , , , , , , , , , , , , 9Z9999Z, ZZ999ZZ             Z8999ZZ             Z9999Z, , , , , , , , , , , \n, , , , , , , , , , , ZZ9998Z, ZZ999ZZ             Z8999ZZ             Z9999Z, , , , , , , , , , \n, , , , , , , , , , , , ZZ9998Z             ZZ999EZ             Z8999ZZ             Z9999Zw, , , , , , , , \n, , , , , , , , , , , ZZ9998Z             ZE9999Z             Z9999ZZ, Z9999Z5, , , , , \n, , , , , , , , , ZZ9999Z             ZE9998Z             Z9999ZZ            yZ9999Zz, , , , , , \n, , , , , , , ZZ9999Z             Z99998Z             Z9999EZ            DZ9999ZE, , , , \n, , , , , , , , ZE9999Z             Z99998Z             Z99999Z            BZ9999ZZ, , , , \n, , , , , , ZE9999Z             Z89999Z             Z99998Z            zZ9999ZZ, , , \n, , , , , , Z99999ZW            Z89999Z            wZ99998Z            8Z9999ZZ, , \n, , , , Z99999Z5            Z89999Z            WZ99998Z            EZ9999ZZ, \n, , , , , Z89999ZD            Z99999Z            yZ99998Z            EZ9999EZ                \n, , Z88889Zz           wZ88888ZW           zZ88888Z            ZZ9999EZ, , \n, , Z89999ZZ           wZ99999Z5           9Z99998Z            ZZ99999Z                \n, , Z89988ZZ           yZ89988ZB           ZZ99999Z            ZZ99999Z                \n, Z88889ZZ           BZ88889ZB           ZZ89998Z            ZE89998Z, \n, Z89998ZZ           9Z99998Zz           ZZ88888Z            ZE88888Z                \n, , Z88888EZ           ZZ88888Z8           ZZ99998Zw           Z999998Z                \n, wZ888889Z           ZZ88899Z9           ZE88888ZW           Z988888Z                \n, yZ888888Z           ZZ88888ZE           Z988888Z5           Z888888Z                \n                wZ888888Z           ZE88888Z8           Z988888Zj           Z888888Z, \n              ZZZZZZZZZZZzZy      Z9ZZZZZZZZZEZ      jZ8ZZZZZZZZZZZ      BZ8ZZZZZZZZZZZ             \n, , Z9BD555555DzZ       Z8B5555555B8Z       Z8B555555DB9Z      wZzD555555DBZz             \n           ZEzy, WD9ZZZEBW           WB9ZZE9DW, , , , , yzEZZZ85w, yzEZ          \n, ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ          \n      EZZ9zZ88888888888888888888888888888888888888888888888888888888888888888888888888888ZBEZZB     \n      EZZZZ9888888888888888888888888888888888888888888888888888888888888888888888888888889ZZZZ5     \n  y, , 8E8888888888888888888888888888888888888888888888888888888888888888888888888888888888888Z5, , B \n DZZZZZ988888888888888888888888888888888888888888888888888888888888888888888888888888888888889ZZZZZ \n BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ \n";





typedef struct {
	int randNum;
	int score;
	int correct;
}Player;

// 등수 매겨주는 함수
void grade(Player* person, int playerNum) {
	int j = 0;
	int gradeList[4][2];
	int x = 0;
	int y = 0;
	int p = 0;
	int q = 0;
	int k = 0;

	for (j = 0; j < playerNum; j++) {
		gradeList[j][1] = (person + j)->score;
		gradeList[j][0] = j+1;

	}
	for (p = 0; p < playerNum; p++) {
		for (q = p + 1; q < playerNum; q++) {
			if (gradeList[p][1] < gradeList[q][1]) {
				x, y = gradeList[p][0], gradeList[p][1];
				gradeList[p][0], gradeList[p][1] = gradeList[q][0], gradeList[q][1];
				gradeList[q][0], gradeList[q][1] = x, y;
			}
		}
	}
	for (k = 0; k < playerNum; k++) {
		printf("%d등 player%d %d점\n", k+1, gradeList[k][0], gradeList[k][1]);
	}
}

// 딜레이 되는 프린팅 함수
void printing_str_delay(char*str, float delay) {
	int k;
	for (k = 0; k < strlen(str); k++) {
		printf("%c", *(char*)(str + k));
		Sleep(delay);
	}
}

// 이벤트 발생 함수
int happen(int person, int themeNum, int playerNum, int maxPerson, int minPerson) {
	char* weatherList[4];
	char* eventList[3][3][2];
	int randomNumber = 0;
	int yes1 = 0;
	int yes2 = 0;
	int u = 0;
	int minus = 0;
	int plus = 0;


	randomNumber = rand() % 2;
	minus = rand() % (minPerson + 1);
	plus = rand() % (101 - maxPerson);


	// 날씨는 공통 적용
	weatherList[0] = "폭풍우가 몰아쳤습니다. 인원이 %d명 줄었습니다.";
	weatherList[1] = "번개가 쳤습니다. 인원이 %d명 줄었습니다.";
	weatherList[2] = "지진이 났습니다. 인원이 %d명 줄었습니다.";
	weatherList[3] = "풍년이 났습니다. 인원이 %d명 늘었습니다.";

	// 이벤트
	// eventList[themeNum-1][playerNum-2][0]
	eventList[1][0][0] = "\nEVENT 발생!!!!\n전쟁을 하시겠습니까? 방어를 하겠습니까? 전쟁은 1, 방어는 2를 입력하세요.";

	
	if (randomNumber == 0) {
		printf("%s", (eventList[themeNum - 1][playerNum - 2][0]));
		scanf("%d", &yes1);
		scanf("%d", &yes2);

		if ((yes1 == 1) && (yes2 == 1)) {
			printf("전쟁발생으로 백성의 수가 %d명 줄어듦.", minus);
			return (-minus);
		}
		else if ((yes1 == 1) && (yes2 == 2)) {
			printf("player1은 공격, player2는 방어");
			return 0;
		}
		else if ((yes1 == 2) && (yes2 == 1)) {
			printf("player1은 방어, player2는 공격");
			return 0;
		}
		else {
			printf("서로 방어함. 평화로워져서 백성들의 수가 %d명 늘어남", plus);
			return plus;
		}
	}
	else {
		if (((plus + minus) % playerNum) == 3){
			printf(weatherList[3], plus);
			return plus;
		}
		else {
			printf(weatherList[((plus + minus) % playerNum)], minus);
			return (-minus);
		}
	}

}



// 게임 메인 함수
void game(playerNum, themeNum){
	int playersCorrect = 0;
	int number = 0;
	int box_number[4][20];
	char box_updown[4][20];
	int loop = 0;
	int happening = 0;
	int maxPerson = 0;
	int minPerson = 101;
	int u = 0;
	int population[4];
	int happenNum = 0;
	int g = 0;

	Player* person;

	srand(time(NULL));

	person = (Player*)malloc(sizeof(Player) * playerNum);
	for (i = 0; i < playerNum; i++) {
		(person + i)->randNum = (rand() % 101);  //0~100사이의 난수
		(person + i)->score = 1000;  //기본1000점
		(person + i)->correct = 0;  //정답여부 판별 변수
	}

	for (u = 0; u < playerNum; u++) {
		maxPerson = max(maxPerson, ((person + u)->randNum));
		minPerson = min(minPerson, ((person + u)->randNum));
	}


	while ((playersCorrect == 0) && (loop < 20)) {
		playersCorrect = 1;
		printf("\n\n  ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ      ROUND %d      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ\n\n", loop+1);
		for (i = 0; i < playerNum; i++) {

			if (((person + i)->correct) == 1) {
				continue;
			}
			if (loop > 1) {
				printf("player %d 님의 이전 정보 : ", i + 1);
				printf("%d %c", box_number[i][loop - 2], box_updown[i][loop - 2]);
				printf(" and %d %c\n", box_number[i][loop - 1], box_updown[i][loop - 1]);
				printf("-----------\n");
			}
			else if (loop == 1) {
				printf("player %d 님의 이전 정보 : ", i + 1);
				printf("%d %c\n", box_number[i][loop - 1], box_updown[i][loop - 1]);
				printf("-----------\n");
			}

			printf("player %d : \n", i + 1);
			scanf("%d", &number);
			box_number[i][loop] = number;
			if (number == ((person + i)->randNum)) {
				((person + i)->correct) = 1;
				printf("정답입니다.\n");
			}
			else {
				((person + i)->score) -= abs(((person + i)->randNum) - number);
				if (((person + i)->randNum) > number) {
					printf("더 크게하세요.\n");
					box_updown[i][loop] = 'u';
				}
				else {
					printf("더 작게하세요.\n");
					box_updown[i][loop] = 'd';
				}
			}

			

		}

		happening = rand() % 2;
		// 게임 이벤트 출력
		if (happening == 1) {
			happenNum = happen(30, themeNum, playerNum, maxPerson, minPerson);
			for (u = 0; u < playerNum; u++) {
				(person + i)->randNum += happenNum;
			}
		}
		for (g = 0; g < playerNum; g++) {
			printf((box_number[g]));
		}



		for (i = 0; i < playerNum; i++) {
			playersCorrect *= ((person + i)->correct);
		}
		loop++;


		
	}

	if (loop < 20) {
		printf("모두가 맞췄으므로 게임을 끝내겠습니다.\n");
	}
	else {
		printf("20번의 기회를 모두 사용하셨으니 게임을 끝내겠습니다.\n");
	}

	for (i = 0; i < playerNum; i++) {
		printf("player %d의 점수 : %d\n", i + 1, ((person + i)->score));
	}

	grade(person, playerNum);
}




 

int main() {
	
	int playerNum = 0;
	int themeNum = 0;

	char* crown = "               Z8                                                                                  \n               jZZ                                                                                  \n                                                                                                    \n                Z                                                                                   \n  ZZB          8ZZ           ZZZ                                                                    \n  9ZZ         9ZZZZ          ZZ,                                                                    \n      Z      ZZZZZZZ       E                                                                        \n      ZZZZ  8ZZZZZZZZ  wZZZZ                                                                        \n       ZZZZZZZZZZZZZZZZZZZZ                                                                         \n       ZZZZZZZZZZZZZZZZZZZZ                                                                         \n       5ZZZZZZZZZZZZZZZZZZ                                                                          \n        ZZZZZZZZZZZZZZZZZZ                                                                          \n        ZZZZZZZZZZZZZZZZZZ                                                                          \n                                                                                                    \n        ZZZZZZZZZZZZZZZZZZ                                                                          \n        B,              wy                                                                          \n";
	char* crown2 = "               Z8                                Z,                                                \n               jZZ                               ZZZ                                                \n                                                                                                  \n\n                Z                                 Z                                                 \n  ZZB          8ZZ           ZZZ    ZZ,          ZZZ           ZZD                                  \n  9ZZ         9ZZZZ          ZZ,    ZZZ         ZZZZZ         BZZ                                   \n      Z      ZZZZZZZ       E            9      ZZZZZZZ      Wy                                      \n      ZZZZ  8ZZZZZZZZ  wZZZZ            ZZZE  ZZZZZZZZZ  5ZZZ                                       \n       ZZZZZZZZZZZZZZZZZZZZ             5ZZZZZZZZZZZZZZZZZZZZ                                       \n       ZZZZZZZZZZZZZZZZZZZZ              ZZZZZZZZZZZZZZZZZZZj                                       \n       5ZZZZZZZZZZZZZZZZZZ               ZZZZZZZZZZZZZZZZZZZ                                        \n        ZZZZZZZZZZZZZZZZZZ                ZZZZZZZZZZZZZZZZZE                                        \n        ZZZZZZZZZZZZZZZZZZ                ZZZZZZZZZZZZZZZZZZ                                        \n                                                                                                    \n        ZZZZZZZZZZZZZZZZZZ               yZZZZZZZZZZZZZZZZZZ                                        \n        B,              wy                D               y,                                        \n";
	char* start = "  ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ  \n  ZZw888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888,ZZ\n  ZZ                                                                                            ZZ  \n  ZZ     jZZZZZZZZZZZ   ZZZZZZZZZZZZZZZZ      ZZZZ            ZZZZZZZZZZZE    ZZZZZZZZZZZZZZZZ  ZZ  \n  ZZ    ZZZj        8          ZZ             ZZDZZ           ZZ       yZZZ          ZZ         ZZ  \n  ZZ    ZZB                   5ZZ            ZZB ZZ8          ZZ5        ZZZ         ZZ         ZZ  \n  ZZ    ZZZ                   DZZ           5ZZ  BZZ          ZZD        ZZZ         ZZ         ZZ  \n  ZZ    ZZZZ                  DZZ           ZZW   ZZZ         ZZy       5ZZj         ZZ         ZZ  \n  ZZ      ZZZZZ               DZZ          ZZZ     ZZD        ZZ,     wZZZ5          ZZ         ZZ  \n  ZZ        BZZZZZ            DZZ         jZZ      yZZ        ZZZZZZZZZ5             ZZ         ZZ  \n  ZZ           jZZZZ          DZZ         ZZ        ZZZ       ZZj   5ZZZ             ZZ         ZZ  \n  ZZ              ZZZ         DZZ        ZZZZZZZZZZZZZZy      ZZj     BZZw           ZZ         ZZ  \n  ZZ               ZZZ        DZZ        ZZ          EZZ      ZZD      yZZW          ZZ         ZZ  \n  ZZ               ZZZ        DZZ       ZZE           ZZZ     ZZD       yZZy         ZZ         ZZ  \n  ZZ   yZB        ZZZ         DZZ      ZZZ             ZZW    ZZD        jZZB        ZZ         ZZ  \n  ZZ    ZZZZZZZZZZZ8          ZZZ     8ZZB             ZZZw   ZZZ         5ZZZ      BZZw        ZZ  \n  ZZ        ,yW                                                                                 ZZ  \n  ZZ                                                                                            ZZ  \n  ZZBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ5ZZ  \n  ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ  \n";

	printf("\n                                                                                                    \n                                                                                       9ZEW         \n                                                                                        ZZZZZB      \n        y8ZZzj           59Z95                                                   BZZZD    ZZZZ9     \n      ZZZZZZZZZZ,      ZZZZZZZZZ             j       DZZZZZZZD                     ZZZZZ  ZZZZ      \n     ZZZZ    ZZZZ    WZZZZ   ZZZZy          5ZZZZZZZZZZZZZZZZZ           w55w       ZZZZ  ZZZZ      \n    ZZZZ      ZZZZ   ZZZE     zZZZ             DZZZD     8ZZZz         ZZZZZZZZZ    ZZZZ  ZZZZ      \n    ZZZZz     ZZZZ  ZZZZ       ZZZZ                      EZZZ5         ZZZZZZZZZZ   ZZZZ  8ZZZ      \n     ZE8      ZZZZ  ZZZZ       ZZZZ                      WZZZW                 ZZ   ZZZZZZZZZZ      \n             ZZZZ   ZZZD       WZZZ                       ZZZ                  ZZZ, ZZZZZZZZZZ      \n            ZZZZ    ZZZ5        ZZZ            ZZZZD      ZZZ                ZZZZZZ ZZZZ  yZZZ      \n           ZZZZ     ZZZD       jZZZ            ,ZZZZZ     ZZ               ZZZZZ    BZZZ  ZZZZ      \n         ZZZZB      ZZZZ       ZZZZ              ZZZZ    ZZ           9ZZZZZ5        ZZZ  9ZZZ      \n      DZZZZ5   ww   ZZZZ       ZZZZ               ZZZ                  ,             ZZ   zZZZ      \n    WZZZZZ9   ZZZZ   ZZZZ     BZZZ                EZZ      BZZZZZ                    Z    yZZZ      \n    ZZZZ ZZZZ jZZZ,  WZZZZ   ZZZZ5   WZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                  ,B     ZZZ      \n    ZZZZ   ZZZZZZZ     ZZZZZZZZZ       ,ZZZZZZZzyw           W5EZj                         ZZZ      \n    yZZB     EZZE        5EEED                                                             ZZ       \n                                                                                           Z5       \n                                                                                          WZ        \n                                                                                                    \n                                                                                                    \n");
	printf("전체화면으로 해주세요. 5초 뒤 시작합니다.\n");
	Sleep(5000);
	


	
	// 게임 테마 입력
	while (1) {
		// 테마 선택
		printing_str_delay(theme, 0.9);

		// 1번 원시 테마
		Sleep(1000);
		printing_str_delay(goindol, 0.9);
		printing_str_delay(first, 0.9);

		// 2번 중세 테마
		Sleep(1000);
		printing_str_delay(castle, 0.9);
		printing_str_delay(second, 0.9);


		// 3번 현대 테마
		Sleep(1000);
		printing_str_delay(apart, 0.9);
		printing_str_delay(third, 0.9);

		//테마고르기(1~3)
		Sleep(1000);
		printf("\n\n\n0번 일반모드, 1번 원시, 2번 중세, 3번 현대\n게임 테마를 골라주세요. (0~3 사이의 정수를 입력해주세요.) : \n");
		if (scanf("%d", &themeNum) == 0) {
			printf("숫자만 입력하세요.\n");
		}
		else
			if ((themeNum < 0) || (themeNum > 3)) {
				printf("0에서 3사이의 숫자를 입력하세요.\n");
			}
			else break;
		getchar();
	}

	



	// 플레이어 수 입력
	while (1) {
		printf("플레이어 수를 입력하세요 (1~4명이 가능합니다. 그 사이의 숫자를 입력해주세요.) : \n");
		if (scanf("%d", &playerNum) == 0) {
			printf("숫자만 입력하세요.\n");
		}
		else
			if ((playerNum < 1) || (playerNum > 4)) {
				printf("1에서 4사이의 숫자를 입력하세요.\n");
			}
			else break;
		getchar();
	}



	// 컨셉 소개
	if (themeNum == 0) { //원시
		if (playerNum == 1) {
			printf("\n\n\n일반모드의 1인게임 로딩중...\n\n\n");
			Sleep(1500);
		}
		else if (playerNum == 2) {
			printf("\n\n\n일반모드의 2인게임 로딩중...\n\n\n");
			Sleep(1500);
		}
		else if (playerNum == 3) {
			printf("\n\n\n일반모드의 3인게임 로딩중...\n\n\n");
			Sleep(1500);
		}
		else {
			printf("\n\n\n일반모드의 4인게임 로딩중...\n\n\n");
			Sleep(1500);
		}
	}

	else if (themeNum == 1) { //원시
		if (playerNum == 1) {

		}
		else if (playerNum == 2) {

		}
		else if (playerNum == 3) {

		}
		else {

		}
	}
	
	else if (themeNum == 2) { //중세

		if (playerNum == 1) { //1인게임
			printf("\n\n\n중세시대의 1인게임 로딩중...\n\n\n");
			Sleep(1500);
			printing_str_delay(crown, 0.9);
			char* str1 = "\n\n당신은 중세시대 부르군트 왕국의 왕입니다.\n당신은 한 왕국의 왕으로서 백성들의 수를 알아야합니다. 세금도 거두고, 그들에게 복지를 해줘야하기 때문입니다.\n";
			char* str2 = "백성들은 0명 이상, 100명 이하의 규모입니다. 당신이 숫자를 말하면 그 숫자보다 큰지, 작은 지 알려줄테니 백성들이 몇명인지 알아내세요.\n단 20번 안에 맞춰야 성공적인 왕국을 이어나갈 수 있습니다.\n\n\n";
			printing_str_delay(str1, 20);
			printing_str_delay(str2, 20);
		}
		else if (playerNum == 2) { //왕좌싸움
			printf("\n\n\n중세시대의 2인게임 로딩중...\n\n\n");
			Sleep(1500);
			printing_str_delay(crown2, 0.9);

			char* str1 = "\n\n여러분들은 중세시대 부르군트 왕국의 두 왕자입니다.\n여러분들은 각자 왕국의 일부분을 다스리고 있었습니다.\n다스렸던 땅의 백성들의 수를 알아야합니다. 왕이 여러분의 능력을 시험하기로 했기때문입니다.\n";
			char* str2 = "여러분 중 더 많은 점수를 가진 사람이 왕국의 후계자가 될 것입니다.\n";
			char* str3 = "백성들은 0명 이상, 100명 이하의 규모입니다. 여러분이 숫자를 말하면 그 숫자보다 큰지, 작은 지 알려줄테니 백성들이 몇명인지 알아내세요.\n최대 20번의 숫자를 외칠 수 있습니다.\n\n\n";
			printing_str_delay(str1, 20);
			printing_str_delay(str2, 20);
			printing_str_delay(str3, 20);
			
		}
		else if (playerNum == 3) { //영역싸움
			printf("\n\n\n중세시대의 3인게임 로딩중...\n");
			Sleep(1500);
			printing_str_delay(castle, 0.9);

			char* str1 = "\n\n여러분들은 중세시대 부르군트 왕국의 세 영주입니다.\n여러분들은 왕국의 백성들의 수를 알아야합니다. 백성의 수를 제대로 아는 자가 국력을 거머쥐기 때문입니다..\n";
			char* str2 = "여러분 중 더 많은 점수를 가진 사람이 왕국을 지배하게 될 것입니다.\n";
			char* str3 = "백성들은 0명 이상, 100명 이하의 규모입니다. 여러분이 숫자를 말하면 그 숫자보다 큰지, 작은 지 알려줄테니 백성들이 몇명인지 알아내세요.\n최대 20번의 숫자를 외칠 수 있습니다.\n\n\n";
			printing_str_delay(str1, 20);
			printing_str_delay(str2, 20);
			printing_str_delay(str3, 20);

		}
		else { //종족싸움
			printf("\n\n\n중세시대의 4인게임 로딩중...\n");
			Sleep(1500);
			printing_str_delay(castle, 0.9);

			char* str1 = "\n\n여러분들은 중세시대 부르군트 왕국의 네 종족의 대장입니다.\n여러분들은 왕국의 백성들의 수를 알아야합니다. 백성의 수를 제대로 아는 자가 국력을 거머쥐기 때문입니다..\n";
			char* str2 = "여러분 중 더 많은 점수를 가진 사람이 왕국을 지배하게 될 것입니다.\n";
			char* str3 = "백성들은 0명 이상, 100명 이하의 규모입니다. 여러분이 숫자를 말하면 그 숫자보다 큰지, 작은 지 알려줄테니 백성들이 몇명인지 알아내세요.\n최대 20번의 숫자를 외칠 수 있습니다.\n\n\n";
			printing_str_delay(str1, 20);
			printing_str_delay(str2, 20);
			printing_str_delay(str3, 20);
		}
	}

	else { //현대
		if (playerNum == 1) {

		}
		else if (playerNum == 2) {

		}
		else if (playerNum == 3) {

		}
		else {

		}
	}






	





	printing_str_delay(start, 0.9);
	printf("\n\n");
	Sleep(1000);

	game(playerNum, themeNum);
	
}