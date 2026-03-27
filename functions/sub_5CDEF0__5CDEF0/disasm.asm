0x5CDEF0: push    0FFFFFFFFh
0x5CDEF2: push    offset SEH_5CDEF0
0x5CDEF7: mov     eax, large fs:0
0x5CDEFD: push    eax
0x5CDEFE: sub     esp, 10h
0x5CDF01: push    ebx
0x5CDF02: push    ebp
0x5CDF03: push    esi
0x5CDF04: push    edi
0x5CDF05: mov     eax, ds:0B30AACh
0x5CDF0A: xor     eax, esp
0x5CDF0C: push    eax
0x5CDF0D: lea     eax, [esp+30h+var_C]
0x5CDF11: mov     large fs:0, eax
0x5CDF17: mov     edi, ecx
0x5CDF19: mov     ecx, ds:0B333C4h
0x5CDF1F: mov     eax, [ecx]
0x5CDF21: mov     edx, [eax+170h]
0x5CDF27: call    edx
0x5CDF29: push    0FAEh
0x5CDF2E: sub     esp, 8
0x5CDF31: mov     ecx, esp; this
0x5CDF33: xor     esi, esi
0x5CDF35: mov     [esp+3Ch+var_10], esp
0x5CDF39: mov     ebp, eax
0x5CDF3B: mov     eax, ds:0B38FC0h
0x5CDF40: push    esi; a3
0x5CDF41: push    eax; a2
0x5CDF42: mov     [ecx], esi
0x5CDF44: mov     [ecx+4], si
0x5CDF48: mov     [ecx+6], si
0x5CDF4C: call    BSStringT_Set
0x5CDF51: mov     eax, ds:0B38F88h
0x5CDF56: sub     esp, 8
0x5CDF59: mov     ecx, esp; this
0x5CDF5B: mov     [esp+44h+var_14], esp
0x5CDF5F: push    esi; a3
0x5CDF60: push    eax; a2
0x5CDF61: mov     [esp+4Ch+var_4], esi
0x5CDF65: mov     [ecx], esi
0x5CDF67: mov     [ecx+4], si
0x5CDF6B: mov     [ecx+6], si
0x5CDF6F: call    BSStringT_Set
0x5CDF74: or      ebx, 0FFFFFFFFh
0x5CDF77: mov     ecx, edi
0x5CDF79: mov     [esp+44h+var_4], ebx
0x5CDF7D: call    sub_5C3440
0x5CDF82: mov     ecx, eax
0x5CDF84: call    Tile_GetFloat
0x5CDF89: fstp    [esp+30h+var_10]
0x5CDF8D: mov     eax, ds:0B38FC8h
0x5CDF92: push    0FAEh
0x5CDF97: sub     esp, 8
0x5CDF9A: mov     ecx, esp; this
0x5CDF9C: mov     [esp+3Ch+var_14], esp
0x5CDFA0: push    esi; a3
0x5CDFA1: push    eax; a2
0x5CDFA2: mov     [ecx], esi
0x5CDFA4: mov     [ecx+4], si
0x5CDFA8: mov     [ecx+6], si
0x5CDFAC: call    BSStringT_Set
0x5CDFB1: mov     eax, ds:0B38F88h
0x5CDFB6: sub     esp, 8
0x5CDFB9: mov     ecx, esp; this
0x5CDFBB: mov     [esp+44h+var_18], esp
0x5CDFBF: push    esi; a3
0x5CDFC0: push    eax; a2
0x5CDFC1: mov     [esp+4Ch+var_4], 1
0x5CDFC9: mov     [ecx], esi
0x5CDFCB: mov     [ecx+4], si
0x5CDFCF: mov     [ecx+6], si
0x5CDFD3: call    BSStringT_Set
0x5CDFD8: mov     ecx, edi
0x5CDFDA: mov     [esp+44h+var_4], ebx
0x5CDFDE: call    sub_5C3440
0x5CDFE3: mov     ecx, eax
0x5CDFE5: call    Tile_GetFloat
0x5CDFEA: fstp    [esp+30h+var_14]
0x5CDFEE: mov     eax, ds:0B38FD0h
0x5CDFF3: push    0FAEh
0x5CDFF8: sub     esp, 8
0x5CDFFB: mov     ecx, esp; this
0x5CDFFD: mov     [esp+3Ch+var_18], esp
0x5CE001: push    esi; a3
0x5CE002: push    eax; a2
0x5CE003: mov     [ecx], esi
0x5CE005: mov     [ecx+4], si
0x5CE009: mov     [ecx+6], si
0x5CE00D: call    BSStringT_Set
0x5CE012: mov     eax, ds:0B38F88h
0x5CE017: sub     esp, 8
0x5CE01A: mov     [esp+44h+var_4], 2
0x5CE022: mov     [esp+44h+var_1C], esp
0x5CE026: mov     ecx, esp; this
0x5CE028: push    esi; a3
0x5CE029: push    eax; a2
0x5CE02A: mov     [ecx], esi
0x5CE02C: mov     [ecx+4], si
0x5CE030: mov     [ecx+6], si
0x5CE034: call    BSStringT_Set
0x5CE039: mov     ecx, edi
0x5CE03B: mov     [esp+44h+var_4], ebx
0x5CE03F: call    sub_5C3440
0x5CE044: mov     ecx, eax
0x5CE046: call    Tile_GetFloat
0x5CE04B: fstp    [esp+30h+var_1C]
0x5CE04F: fld     [esp+30h+var_1C]
0x5CE053: xor     ecx, ecx
0x5CE055: fld     qword ptr ds:0A3DDD8h
0x5CE05B: fnstcw  word ptr [esp+30h+var_1C]
0x5CE05F: movzx   eax, word ptr [esp+30h+var_1C]
0x5CE064: fmul    st(1), st
0x5CE066: or      eax, 0C00h
0x5CE06B: fxch    st(1)
0x5CE06D: mov     [esp+30h+var_18], eax
0x5CE071: fldcw   word ptr [esp+30h+var_18]
0x5CE075: fistp   [esp+30h+var_18]
0x5CE079: movzx   eax, byte ptr [esp+30h+var_18]
0x5CE07E: mov     ch, al
0x5CE080: fldcw   word ptr [esp+30h+var_1C]
0x5CE084: fld     [esp+30h+var_14]
0x5CE088: fnstcw  word ptr [esp+30h+var_1C]
0x5CE08C: fmul    st, st(1)
0x5CE08E: movzx   eax, word ptr [esp+30h+var_1C]
0x5CE093: or      eax, 0C00h
0x5CE098: mov     [esp+30h+var_14], eax
0x5CE09C: fldcw   word ptr [esp+30h+var_14]
0x5CE0A0: fistp   [esp+30h+var_14]
0x5CE0A4: mov     dl, byte ptr [esp+30h+var_14]
0x5CE0A8: mov     cl, dl
0x5CE0AA: fldcw   word ptr [esp+30h+var_1C]
0x5CE0AE: shl     ecx, 8
0x5CE0B1: fmul    [esp+30h+var_10]
0x5CE0B5: fnstcw  word ptr [esp+30h+var_1C]
0x5CE0B9: movzx   eax, word ptr [esp+30h+var_1C]
0x5CE0BE: or      eax, 0C00h
0x5CE0C3: mov     [esp+30h+var_10], eax
0x5CE0C7: fldcw   word ptr [esp+30h+var_10]
0x5CE0CB: fistp   [esp+30h+var_10]
0x5CE0CF: movzx   eax, byte ptr [esp+30h+var_10]
0x5CE0D4: movzx   edx, al
0x5CE0D7: fldcw   word ptr [esp+30h+var_1C]
0x5CE0DB: or      ecx, edx
0x5CE0DD: mov     eax, ecx
0x5CE0DF: cmp     eax, [ebp+1E8h]
0x5CE0E5: jz      short loc_5CE0F0
0x5CE0E7: push    1
0x5CE0E9: mov     ecx, edi
0x5CE0EB: call    sub_5C5C30
0x5CE0F0: mov     eax, ds:0B38FD8h
0x5CE0F5: push    0FAEh
0x5CE0FA: sub     esp, 8
0x5CE0FD: mov     ecx, esp; this
0x5CE0FF: mov     [esp+3Ch+var_10], esp
0x5CE103: push    esi; a3
0x5CE104: push    eax; a2
0x5CE105: mov     [ecx], esi
0x5CE107: mov     [ecx+4], si
0x5CE10B: mov     [ecx+6], si
0x5CE10F: call    BSStringT_Set
0x5CE114: mov     eax, ds:0B38F88h
0x5CE119: sub     esp, 8
0x5CE11C: mov     ecx, esp; this
0x5CE11E: mov     [esp+44h+var_14], esp
0x5CE122: push    esi; a3
0x5CE123: push    eax; a2
0x5CE124: mov     [esp+4Ch+var_4], 3
0x5CE12C: mov     [ecx], esi
0x5CE12E: mov     [ecx+4], si
0x5CE132: mov     [ecx+6], si
0x5CE136: call    BSStringT_Set
0x5CE13B: mov     ecx, edi
0x5CE13D: mov     [esp+44h+var_4], ebx
0x5CE141: call    sub_5C3440
0x5CE146: fld     dword ptr [ebp+1CCh]
0x5CE14C: mov     ecx, eax
0x5CE14E: fstp    [esp+34h+var_10]
0x5CE152: call    Tile_GetFloat
0x5CE157: fld     [esp+30h+var_10]
0x5CE15B: fucompp
0x5CE15D: fnstsw  ax
0x5CE15F: test    ah, 44h
0x5CE162: jnp     short loc_5CE16B
0x5CE164: mov     ecx, edi
0x5CE166: call    sub_5C62D0
0x5CE16B: mov     eax, ds:0B39330h
0x5CE170: push    0FAEh
0x5CE175: sub     esp, 8
0x5CE178: mov     ecx, esp; this
0x5CE17A: mov     [esp+3Ch+var_10], esp
0x5CE17E: push    esi; a3
0x5CE17F: push    eax; a2
0x5CE180: mov     [ecx], esi
0x5CE182: mov     [ecx+4], si
0x5CE186: mov     [ecx+6], si
0x5CE18A: call    BSStringT_Set
0x5CE18F: mov     eax, ds:0B38F88h
0x5CE194: sub     esp, 8
0x5CE197: mov     ecx, esp; this
0x5CE199: mov     [esp+44h+var_14], esp
0x5CE19D: push    esi; a3
0x5CE19E: push    eax; a2
0x5CE19F: mov     [esp+4Ch+var_4], 4
0x5CE1A7: mov     [ecx], esi
0x5CE1A9: mov     [ecx+4], si
0x5CE1AD: mov     [ecx+6], si
0x5CE1B1: call    BSStringT_Set
0x5CE1B6: mov     ecx, edi
0x5CE1B8: mov     [esp+44h+var_4], ebx
0x5CE1BC: call    sub_5C3440
0x5CE1C1: mov     ecx, eax
0x5CE1C3: call    Tile_GetFloat
0x5CE1C8: fild    dword ptr [edi+88Ch]
0x5CE1CE: fucompp
0x5CE1D0: fnstsw  ax
0x5CE1D2: test    ah, 44h
0x5CE1D5: jnp     short loc_5CE246
0x5CE1D7: mov     ecx, edi
0x5CE1D9: call    sub_5C5F00
0x5CE1DE: mov     eax, ds:0B39330h
0x5CE1E3: push    0FAEh
0x5CE1E8: sub     esp, 8
0x5CE1EB: mov     ecx, esp; this
0x5CE1ED: mov     [esp+3Ch+var_10], esp
0x5CE1F1: push    esi; a3
0x5CE1F2: push    eax; a2
0x5CE1F3: mov     [ecx], esi
0x5CE1F5: mov     [ecx+4], si
0x5CE1F9: mov     [ecx+6], si
0x5CE1FD: call    BSStringT_Set
0x5CE202: mov     eax, ds:0B38F88h
0x5CE207: sub     esp, 8
0x5CE20A: mov     ecx, esp; this
0x5CE20C: mov     [esp+44h+var_14], esp
0x5CE210: push    esi; a3
0x5CE211: push    eax; a2
0x5CE212: mov     [esp+4Ch+var_4], 5
0x5CE21A: mov     [ecx], esi
0x5CE21C: mov     [ecx+4], si
0x5CE220: mov     [ecx+6], si
0x5CE224: call    BSStringT_Set
0x5CE229: mov     ecx, edi
0x5CE22B: mov     [esp+44h+var_4], ebx
0x5CE22F: call    sub_5C3440
0x5CE234: mov     ecx, eax
0x5CE236: call    Tile_GetFloat
0x5CE23B: call    Double_To_SInt32
0x5CE240: mov     [edi+88Ch], eax
0x5CE246: mov     eax, ds:0B38F78h
0x5CE24B: push    0FAEh
0x5CE250: sub     esp, 8
0x5CE253: mov     ecx, esp; this
0x5CE255: mov     [esp+3Ch+var_10], esp
0x5CE259: push    esi; a3
0x5CE25A: push    eax; a2
0x5CE25B: mov     [ecx], esi
0x5CE25D: mov     [ecx+4], si
0x5CE261: mov     [ecx+6], si
0x5CE265: call    BSStringT_Set
0x5CE26A: mov     eax, ds:0B38F78h
0x5CE26F: sub     esp, 8
0x5CE272: mov     ecx, esp; this
0x5CE274: mov     [esp+44h+var_14], esp
0x5CE278: push    esi; a3
0x5CE279: push    eax; a2
0x5CE27A: mov     [esp+4Ch+var_4], 6
0x5CE282: mov     [ecx], esi
0x5CE284: mov     [ecx+4], si
0x5CE288: mov     [ecx+6], si
0x5CE28C: call    BSStringT_Set
0x5CE291: mov     ecx, edi
0x5CE293: mov     [esp+44h+var_4], ebx
0x5CE297: call    sub_5C3440
0x5CE29C: mov     ecx, eax
0x5CE29E: call    Tile_GetFloat
0x5CE2A3: call    Double_To_SInt32
0x5CE2A8: mov     ebp, eax
0x5CE2AA: cmp     ebp, [edi+86Ch]
0x5CE2B0: jz      short loc_5CE2BF
0x5CE2B2: mov     ecx, edi
0x5CE2B4: call    sub_5CDA30
0x5CE2B9: mov     [edi+86Ch], ebp
0x5CE2BF: mov     eax, ds:0B38FA8h
0x5CE2C4: push    0FAEh
0x5CE2C9: sub     esp, 8
0x5CE2CC: mov     ecx, esp; this
0x5CE2CE: mov     [esp+3Ch+var_10], esp
0x5CE2D2: push    esi; a3
0x5CE2D3: push    eax; a2
0x5CE2D4: mov     [ecx], esi
0x5CE2D6: mov     [ecx+4], si
0x5CE2DA: mov     [ecx+6], si
0x5CE2DE: call    BSStringT_Set
0x5CE2E3: mov     eax, ds:0B38F78h
0x5CE2E8: sub     esp, 8
0x5CE2EB: mov     ecx, esp; this
0x5CE2ED: mov     [esp+44h+var_14], esp
0x5CE2F1: push    esi; a3
0x5CE2F2: push    eax; a2
0x5CE2F3: mov     [esp+4Ch+var_4], 7
0x5CE2FB: mov     [ecx], esi
0x5CE2FD: mov     [ecx+4], si
0x5CE301: mov     [ecx+6], si
0x5CE305: call    BSStringT_Set
0x5CE30A: mov     ecx, edi
0x5CE30C: mov     [esp+44h+var_4], ebx
0x5CE310: call    sub_5C3440
0x5CE315: mov     ecx, eax
0x5CE317: call    Tile_GetFloat
0x5CE31C: call    Double_To_SInt32
0x5CE321: mov     ebp, eax
0x5CE323: movzx   eax, byte ptr [edi+868h]
0x5CE32A: cmp     ebp, eax
0x5CE32C: jz      short loc_5CE340
0x5CE32E: mov     ecx, edi
0x5CE330: call    sub_5C9770
0x5CE335: cmp     ebp, esi
0x5CE337: setnle  cl
0x5CE33A: mov     [edi+868h], cl
0x5CE340: mov     eax, ds:0B38F98h
0x5CE345: push    0FAEh
0x5CE34A: sub     esp, 8
0x5CE34D: mov     ecx, esp; this
0x5CE34F: mov     [esp+3Ch+var_10], esp
0x5CE353: push    esi; a3
0x5CE354: push    eax; a2
0x5CE355: mov     [ecx], esi
0x5CE357: mov     [ecx+4], si
0x5CE35B: mov     [ecx+6], si
0x5CE35F: call    BSStringT_Set
0x5CE364: mov     eax, ds:0B38F70h
0x5CE369: sub     esp, 8
0x5CE36C: mov     ecx, esp; this
0x5CE36E: mov     [esp+44h+var_14], esp
0x5CE372: push    esi; a3
0x5CE373: push    eax; a2
0x5CE374: mov     [esp+4Ch+var_4], 8
0x5CE37C: mov     [ecx], esi
0x5CE37E: mov     [ecx+4], si
0x5CE382: mov     [ecx+6], si
0x5CE386: call    BSStringT_Set
0x5CE38B: mov     ecx, edi
0x5CE38D: mov     [esp+44h+var_4], ebx
0x5CE391: call    sub_5C3440
0x5CE396: mov     ecx, eax
0x5CE398: call    Tile_GetFloat
0x5CE39D: fstp    [esp+30h+var_10]
0x5CE3A1: mov     eax, ds:0B38FA0h
0x5CE3A6: push    0FAEh
0x5CE3AB: sub     esp, 8
0x5CE3AE: mov     ecx, esp; this
0x5CE3B0: mov     [esp+3Ch+var_14], esp
0x5CE3B4: push    esi; a3
0x5CE3B5: push    eax; a2
0x5CE3B6: mov     [ecx], esi
0x5CE3B8: mov     [ecx+4], si
0x5CE3BC: mov     [ecx+6], si
0x5CE3C0: call    BSStringT_Set
0x5CE3C5: mov     eax, ds:0B38F70h
0x5CE3CA: sub     esp, 8
0x5CE3CD: mov     ecx, esp; this
0x5CE3CF: mov     [esp+44h+var_18], esp
0x5CE3D3: push    esi; a3
0x5CE3D4: push    eax; a2
0x5CE3D5: mov     [esp+4Ch+var_4], 9
0x5CE3DD: mov     [ecx], esi
0x5CE3DF: mov     [ecx+4], si
0x5CE3E3: mov     [ecx+6], si
0x5CE3E7: call    BSStringT_Set
0x5CE3EC: mov     ecx, edi
0x5CE3EE: mov     [esp+44h+var_4], ebx
0x5CE3F2: call    sub_5C3440
0x5CE3F7: mov     ecx, eax
0x5CE3F9: call    Tile_GetFloat
0x5CE3FE: fstp    [esp+30h+var_14]
0x5CE402: fld     [esp+30h+var_10]
0x5CE406: fld     st
0x5CE408: fld     dword ptr [edi+880h]
0x5CE40E: fucompp
0x5CE410: fnstsw  ax
0x5CE412: fld     [esp+30h+var_14]
0x5CE416: test    ah, 44h
0x5CE419: jp      short loc_5CE42C
0x5CE41B: fld     st
0x5CE41D: fld     dword ptr [edi+884h]
0x5CE423: fucompp
0x5CE425: fnstsw  ax
0x5CE427: test    ah, 44h
0x5CE42A: jnp     short loc_5CE453
0x5CE42C: fxch    st(1)
0x5CE42E: push    esi
0x5CE42F: fstp    dword ptr [edi+880h]
0x5CE435: mov     ecx, edi
0x5CE437: fstp    dword ptr [edi+884h]
0x5CE43D: call    sub_5C50A0
0x5CE442: push    1
0x5CE444: call    sub_5C7070
0x5CE449: add     esp, 4
0x5CE44C: call    UpdatePlayerHead
0x5CE451: jmp     short loc_5CE457
0x5CE453: fstp    st(1)
0x5CE455: fstp    st
0x5CE457: mov     eax, ds:0B38F90h
0x5CE45C: push    0FAEh
0x5CE461: sub     esp, 8
0x5CE464: mov     ecx, esp; this
0x5CE466: mov     [esp+3Ch+var_10], esp
0x5CE46A: push    esi; a3
0x5CE46B: push    eax; a2
0x5CE46C: mov     [ecx], esi
0x5CE46E: mov     [ecx+4], si
0x5CE472: mov     [ecx+6], si
0x5CE476: call    BSStringT_Set
0x5CE47B: mov     eax, ds:0B38F70h
0x5CE480: sub     esp, 8
0x5CE483: mov     ecx, esp; this
0x5CE485: mov     [esp+44h+var_14], esp
0x5CE489: push    esi; a3
0x5CE48A: push    eax; a2
0x5CE48B: mov     [esp+4Ch+var_4], 0Ah
0x5CE493: mov     [ecx], esi
0x5CE495: mov     [ecx+4], si
0x5CE499: mov     [ecx+6], si
0x5CE49D: call    BSStringT_Set
0x5CE4A2: mov     ecx, edi
0x5CE4A4: mov     [esp+44h+var_4], ebx
0x5CE4A8: call    sub_5C3440
0x5CE4AD: mov     ecx, eax
0x5CE4AF: call    Tile_GetFloat
0x5CE4B4: call    Double_To_SInt32
0x5CE4B9: cmp     eax, [edi+87Ch]
0x5CE4BF: jz      short loc_5CE4D0
0x5CE4C1: push    1
0x5CE4C3: mov     ecx, edi
0x5CE4C5: mov     [edi+87Ch], eax
0x5CE4CB: call    sub_5C9980
0x5CE4D0: mov     eax, ds:0B38FB8h
0x5CE4D5: push    0FAEh
0x5CE4DA: sub     esp, 8
0x5CE4DD: mov     ecx, esp; this
0x5CE4DF: mov     [esp+3Ch+var_10], esp
0x5CE4E3: push    esi; a3
0x5CE4E4: push    eax; a2
0x5CE4E5: mov     [ecx], esi
0x5CE4E7: mov     [ecx+4], si
0x5CE4EB: mov     [ecx+6], si
0x5CE4EF: call    BSStringT_Set
0x5CE4F4: mov     eax, ds:0B38F88h
0x5CE4F9: sub     esp, 8
0x5CE4FC: mov     ecx, esp; this
0x5CE4FE: mov     [esp+44h+var_14], esp
0x5CE502: push    esi; a3
0x5CE503: push    eax; a2
0x5CE504: mov     [esp+4Ch+var_4], 0Bh
0x5CE50C: mov     [ecx], esi
0x5CE50E: mov     [ecx+4], si
0x5CE512: mov     [ecx+6], si
0x5CE516: call    BSStringT_Set
0x5CE51B: mov     ecx, edi
0x5CE51D: mov     [esp+44h+var_4], ebx
0x5CE521: call    sub_5C3440
0x5CE526: mov     ecx, eax
0x5CE528: call    Tile_GetFloat
0x5CE52D: call    Double_To_SInt32
0x5CE532: cmp     eax, [edi+870h]
0x5CE538: jz      short loc_5CE547
0x5CE53A: mov     ecx, edi
0x5CE53C: mov     [edi+870h], eax
0x5CE542: call    sub_5C5B00
0x5CE547: mov     ecx, edi
0x5CE549: call    sub_5C9BA0
0x5CE54E: mov     ecx, [esp+30h+var_C]
0x5CE552: mov     large fs:0, ecx
0x5CE559: pop     ecx
0x5CE55A: pop     edi
0x5CE55B: pop     esi
0x5CE55C: pop     ebp
0x5CE55D: pop     ebx
0x5CE55E: add     esp, 1Ch
0x5CE561: retn
