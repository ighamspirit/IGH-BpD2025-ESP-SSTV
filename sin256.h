static uint8_t SinTableH[]=
{
    127,
    131,
    134,
    137,
    140,
    143,
    146,
    149,
    152,
    155,
    158,
    161,
    164,
    167,
    170,
    173,
    176,
    179,
    182,
    185,
    187,
    190,
    193,
    195,
    198,
    201,
    203,
    206,
    208,
    210,
    213,
    215,
    217,
    219,
    222,
    224,
    226,
    228,
    230,
    231,
    233,
    235,
    236,
    238,
    240,
    241,
    242,
    244,
    245,
    246,
    247,
    248,
    249,
    250,
    251,
    251,
    252,
    253,
    253,
    254,
    254,
    254,
    254,
    254,
    255,
    254,
    254,
    254,
    254,
    254,
    253,
    253,
    252,
    251,
    251,
    250,
    249,
    248,
    247,
    246,
    245,
    244,
    242,
    241,
    240,
    238,
    236,
    235,
    233,
    231,
    230,
    228,
    226,
    224,
    222,
    219,
    217,
    215,
    213,
    210,
    208,
    206,
    203,
    201,
    198,
    195,
    193,
    190,
    187,
    185,
    182,
    179,
    176,
    173,
    170,
    167,
    164,
    161,
    158,
    155,
    152,
    149,
    146,
    143,
    140,
    137,
    134,
    131,
    127,
    124,
    121,
    118,
    115,
    112,
    109,
    106,
    103,
    100,
    97,
    94,
    91,
    88,
    85,
    82,
    79,
    76,
    73,
    70,
    68,
    65,
    62,
    60,
    57,
    54,
    52,
    49,
    47,
    45,
    42,
    40,
    38,
    36,
    33,
    31,
    29,
    27,
    25,
    24,
    22,
    20,
    19,
    17,
    15,
    14,
    13,
    11,
    10,
    9,
    8,
    7,
    6,
    5,
    4,
    4,
    3,
    2,
    2,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    2,
    2,
    3,
    4,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    13,
    14,
    15,
    17,
    19,
    20,
    22,
    24,
    25,
    27,
    29,
    31,
    33,
    36,
    38,
    40,
    42,
    45,
    47,
    49,
    52,
    54,
    57,
    60,
    62,
    65,
    68,
    70,
    73,
    76,
    79,
    82,
    85,
    88,
    91,
    94,
    97,
    100,
    103,
    106,
    109,
    112,
    115,
    118,
    121,
    124
};

static uint8_t SinTableL[]=
{
  127,
  130,
  132,
  134,
  136,
  138,
  141,
  143,
  145,
  147,
  149,
  151,
  153,
  155,
  157,
  159,
  162,
  164,
  165,
  167,
  169,
  171,
  173,
  175,
  177,
  179,
  180,
  182,
  184,
  186,
  187,
  189,
  190,
  192,
  193,
  195,
  196,
  198,
  199,
  200,
  201,
  203,
  204,
  205,
  206,
  207,
  208,
  209,
  210,
  210,
  211,
  212,
  213,
  213,
  214,
  214,
  215,
  215,
  215,
  216,
  216,
  216,
  216,
  216,
  216,
  216,
  216,
  216,
  216,
  216,
  215,
  215,
  215,
  214,
  214,
  213,
  213,
  212,
  211,
  210,
  210,
  209,
  208,
  207,
  206,
  205,
  204,
  203,
  201,
  200,
  199,
  198,
  196,
  195,
  193,
  192,
  190,
  189,
  187,
  186,
  184,
  182,
  180,
  179,
  177,
  175,
  173,
  171,
  169,
  167,
  165,
  164,
  162,
  159,
  157,
  155,
  153,
  151,
  149,
  147,
  145,
  143,
  141,
  138,
  136,
  134,
  132,
  130,
  127,
  125,
  123,
  121,
  119,
  117,
  114,
  112,
  110,
  108,
  106,
  104,
  102,
  100,
  98,
  95,
  93,
  91,
  89,
  88,
  86,
  84,
  82,
  80,
  78,
  76,
  75,
  73,
  71,
  69,
  68,
  66,
  65,
  63,
  62,
  60,
  59,
  57,
  56,
  55,
  54,
  52,
  51,
  50,
  49,
  48,
  47,
  46,
  45,
  45,
  44,
  43,
  42,
  42,
  41,
  41,
  40,
  40,
  40,
  39,
  39,
  39,
  39,
  39,
  39,
  39,
  39,
  39,
  39,
  39,
  40,
  40,
  40,
  41,
  41,
  42,
  42,
  43,
  44,
  45,
  45,
  46,
  47,
  48,
  49,
  50,
  51,
  52,
  54,
  55,
  56,
  57,
  59,
  60,
  62,
  63,
  65,
  66,
  68,
  69,
  71,
  73,
  75,
  76,
  78,
  80,
  82,
  84,
  86,
  88,
  89,
  91,
  93,
  95,
  98,
  100,
  102,
  104,
  106,
  108,
  110,
  112,
  114,
  117,
  119,
  121,
  123,
  125
};

//-4.4dB
static uint8_t SinTableX[]=
{
    127,
    129,
    131,
    133,
    135,
    137,
    139,
    140,
    142,
    144,
    146,
    148,
    149,
    151,
    153,
    155,
    156,
    158,
    160,
    161,
    163,
    165,
    166,
    168,
    169,
    171,
    172,
    174,
    175,
    177,
    178,
    180,
    181,
    182,
    183,
    185,
    186,
    187,
    188,
    189,
    190,
    191,
    192,
    193,
    194,
    195,
    196,
    197,
    197,
    198,
    199,
    199,
    200,
    200,
    201,
    201,
    202,
    202,
    202,
    202,
    203,
    203,
    203,
    203,
    203,
    203,
    203,
    203,
    203,
    202,
    202,
    202,
    202,
    201,
    201,
    200,
    200,
    199,
    199,
    198,
    197,
    197,
    196,
    195,
    194,
    193,
    192,
    191,
    190,
    189,
    188,
    187,
    186,
    185,
    183,
    182,
    181,
    180,
    178,
    177,
    175,
    174,
    172,
    171,
    169,
    168,
    166,
    165,
    163,
    161,
    160,
    158,
    156,
    155,
    153,
    151,
    149,
    148,
    146,
    144,
    142,
    140,
    139,
    137,
    135,
    133,
    131,
    129,
    127,
    126,
    124,
    122,
    120,
    118,
    116,
    115,
    113,
    111,
    109,
    107,
    106,
    104,
    102,
    100,
    99,
    97,
    95,
    94,
    92,
    90,
    89,
    87,
    86,
    84,
    82,
    81,
    80,
    78,
    77,
    75,
    74,
    73,
    72,
    70,
    69,
    68,
    67,
    66,
    65,
    64,
    63,
    62,
    61,
    60,
    59,
    58,
    58,
    57,
    56,
    56,
    55,
    55,
    54,
    54,
    53,
    53,
    53,
    53,
    52,
    52,
    52,
    52,
    52,
    52,
    52,
    52,
    52,
    53,
    53,
    53,
    53,
    54,
    54,
    55,
    55,
    56,
    56,
    57,
    58,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    72,
    73,
    74,
    75,
    77,
    78,
    80,
    81,
    82,
    84,
    86,
    87,
    89,
    90,
    92,
    94,
    95,
    97,
    99,
    100,
    102,
    104,
    106,
    107,
    109,
    111,
    113,
    115,
    116,
    118,
    120,
    122,
    124,
    126
};
