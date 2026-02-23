/*

            CREATED by .blueN
                Get Skin Informations. [v1.1]

		    See More: https://github.com/devbluen

            Enums:
                E_SKINGENDER_INVALID
                E_SKINGENDER_MAN
                E_SKINGENDER_WOMAN

            Functions:
                E_SKINGENDER:GetSkinGender(skinid)
                bool:IsSkinMan(skinid)
                bool:IsSkinWoman(skinid)
                GetSkinName(skinid, dest[], maxlength = sizeof dest)
                GetSkinNameInline(skinid)
                GetMaxSkins()
*/

enum E_SKINGENDER {
    E_SKINGENDER_INVALID = 0,
    E_SKINGENDER_MAN,
    E_SKINGENDER_WOMAN
};

static enum E_MODALSKIN {
    E_SKINGENDER:E_MODALSKIN_GENDER,
    E_MODALSKIN_NAME[30 + 1]
};

static const e_ModalSkin[][E_MODALSKIN] = {

	// ID                            // Name
	{E_SKINGENDER_MAN,               "Carl Johnson"},    // 0
	{E_SKINGENDER_MAN,               "The_Truth"},   // 1
	{E_SKINGENDER_MAN,               "Maccer"},  // 2
	{E_SKINGENDER_MAN,               "Andre"},   // 3
    {E_SKINGENDER_MAN,               "Barry Thorne"},    // 4
    {E_SKINGENDER_MAN,               "Barry Thorne"},    // 5
    {E_SKINGENDER_MAN,               "Emmet"},   // 6
    {E_SKINGENDER_MAN,               "Luis"},    // 7
    {E_SKINGENDER_MAN,               "Janitor"}, // 8
    {E_SKINGENDER_WOMAN,             "Maria"},   // 9
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 10
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 11
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 12
    {E_SKINGENDER_WOMAN,             "Street Girl"}, // 13
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 14
    {E_SKINGENDER_MAN,               "Mr.Whittaker"},    // 15
    {E_SKINGENDER_MAN,               "Airport Ground Worker"},   // 16
    {E_SKINGENDER_MAN,               "Businessman"}, // 17
    {E_SKINGENDER_MAN,               "Beach Visitor"},   // 18
    {E_SKINGENDER_MAN,               "DJ"},  // 19
    {E_SKINGENDER_MAN,               "Rich Guy"},    // 20
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 21
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 22
    {E_SKINGENDER_MAN,               "BMXer"},   // 23
    {E_SKINGENDER_MAN,               "Madd Dogg Bodyguard"}, // 24
    {E_SKINGENDER_MAN,               "Madd Dogg Bodyguard"}, // 25
    {E_SKINGENDER_MAN,               "Backpacker"},  // 26
    {E_SKINGENDER_MAN,               "Construction Worker"}, // 27
    {E_SKINGENDER_MAN,               "Drug Dealer"}, // 28
    {E_SKINGENDER_MAN,               "Drug Dealer"}, // 29
    {E_SKINGENDER_MAN,               "Drug Dealer"}, // 30
    {E_SKINGENDER_WOMAN,             "Farm-Town inhabitant"},    // 31
    {E_SKINGENDER_MAN,               "Farm-Town inhabitant"},    // 32
    {E_SKINGENDER_MAN,               "Farm-Town inhabitant"},    // 33
    {E_SKINGENDER_MAN,               "Farm-Town inhabitant"},    // 34
    {E_SKINGENDER_MAN,               "Gardener"},    // 35
    {E_SKINGENDER_MAN,               "Golfer"},  // 36
    {E_SKINGENDER_MAN,               "Golfer"},  // 37
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 38
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 39
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 40
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 41
    {E_SKINGENDER_MAN,               "Jethro"},  // 42
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 43
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 44
    {E_SKINGENDER_MAN,               "Beach Visitor"},   // 45
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 46
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 47
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 48
    {E_SKINGENDER_MAN,               "Snakehead"},   // 49
    {E_SKINGENDER_MAN,               "Mechanic"},    // 50
    {E_SKINGENDER_MAN,               "Mountain Biker"},  // 51
    {E_SKINGENDER_MAN,               "Mountain Biker"},  // 52
    {E_SKINGENDER_WOMAN,             "JosefaMariah"},    // 53
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 54
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 55
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 56
    {E_SKINGENDER_MAN,               "Oriental Ped"},    // 57
    {E_SKINGENDER_MAN,               "Oriental Ped"},    // 58
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 59
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 60
    {E_SKINGENDER_MAN,               "Pilot"},   // 61
    {E_SKINGENDER_MAN,               "Colonel Fuhrberger"},  // 62
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 63
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 64
    {E_SKINGENDER_WOMAN,             "Kendl Johnson"},   // 65
    {E_SKINGENDER_MAN,               "Pool Player"}, // 66
    {E_SKINGENDER_MAN,               "Pool Player"}, // 67
    {E_SKINGENDER_MAN,               "Priest/Preacher"}, // 68
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 69
    {E_SKINGENDER_MAN,               "Scientist"},   // 70
    {E_SKINGENDER_MAN,               "Security Guard"},  // 71
    {E_SKINGENDER_MAN,               "Hippy"},   // 72
    {E_SKINGENDER_MAN,               "Hippy"},   // 73
    {E_SKINGENDER_INVALID,           "N/A"},    // 74
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 75
    {E_SKINGENDER_WOMAN,             "Stewardess"},  // 76
    {E_SKINGENDER_WOMAN,             "Homeless"},    // 77
    {E_SKINGENDER_MAN,               "Homeless"},    // 78
    {E_SKINGENDER_MAN,               "Homeless"},    // 79
    {E_SKINGENDER_MAN,               "Boxer"},   // 80
    {E_SKINGENDER_MAN,               "Boxer"},   // 81
    {E_SKINGENDER_MAN,               "Elvis"},   // 82
    {E_SKINGENDER_MAN,               "Elvis"},   // 83
    {E_SKINGENDER_MAN,               "Elvis"},   // 84
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 85
    {E_SKINGENDER_MAN,               "Ryder"},   // 86
    {E_SKINGENDER_WOMAN,             "Stripper"},    // 87
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 88
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 89
    {E_SKINGENDER_WOMAN,             "Jogger"},  // 90
    {E_SKINGENDER_WOMAN,             "Rich Woman"},  // 91
    {E_SKINGENDER_WOMAN,             "Rollerskater"},    // 92
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 93
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 94
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 95
    {E_SKINGENDER_MAN,               "Jogger"},  // 96
    {E_SKINGENDER_MAN,               "Lifeguard"},   // 97
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 98
    {E_SKINGENDER_MAN,               "Rollerskater"},    // 99
    {E_SKINGENDER_MAN,               "Biker"},   // 100
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 101
    {E_SKINGENDER_MAN,               "Balla"},   // 102
    {E_SKINGENDER_MAN,               "Balla"},   // 103
    {E_SKINGENDER_MAN,               "Balla"},   // 104
    {E_SKINGENDER_MAN,               "Grove Street Families"},   // 105
    {E_SKINGENDER_MAN,               "Grove Street Families"},   // 106
    {E_SKINGENDER_MAN,               "Grove Street Families"},   // 107
    {E_SKINGENDER_MAN,               "Los Santos Vagos"},    // 108
    {E_SKINGENDER_MAN,               "Los Santos Vagos"},    // 109
    {E_SKINGENDER_MAN,               "Los Santos Vagos"},    // 110
    {E_SKINGENDER_MAN,               "The Russian Mafia"},   // 111
    {E_SKINGENDER_MAN,               "The Russian Mafia"},   // 112
    {E_SKINGENDER_MAN,               "The Russian Mafia"},   // 113
    {E_SKINGENDER_MAN,               "Los Aztecas"}, // 114
    {E_SKINGENDER_MAN,               "Los Aztecas"}, // 115
    {E_SKINGENDER_MAN,               "Los Aztecas"}, // 116
    {E_SKINGENDER_MAN,               "Triada"},  // 117
    {E_SKINGENDER_MAN,               "Triada"},  // 118
    {E_SKINGENDER_MAN,               "Johhny Sindacco"}, // 119
    {E_SKINGENDER_MAN,               "Triad Boss"},  // 120
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 121
    {E_SKINGENDER_MAN,               "Da Nang Boy"}, // 122
    {E_SKINGENDER_MAN,               "Da Nang Boy"}, // 123
    {E_SKINGENDER_MAN,               "The Mafia"},   // 124
    {E_SKINGENDER_MAN,               "The Mafia"},   // 125
    {E_SKINGENDER_MAN,               "The Mafia"},   // 126
    {E_SKINGENDER_MAN,               "The Mafia"},   // 127
    {E_SKINGENDER_MAN,               "Farm Inhabitant"}, // 128
    {E_SKINGENDER_WOMAN,             "Farm Inhabitant"}, // 129
    {E_SKINGENDER_WOMAN,             "Farm Inhabitant"}, // 130
    {E_SKINGENDER_WOMAN,             "Farm Inhabitant"}, // 131
    {E_SKINGENDER_MAN,               "Farm Inhabitant"}, // 132
    {E_SKINGENDER_MAN,               "Farm Inhabitant"}, // 133
    {E_SKINGENDER_MAN,               "Homeless"},    // 134
    {E_SKINGENDER_MAN,               "Homeless"},    // 135
    {E_SKINGENDER_MAN,               "Homeless"},    // 136
    {E_SKINGENDER_MAN,               "Homeless"},    // 137
    {E_SKINGENDER_WOMAN,             "Beach Visitor"},   // 138
    {E_SKINGENDER_WOMAN,             "Beach Visitor"},   // 139
    {E_SKINGENDER_WOMAN,             "Beach Visitor"},   // 140
    {E_SKINGENDER_WOMAN,             "Businesswoman"},   // 141
    {E_SKINGENDER_MAN,               "Taxi Driver"}, // 142
    {E_SKINGENDER_MAN,               "Crack Maker"}, // 143
    {E_SKINGENDER_MAN,               "Crack Maker"}, // 144
    {E_SKINGENDER_WOMAN,             "Crack Maker"}, // 145
    {E_SKINGENDER_MAN,               "Crack Maker"}, // 146
    {E_SKINGENDER_MAN,               "Businessman"}, // 147
    {E_SKINGENDER_WOMAN,             "Businessman"}, // 148
    {E_SKINGENDER_MAN,               "Big Smoke"},   // 149
    {E_SKINGENDER_WOMAN,             "Businesswoman"},   // 150
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 151
    {E_SKINGENDER_WOMAN,             "Isabella"},    // 152
    {E_SKINGENDER_MAN,               "Construction Worker"}, // 153
    {E_SKINGENDER_MAN,               "Iniciante"},   // 154
    {E_SKINGENDER_MAN,               "Well Stacked Pizza Worker"},   // 155
    {E_SKINGENDER_MAN,               "Barber"},  // 156
    {E_SKINGENDER_WOMAN,             "Hillbilly"},   // 157
    {E_SKINGENDER_MAN,               "Farmer"},  // 158
    {E_SKINGENDER_MAN,               "Hillbilly"},   // 159
    {E_SKINGENDER_MAN,               "Hillbilly"},   // 160
    {E_SKINGENDER_MAN,               "Farmer"},  // 161
    {E_SKINGENDER_MAN,               "Hillbilly"},   // 162
    {E_SKINGENDER_MAN,               "Black Bouncer"},   // 163
    {E_SKINGENDER_MAN,               "White Bouncer"},   // 164
    {E_SKINGENDER_MAN,               "Agent"},   // 165
    {E_SKINGENDER_MAN,               "Agent"},   // 164
    {E_SKINGENDER_MAN,               "Cluckin' Bell Worker"},    // 167
    {E_SKINGENDER_MAN,               "Hotdog/Chilli Dog Vendor"},    // 168
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 169
    {E_SKINGENDER_MAN,               "Normal Ped"},  // 170
    {E_SKINGENDER_MAN,               "Blackjack Dealer"},    // 171
    {E_SKINGENDER_WOMAN,             "Casino croupier"}, // 172
    {E_SKINGENDER_MAN,               "Rifa"},    // 173
    {E_SKINGENDER_MAN,               "Rifa"},    // 174
    {E_SKINGENDER_MAN,               "Rifa"},    // 175
    {E_SKINGENDER_MAN,               "Barber"},  // 176
    {E_SKINGENDER_MAN,               "Barber"},  // 177
    {E_SKINGENDER_WOMAN,             "Whore"},   // 178
    {E_SKINGENDER_MAN,               "Salesman"},    // 179
    {E_SKINGENDER_MAN,               "Tattoo Artist"},   // 180
    {E_SKINGENDER_MAN,               "Punk"},    // 181
    {E_SKINGENDER_MAN,               "Cab Driver"},  // 182
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 183
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 184
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 185
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 186
    {E_SKINGENDER_MAN,               "Businessman"}, // 187
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 188
    {E_SKINGENDER_MAN,               "Valet"},   // 189
    {E_SKINGENDER_WOMAN,             "Barbara"}, // 190
    {E_SKINGENDER_WOMAN,             "Helena"},  // 191
    {E_SKINGENDER_WOMAN,             "Michelle"},    // 192
    {E_SKINGENDER_WOMAN,             "Katie Zhan"},  // 193
    {E_SKINGENDER_WOMAN,             "Millie Perkins"},  // 194
    {E_SKINGENDER_WOMAN,             "Denise Robinson"}, // 195
    {E_SKINGENDER_WOMAN,             "Farm-Town inhabitant"},    // 196
    {E_SKINGENDER_WOMAN,             "Hillbilly"},   // 197
    {E_SKINGENDER_WOMAN,             "Farm-Town inhabitant"},    // 198
    {E_SKINGENDER_WOMAN,             "Farm-Town inhabitant"},    // 199
    {E_SKINGENDER_MAN,               "Hillbilly"},   // 200
    {E_SKINGENDER_WOMAN,             "Farmer"},  // 201
    {E_SKINGENDER_MAN,               "Farmer"},  // 202
    {E_SKINGENDER_MAN,               "Karate Teacher"},  // 203
    {E_SKINGENDER_MAN,               "Karate Teacher"},  // 204
    {E_SKINGENDER_WOMAN,             "Burger Shot Cashier"}, // 205
    {E_SKINGENDER_MAN,               "Cab Driver"},  // 206
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 207
    {E_SKINGENDER_MAN,               "Su Xi Mu (Suzie)"},    // 208
    {E_SKINGENDER_MAN,               "Oriental Noodle"}, // 209
    {E_SKINGENDER_MAN,               "Oriental Boating"},    // 210
    {E_SKINGENDER_WOMAN,             "Clothes shop staff"},  // 211
    {E_SKINGENDER_MAN,               "Homeless"},    // 212
    {E_SKINGENDER_MAN,               "Weird old man"},   // 213
    {E_SKINGENDER_WOMAN,             "Maria Latore"},    // 214
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 215
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 216
    {E_SKINGENDER_MAN,               "Clothes shop staff"},  // 217
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 218
    {E_SKINGENDER_WOMAN,             "Rich Woman"},  // 219
    {E_SKINGENDER_MAN,               "Cab Driver"},  // 220
    {E_SKINGENDER_MAN,               "Normal Ped"},  // 221
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 222
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 223
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 224
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 225
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 226
    {E_SKINGENDER_MAN,               "Businessman"}, // 227
    {E_SKINGENDER_MAN,               "Oriental Pedestrian"},   // 228
    {E_SKINGENDER_MAN,               "Oriental Pedestrian"},   // 229
    {E_SKINGENDER_MAN,               "Homeless"},    // 230
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 231
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 232
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 233
    {E_SKINGENDER_MAN,               "Cab Driver"},  // 234
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 235
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 236
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 237
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 238
    {E_SKINGENDER_MAN,               "Homeless"},    // 239
    {E_SKINGENDER_MAN,               "The D.A"},     // 240
    {E_SKINGENDER_MAN,               "Afro-American"},   // 241
    {E_SKINGENDER_MAN,               "Mexican"}, // 242
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 243
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 244
    {E_SKINGENDER_WOMAN,             "Prostitute"},  // 245
    {E_SKINGENDER_WOMAN,             "Stripper"},    // 246
    {E_SKINGENDER_MAN,               "Biker"},   // 247
    {E_SKINGENDER_MAN,               "Biker"},   // 248
    {E_SKINGENDER_MAN,               "Pimp"},    // 249
    {E_SKINGENDER_MAN,               "Pedestrian"},    // 250
    {E_SKINGENDER_WOMAN,             "Lifeguard"},   // 251
    {E_SKINGENDER_MAN,               "Naked Valet"}, // 252
    {E_SKINGENDER_MAN,               "Bus Driver"},  // 253
    {E_SKINGENDER_MAN,               "Biker Drug Dealer"},   // 254
    {E_SKINGENDER_MAN,               "Chauffeur"},   // 255
    {E_SKINGENDER_WOMAN,             "Stripper"},    // 256
    {E_SKINGENDER_WOMAN,             "Stripper"},    // 257
    {E_SKINGENDER_MAN,               "Heckler"}, // 258
    {E_SKINGENDER_MAN,               "Heckler"}, // 259
    {E_SKINGENDER_MAN,               "Construction Worker"}, // 260
    {E_SKINGENDER_MAN,               "Cab driver"},  // 261
    {E_SKINGENDER_MAN,               "Cab driver"},  // 262
    {E_SKINGENDER_WOMAN,             "Pedestrian"},    // 263
    {E_SKINGENDER_MAN,               "Clown"},   // 264
    {E_SKINGENDER_MAN,               "Officer Frank Tenpenny"},  // 265
    {E_SKINGENDER_MAN,               "Officer Eddie Pulaski"},   // 266
    {E_SKINGENDER_MAN,               "Officer Jimmy"},   // 267
    {E_SKINGENDER_MAN,               "Dwaine/Dwayne"},   // 268
    {E_SKINGENDER_MAN,               "Big Smoke"},   // 269
    {E_SKINGENDER_MAN,               "Sweet"},   // 270
    {E_SKINGENDER_MAN,               "Ryder"},   // 271
    {E_SKINGENDER_MAN,               "Mafia Boss"},  // 272
    {E_SKINGENDER_MAN,               "T-Boné Mendez"},   // 273
    {E_SKINGENDER_MAN,               "Paramedic"},   // 274
    {E_SKINGENDER_MAN,               "Paramedic"},   // 275
    {E_SKINGENDER_MAN,               "Paramedic"},   // 276
    {E_SKINGENDER_MAN,               "Firefighter"}, // 277
    {E_SKINGENDER_MAN,               "Firefighter"}, // 278
    {E_SKINGENDER_MAN,               "Firefighter"}, // 279
    {E_SKINGENDER_MAN,               "Los Santos Police Officer"},   // 280
    {E_SKINGENDER_MAN,               "San Fierro Police Officer"},   // 281
    {E_SKINGENDER_MAN,               "Las Venturas Police Officer"}, // 282
    {E_SKINGENDER_MAN,               "County Sheriff"},  // 283
    {E_SKINGENDER_MAN,               "LSPD Motorbike Cop"},  // 284
    {E_SKINGENDER_MAN,               "S.W.A.T Special Forces"},  // 285
    {E_SKINGENDER_MAN,               "FBI Agent"},   // 286
    {E_SKINGENDER_MAN,               "San Andreas Army Soldier"},    // 287
    {E_SKINGENDER_MAN,               "Desert Sheriff"},  // 288
    {E_SKINGENDER_MAN,               "Zero"},    // 289
    {E_SKINGENDER_MAN,               "Ken Rosenberg"},   // 290
    {E_SKINGENDER_MAN,               "Kent Paul"},   // 291
    {E_SKINGENDER_MAN,               "Cesar Vialpando"}, // 292
    {E_SKINGENDER_MAN,               "OG Loc"},  // 293
    {E_SKINGENDER_MAN,               "Wu Zi Mu"},    // 294
    {E_SKINGENDER_MAN,               "Michael Toreno"},  // 295
    {E_SKINGENDER_MAN,               "Jizzy B."},    // 296
    {E_SKINGENDER_MAN,               "Madd Dogg"},   // 297
    {E_SKINGENDER_WOMAN,             "Catalina"},    // 298
    {E_SKINGENDER_MAN,               "Claude Speed"},    // 299
    {E_SKINGENDER_MAN,               "Los Santos Police Officer"},   // 300
    {E_SKINGENDER_MAN,               "San Fierro Police Officer"},   // 301
    {E_SKINGENDER_MAN,               "Las Venturas Police Officer"}, // 302
    {E_SKINGENDER_MAN,               "Los Santos Police Officer"},   // 303
    {E_SKINGENDER_MAN,               "Los Santos Police Officer"},   // 304
    {E_SKINGENDER_MAN,               "Las Venturas Police Officer"}, // 305
    {E_SKINGENDER_WOMAN,             "Los Santos Police Officer"},   // 306
    {E_SKINGENDER_WOMAN,             "San Fierro Police Officer"},   // 307
    {E_SKINGENDER_WOMAN,             "San Fierro Paramedic"},    // 308
    {E_SKINGENDER_WOMAN,             "Las Venturas Police Officer"}, // 309
    {E_SKINGENDER_MAN,               "Country Sheriff"}, // 310
    {E_SKINGENDER_MAN,               "Desert Sheriff"}   // 311
};

stock E_SKINGENDER:GetSkinGender(skinid)
    return e_ModalSkin[skinid][E_MODALSKIN_GENDER];

stock bool:IsSkinMan(skinid)
    return !IsSkinWoman(skinid);

stock bool:IsSkinWoman(skinid)
    return GetSkinGender(skinid) == E_SKINGENDER_WOMAN;

stock GetSkinName(skinid, dest[], maxlength = sizeof dest) {
    strcat(dest, e_ModalSkin[skinid][E_MODALSKIN_NAME], maxlength);
}

stock GetSkinNameInline(skinid) {
    new string[30 + 1];
    strcat(string, e_ModalSkin[skinid][E_MODALSKIN_NAME]);
    return string;
}

stock GetMaxSkins() 
    return sizeof e_ModalSkin;

