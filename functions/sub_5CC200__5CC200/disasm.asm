0x5CC200: push    ebp
0x5CC201: mov     ebp, esp
0x5CC203: and     esp, 0FFFFFFF8h
0x5CC206: push    0FFFFFFFFh
0x5CC208: push    offset SEH_5CC200
0x5CC20D: mov     eax, large fs:0
0x5CC213: push    eax
0x5CC214: sub     esp, 18h
0x5CC217: push    ebx; a3
0x5CC218: push    esi; a3
0x5CC219: push    edi; a3
0x5CC21A: mov     eax, ds:0B30AACh
0x5CC21F: xor     eax, esp
0x5CC221: push    eax; a3
0x5CC222: lea     eax, [esp+34h+var_C]
0x5CC226: mov     large fs:0, eax
0x5CC22C: mov     esi, ecx
0x5CC22E: mov     ecx, [esi+30h]; this
0x5CC231: fld1
0x5CC233: push    ecx
0x5CC234: fstp    [esp+38h+a2]; a3
0x5CC237: push    0FF0h; a2
0x5CC23C: mov     [esp+3Ch+var_21], 0
0x5CC241: mov     byte ptr [esi+8D0h], 0
0x5CC248: call    Tile_SetFloat
0x5CC24D: mov     ecx, [esi+8ECh]
0x5CC253: call    sub_57D2F0
0x5CC258: test    al, al
0x5CC25A: mov     ebx, [ebp+arg_0]
0x5CC25D: jz      loc_5CC8A3
0x5CC263: mov     ecx, [esi+8ECh]
0x5CC269: push    0
0x5CC26B: call    sub_57DD90
0x5CC270: mov     ecx, esi
0x5CC272: call    sub_5C30C0
0x5CC277: cmp     ebx, 5Ah ; 'Z'
0x5CC27A: jnz     loc_5CC8BA
0x5CC280: mov     eax, ds:0B38F70h
0x5CC285: push    0FA8h
0x5CC28A: sub     esp, 8
0x5CC28D: mov     ecx, esp; this
0x5CC28F: xor     ebx, ebx
0x5CC291: mov     [esp+40h+var_20], esp
0x5CC295: push    ebx; a3
0x5CC296: push    eax; a2
0x5CC297: mov     [ecx], ebx
0x5CC299: mov     [ecx+4], bx
0x5CC29D: mov     [ecx+6], bx
0x5CC2A1: call    BSStringT_Set
0x5CC2A6: mov     ecx, esi
0x5CC2A8: call    sub_5C3110
0x5CC2AD: mov     ecx, [esi+4]
0x5CC2B0: push    0FAEh; int
0x5CC2B5: mov     edi, eax
0x5CC2B7: call    Tile_GetFloat
0x5CC2BC: fstp    qword ptr [esp+38h+var_18]
0x5CC2C0: mov     ecx, edi
0x5CC2C2: call    Tile_GetFloat
0x5CC2C7: fcomp   qword ptr [esp+34h+var_18]
0x5CC2CB: fnstsw  ax
0x5CC2CD: test    ah, 44h
0x5CC2D0: jnp     loc_5CCA77
0x5CC2D6: mov     eax, ds:0B38FE0h
0x5CC2DB: push    0FA8h
0x5CC2E0: sub     esp, 8
0x5CC2E3: mov     ecx, esp; this
0x5CC2E5: mov     [esp+40h+var_20], esp
0x5CC2E9: push    ebx; a3
0x5CC2EA: push    eax; a2
0x5CC2EB: mov     [ecx], ebx
0x5CC2ED: mov     [ecx+4], bx
0x5CC2F1: mov     [ecx+6], bx
0x5CC2F5: call    BSStringT_Set
0x5CC2FA: mov     ecx, esi
0x5CC2FC: call    sub_5C3110
0x5CC301: mov     ecx, [esi+4]
0x5CC304: push    0FAEh; int
0x5CC309: mov     edi, eax
0x5CC30B: call    Tile_GetFloat
0x5CC310: fstp    qword ptr [esp+38h+var_18]
0x5CC314: mov     ecx, edi
0x5CC316: call    Tile_GetFloat
0x5CC31B: fcomp   qword ptr [esp+34h+var_18]
0x5CC31F: fnstsw  ax
0x5CC321: test    ah, 44h
0x5CC324: jnp     loc_5CCA09
0x5CC32A: mov     eax, ds:0B38FE8h
0x5CC32F: push    0FA8h
0x5CC334: sub     esp, 8
0x5CC337: mov     ecx, esp; this
0x5CC339: mov     [esp+40h+var_20], esp
0x5CC33D: push    ebx; a3
0x5CC33E: push    eax; a2
0x5CC33F: mov     [ecx], ebx
0x5CC341: mov     [ecx+4], bx
0x5CC345: mov     [ecx+6], bx
0x5CC349: call    BSStringT_Set
0x5CC34E: mov     ecx, esi
0x5CC350: call    sub_5C3110
0x5CC355: mov     ecx, [esi+4]
0x5CC358: push    0FAEh; int
0x5CC35D: mov     edi, eax
0x5CC35F: call    Tile_GetFloat
0x5CC364: fstp    qword ptr [esp+38h+var_18]
0x5CC368: mov     ecx, edi
0x5CC36A: call    Tile_GetFloat
0x5CC36F: fcomp   qword ptr [esp+34h+var_18]
0x5CC373: fnstsw  ax
0x5CC375: test    ah, 44h
0x5CC378: jnp     loc_5CCA09
0x5CC37E: mov     eax, ds:0B39000h
0x5CC383: push    0FA8h
0x5CC388: sub     esp, 8
0x5CC38B: mov     ecx, esp
0x5CC38D: mov     [esp+40h+var_20], esp
0x5CC391: push    eax
0x5CC392: call    BSStringT_constr_str
0x5CC397: mov     ecx, esi
0x5CC399: call    sub_5C3110
0x5CC39E: mov     ecx, [esi+4]
0x5CC3A1: push    0FAEh; int
0x5CC3A6: mov     edi, eax
0x5CC3A8: call    Tile_GetFloat
0x5CC3AD: fstp    qword ptr [esp+38h+var_18]
0x5CC3B1: mov     ecx, edi
0x5CC3B3: call    Tile_GetFloat
0x5CC3B8: fcomp   qword ptr [esp+34h+var_18]
0x5CC3BC: fnstsw  ax
0x5CC3BE: test    ah, 44h
0x5CC3C1: jnp     loc_5CC9C4
0x5CC3C7: mov     edx, ds:0B39008h
0x5CC3CD: push    0FA8h
0x5CC3D2: sub     esp, 8
0x5CC3D5: mov     ecx, esp
0x5CC3D7: mov     [esp+40h+var_20], esp
0x5CC3DB: push    edx
0x5CC3DC: call    BSStringT_constr_str
0x5CC3E1: mov     ecx, esi
0x5CC3E3: call    sub_5C3110
0x5CC3E8: mov     ecx, [esi+4]
0x5CC3EB: push    0FAEh; int
0x5CC3F0: mov     edi, eax
0x5CC3F2: call    Tile_GetFloat
0x5CC3F7: fstp    qword ptr [esp+38h+var_18]
0x5CC3FB: mov     ecx, edi
0x5CC3FD: call    Tile_GetFloat
0x5CC402: fcomp   qword ptr [esp+34h+var_18]
0x5CC406: fnstsw  ax
0x5CC408: test    ah, 44h
0x5CC40B: jnp     loc_5CC9C4
0x5CC411: mov     eax, ds:0B39010h
0x5CC416: push    0FA8h
0x5CC41B: sub     esp, 8
0x5CC41E: mov     ecx, esp
0x5CC420: mov     [esp+40h+var_20], esp
0x5CC424: push    eax
0x5CC425: call    BSStringT_constr_str
0x5CC42A: mov     ecx, esi
0x5CC42C: call    sub_5C3110
0x5CC431: mov     ecx, [esi+4]
0x5CC434: push    0FAEh; int
0x5CC439: mov     edi, eax
0x5CC43B: call    Tile_GetFloat
0x5CC440: fstp    qword ptr [esp+38h+var_18]
0x5CC444: mov     ecx, edi
0x5CC446: call    Tile_GetFloat
0x5CC44B: fcomp   qword ptr [esp+34h+var_18]
0x5CC44F: fnstsw  ax
0x5CC451: test    ah, 44h
0x5CC454: jnp     loc_5CC9C4
0x5CC45A: mov     edx, ds:0B39018h
0x5CC460: push    0FA8h
0x5CC465: sub     esp, 8
0x5CC468: mov     ecx, esp
0x5CC46A: mov     [esp+40h+var_20], esp
0x5CC46E: push    edx
0x5CC46F: call    BSStringT_constr_str
0x5CC474: mov     ecx, esi
0x5CC476: call    sub_5C3110
0x5CC47B: mov     ecx, [esi+4]
0x5CC47E: push    0FAEh; int
0x5CC483: mov     edi, eax
0x5CC485: call    Tile_GetFloat
0x5CC48A: fstp    qword ptr [esp+38h+var_18]
0x5CC48E: mov     ecx, edi
0x5CC490: call    Tile_GetFloat
0x5CC495: fcomp   qword ptr [esp+34h+var_18]
0x5CC499: fnstsw  ax
0x5CC49B: test    ah, 44h
0x5CC49E: jnp     loc_5CC9C4
0x5CC4A4: mov     eax, ds:0B38F90h
0x5CC4A9: push    0FA8h
0x5CC4AE: sub     esp, 8
0x5CC4B1: mov     ecx, esp
0x5CC4B3: mov     [esp+40h+var_20], esp
0x5CC4B7: push    eax
0x5CC4B8: call    BSStringT_constr_str
0x5CC4BD: mov     ecx, esi
0x5CC4BF: call    sub_5C3110
0x5CC4C4: mov     ecx, [esi+4]
0x5CC4C7: push    0FAEh; int
0x5CC4CC: mov     edi, eax
0x5CC4CE: call    Tile_GetFloat
0x5CC4D3: fstp    qword ptr [esp+38h+var_18]
0x5CC4D7: mov     ecx, edi
0x5CC4D9: call    Tile_GetFloat
0x5CC4DE: fcomp   qword ptr [esp+34h+var_18]
0x5CC4E2: fnstsw  ax
0x5CC4E4: test    ah, 44h
0x5CC4E7: jnp     loc_5CC9C4
0x5CC4ED: mov     edx, ds:0B39020h
0x5CC4F3: push    0FA8h
0x5CC4F8: sub     esp, 8
0x5CC4FB: mov     ecx, esp
0x5CC4FD: mov     [esp+40h+var_20], esp
0x5CC501: push    edx
0x5CC502: call    BSStringT_constr_str
0x5CC507: mov     ecx, esi
0x5CC509: call    sub_5C3110
0x5CC50E: mov     ecx, [esi+4]
0x5CC511: push    0FAEh; int
0x5CC516: mov     edi, eax
0x5CC518: call    Tile_GetFloat
0x5CC51D: fstp    qword ptr [esp+38h+var_18]
0x5CC521: mov     ecx, edi
0x5CC523: call    Tile_GetFloat
0x5CC528: fcomp   qword ptr [esp+34h+var_18]
0x5CC52C: fnstsw  ax
0x5CC52E: test    ah, 44h
0x5CC531: jnp     loc_5CC9C4
0x5CC537: mov     eax, ds:0B39028h
0x5CC53C: push    0FA8h
0x5CC541: sub     esp, 8
0x5CC544: mov     ecx, esp
0x5CC546: mov     [esp+40h+var_20], esp
0x5CC54A: push    eax
0x5CC54B: call    BSStringT_constr_str
0x5CC550: mov     ecx, esi
0x5CC552: call    sub_5C3110
0x5CC557: mov     ecx, [esi+4]
0x5CC55A: push    0FAEh; int
0x5CC55F: mov     edi, eax
0x5CC561: call    Tile_GetFloat
0x5CC566: fstp    qword ptr [esp+38h+var_18]
0x5CC56A: mov     ecx, edi
0x5CC56C: call    Tile_GetFloat
0x5CC571: fcomp   qword ptr [esp+34h+var_18]
0x5CC575: fnstsw  ax
0x5CC577: test    ah, 44h
0x5CC57A: jnp     loc_5CC9C4
0x5CC580: mov     edx, ds:0B39008h
0x5CC586: push    0FA8h
0x5CC58B: sub     esp, 8
0x5CC58E: mov     ecx, esp
0x5CC590: mov     [esp+40h+var_20], esp
0x5CC594: push    edx
0x5CC595: call    BSStringT_constr_str
0x5CC59A: mov     ecx, esi
0x5CC59C: call    sub_5C3110
0x5CC5A1: mov     ecx, [esi+4]
0x5CC5A4: push    0FAEh; int
0x5CC5A9: mov     edi, eax
0x5CC5AB: call    Tile_GetFloat
0x5CC5B0: fstp    qword ptr [esp+38h+var_18]
0x5CC5B4: mov     ecx, edi
0x5CC5B6: call    Tile_GetFloat
0x5CC5BB: fcomp   qword ptr [esp+34h+var_18]
0x5CC5BF: fnstsw  ax
0x5CC5C1: test    ah, 44h
0x5CC5C4: jnp     loc_5CC9C4
0x5CC5CA: mov     eax, ds:0B39030h
0x5CC5CF: push    0FA8h
0x5CC5D4: sub     esp, 8
0x5CC5D7: mov     ecx, esp
0x5CC5D9: mov     [esp+40h+var_20], esp
0x5CC5DD: push    eax
0x5CC5DE: call    BSStringT_constr_str
0x5CC5E3: mov     ecx, esi
0x5CC5E5: call    sub_5C3110
0x5CC5EA: mov     ecx, [esi+4]
0x5CC5ED: push    0FAEh; int
0x5CC5F2: mov     edi, eax
0x5CC5F4: call    Tile_GetFloat
0x5CC5F9: fstp    qword ptr [esp+38h+var_18]
0x5CC5FD: mov     ecx, edi
0x5CC5FF: call    Tile_GetFloat
0x5CC604: fcomp   qword ptr [esp+34h+var_18]
0x5CC608: fnstsw  ax
0x5CC60A: test    ah, 44h
0x5CC60D: jnp     loc_5CC9C4
0x5CC613: mov     edx, ds:0B39038h
0x5CC619: push    0FA8h
0x5CC61E: sub     esp, 8
0x5CC621: mov     ecx, esp
0x5CC623: mov     [esp+40h+var_20], esp
0x5CC627: push    edx
0x5CC628: call    BSStringT_constr_str
0x5CC62D: mov     ecx, esi
0x5CC62F: call    sub_5C3110
0x5CC634: mov     ecx, [esi+4]
0x5CC637: push    0FAEh; int
0x5CC63C: mov     edi, eax
0x5CC63E: call    Tile_GetFloat
0x5CC643: fstp    qword ptr [esp+38h+var_18]
0x5CC647: mov     ecx, edi
0x5CC649: call    Tile_GetFloat
0x5CC64E: fcomp   qword ptr [esp+34h+var_18]
0x5CC652: fnstsw  ax
0x5CC654: test    ah, 44h
0x5CC657: jnp     loc_5CC9C4
0x5CC65D: mov     eax, ds:0B39040h
0x5CC662: push    0FA8h
0x5CC667: sub     esp, 8
0x5CC66A: mov     ecx, esp
0x5CC66C: mov     [esp+40h+var_20], esp
0x5CC670: push    eax
0x5CC671: call    BSStringT_constr_str
0x5CC676: mov     ecx, esi
0x5CC678: call    sub_5C3110
0x5CC67D: mov     ecx, [esi+4]
0x5CC680: push    0FAEh; int
0x5CC685: mov     edi, eax
0x5CC687: call    Tile_GetFloat
0x5CC68C: fstp    qword ptr [esp+38h+var_18]
0x5CC690: mov     ecx, edi
0x5CC692: call    Tile_GetFloat
0x5CC697: fcomp   qword ptr [esp+34h+var_18]
0x5CC69B: fnstsw  ax
0x5CC69D: test    ah, 44h
0x5CC6A0: jnp     loc_5CC97F
0x5CC6A6: mov     edx, ds:0B39050h
0x5CC6AC: push    0FA8h
0x5CC6B1: sub     esp, 8
0x5CC6B4: mov     ecx, esp
0x5CC6B6: mov     [esp+40h+var_20], esp
0x5CC6BA: push    edx
0x5CC6BB: call    BSStringT_constr_str
0x5CC6C0: mov     ecx, esi
0x5CC6C2: call    sub_5C3110
0x5CC6C7: mov     ecx, [esi+4]
0x5CC6CA: push    0FAEh; int
0x5CC6CF: mov     edi, eax
0x5CC6D1: call    Tile_GetFloat
0x5CC6D6: fstp    qword ptr [esp+38h+var_18]
0x5CC6DA: mov     ecx, edi
0x5CC6DC: call    Tile_GetFloat
0x5CC6E1: fcomp   qword ptr [esp+34h+var_18]
0x5CC6E5: fnstsw  ax
0x5CC6E7: test    ah, 44h
0x5CC6EA: jnp     loc_5CC97F
0x5CC6F0: mov     eax, ds:0B39320h
0x5CC6F5: push    0FA8h
0x5CC6FA: sub     esp, 8
0x5CC6FD: mov     ecx, esp
0x5CC6FF: mov     [esp+40h+var_20], esp
0x5CC703: push    eax
0x5CC704: call    BSStringT_constr_str
0x5CC709: mov     ecx, esi
0x5CC70B: call    sub_5C3110
0x5CC710: mov     ecx, [esi+4]
0x5CC713: push    0FAEh; int
0x5CC718: mov     edi, eax
0x5CC71A: call    Tile_GetFloat
0x5CC71F: fstp    qword ptr [esp+38h+var_18]
0x5CC723: mov     ecx, edi
0x5CC725: call    Tile_GetFloat
0x5CC72A: fcomp   qword ptr [esp+34h+var_18]
0x5CC72E: fnstsw  ax
0x5CC730: test    ah, 44h
0x5CC733: jnp     loc_5CC97F
0x5CC739: mov     edx, ds:0B39058h
0x5CC73F: push    0FA8h
0x5CC744: sub     esp, 8
0x5CC747: mov     ecx, esp
0x5CC749: mov     [esp+40h+var_20], esp
0x5CC74D: push    edx
0x5CC74E: call    BSStringT_constr_str
0x5CC753: mov     ecx, esi
0x5CC755: call    sub_5C3110
0x5CC75A: mov     ecx, [esi+4]
0x5CC75D: push    0FAEh; int
0x5CC762: mov     edi, eax
0x5CC764: call    Tile_GetFloat
0x5CC769: fstp    qword ptr [esp+38h+var_18]
0x5CC76D: mov     ecx, edi
0x5CC76F: call    Tile_GetFloat
0x5CC774: fcomp   qword ptr [esp+34h+var_18]
0x5CC778: fnstsw  ax
0x5CC77A: test    ah, 44h
0x5CC77D: jnp     loc_5CC97F
0x5CC783: mov     eax, ds:0B39060h
0x5CC788: push    0FA8h
0x5CC78D: sub     esp, 8
0x5CC790: mov     ecx, esp
0x5CC792: mov     [esp+40h+var_20], esp
0x5CC796: push    eax
0x5CC797: call    BSStringT_constr_str
0x5CC79C: mov     ecx, esi
0x5CC79E: call    sub_5C3110
0x5CC7A3: mov     ecx, [esi+4]
0x5CC7A6: push    0FAEh; int
0x5CC7AB: mov     edi, eax
0x5CC7AD: call    Tile_GetFloat
0x5CC7B2: fstp    qword ptr [esp+38h+var_18]
0x5CC7B6: mov     ecx, edi
0x5CC7B8: call    Tile_GetFloat
0x5CC7BD: fcomp   qword ptr [esp+34h+var_18]
0x5CC7C1: fnstsw  ax
0x5CC7C3: test    ah, 44h
0x5CC7C6: jnp     loc_5CC97F
0x5CC7CC: mov     edx, ds:0B39328h
0x5CC7D2: push    0FA8h
0x5CC7D7: sub     esp, 8
0x5CC7DA: mov     ecx, esp
0x5CC7DC: mov     [esp+40h+var_20], esp
0x5CC7E0: push    edx
0x5CC7E1: call    BSStringT_constr_str
0x5CC7E6: mov     ecx, esi
0x5CC7E8: call    sub_5C3110
0x5CC7ED: mov     ecx, [esi+4]
0x5CC7F0: push    0FAEh
0x5CC7F5: mov     edi, eax
0x5CC7F7: call    Tile_GetFloat
0x5CC7FC: fstp    qword ptr [esp+38h+var_18]
0x5CC800: mov     ecx, edi
0x5CC802: call    Tile_GetFloat
0x5CC807: fcomp   qword ptr [esp+34h+var_18]
0x5CC80B: fnstsw  ax
0x5CC80D: test    ah, 44h
0x5CC810: jnp     loc_5CC97F
0x5CC816: mov     ecx, [esi+3Ch]; this
0x5CC819: fld1
0x5CC81B: push    ecx
0x5CC81C: fstp    [esp+38h+a2]; a3
0x5CC81F: push    0FB3h; a2
0x5CC824: call    Tile_SetFloat
0x5CC829: mov     eax, ds:0B38F70h
0x5CC82E: push    0FA8h
0x5CC833: sub     esp, 8
0x5CC836: mov     ecx, esp
0x5CC838: mov     [esp+40h+var_20], esp
0x5CC83C: push    eax
0x5CC83D: call    BSStringT_constr_str
0x5CC842: mov     ecx, esi
0x5CC844: call    sub_5C3110
0x5CC849: mov     edi, [esi+4]
0x5CC84C: mov     ecx, eax
0x5CC84E: call    Tile_GetFloat
0x5CC853: push    ecx
0x5CC854: fstp    [esp+38h+a2]; a3
0x5CC857: push    0FAEh; a2
0x5CC85C: mov     ecx, edi; this
0x5CC85E: call    Tile_SetFloat
0x5CC863: mov     edx, ds:0B38F70h
0x5CC869: push    0FD0h
0x5CC86E: sub     esp, 8
0x5CC871: mov     ecx, esp
0x5CC873: mov     [esp+40h+var_20], esp
0x5CC877: push    edx
0x5CC878: call    BSStringT_constr_str
0x5CC87D: mov     ecx, esi
0x5CC87F: call    sub_5C3110
0x5CC884: mov     esi, [esi+4]
0x5CC887: mov     ecx, eax
0x5CC889: call    Tile_GetFloat
0x5CC88E: push    ecx
0x5CC88F: fstp    [esp+38h+a2]; a3
0x5CC892: push    0FAFh; a2
0x5CC897: mov     ecx, esi; this
0x5CC899: call    Tile_SetFloat
0x5CC89E: jmp     loc_5CD9C5
0x5CC8A3: cmp     ebx, 0Ah
0x5CC8A6: jnz     loc_5CC277
0x5CC8AC: mov     ecx, esi
0x5CC8AE: call    sub_5C2730
0x5CC8B3: mov     ecx, esi
0x5CC8B5: call    sub_5C30C0
0x5CC8BA: mov     eax, ds:0B38FF0h
0x5CC8BF: push    0FA8h
0x5CC8C4: sub     esp, 8
0x5CC8C7: mov     ecx, esp; this
0x5CC8C9: xor     edi, edi
0x5CC8CB: mov     [esp+40h+var_20], esp
0x5CC8CF: push    edi; a3
0x5CC8D0: push    eax; a2
0x5CC8D1: mov     [ecx], edi
0x5CC8D3: mov     [ecx+4], di
0x5CC8D7: mov     [ecx+6], di
0x5CC8DB: call    BSStringT_Set
0x5CC8E0: mov     eax, ds:0B38F80h
0x5CC8E5: sub     esp, 8
0x5CC8E8: mov     ecx, esp; this
0x5CC8EA: mov     [esp+48h+var_1C], esp
0x5CC8EE: push    edi; a3
0x5CC8EF: push    eax; a2
0x5CC8F0: mov     [esp+50h+var_4], 1
0x5CC8F8: mov     [ecx], edi
0x5CC8FA: mov     [ecx+4], di
0x5CC8FE: mov     [ecx+6], di
0x5CC902: call    BSStringT_Set
0x5CC907: or      edi, 0FFFFFFFFh
0x5CC90A: mov     ecx, esi
0x5CC90C: mov     [esp+48h+var_4], edi
0x5CC910: call    sub_5C3440
0x5CC915: fild    [ebp+arg_0]
0x5CC918: mov     ecx, eax
0x5CC91A: fstp    [esp+38h+var_20]
0x5CC91E: fld     [esp+38h+var_20]
0x5CC922: fstp    qword ptr [esp+38h+var_18]
0x5CC926: call    Tile_GetFloat
0x5CC92B: fld     qword ptr [esp+34h+var_18]
0x5CC92F: fucompp
0x5CC931: fnstsw  ax
0x5CC933: test    ah, 44h
0x5CC936: jp      loc_5CCBF4
0x5CC93C: cmp     byte ptr ds:0B3B4C8h, 0
0x5CC943: jnz     loc_5CCBE5
0x5CC949: mov     edx, ds:0B38CF8h
0x5CC94F: mov     eax, ds:0B38D00h
0x5CC954: mov     ecx, ds:0B39450h
0x5CC95A: push    0
0x5CC95C: push    edx
0x5CC95D: push    eax
0x5CC95E: push    1
0x5CC960: push    offset sub_5C9FC0
0x5CC965: push    ecx
0x5CC966: call    ShowUIMessageBox
0x5CC96B: add     esp, 18h
0x5CC96E: mov     byte ptr ds:0B3B4C8h, 1
0x5CC975: mov     [esp+34h+var_21], 1
0x5CC97A: jmp     loc_5CD9C5
0x5CC97F: mov     eax, ds:0B38FE8h
0x5CC984: push    0FA8h
0x5CC989: sub     esp, 8
0x5CC98C: mov     ecx, esp
0x5CC98E: mov     [esp+40h+var_20], esp
0x5CC992: push    eax
0x5CC993: call    BSStringT_constr_str
0x5CC998: mov     ecx, esi
0x5CC99A: call    sub_5C3110
0x5CC99F: mov     edi, [esi+4]
0x5CC9A2: mov     ecx, eax
0x5CC9A4: call    Tile_GetFloat
0x5CC9A9: push    ecx
0x5CC9AA: fstp    [esp+38h+a2]; a3
0x5CC9AD: push    0FAEh; a2
0x5CC9B2: mov     ecx, edi; this
0x5CC9B4: call    Tile_SetFloat
0x5CC9B9: mov     edx, ds:0B38FE8h
0x5CC9BF: jmp     loc_5CC869
0x5CC9C4: mov     eax, ds:0B38FE0h
0x5CC9C9: push    0FA8h
0x5CC9CE: sub     esp, 8
0x5CC9D1: mov     ecx, esp
0x5CC9D3: mov     [esp+40h+var_20], esp
0x5CC9D7: push    eax
0x5CC9D8: call    BSStringT_constr_str
0x5CC9DD: mov     ecx, esi
0x5CC9DF: call    sub_5C3110
0x5CC9E4: mov     edi, [esi+4]
0x5CC9E7: mov     ecx, eax
0x5CC9E9: call    Tile_GetFloat
0x5CC9EE: push    ecx
0x5CC9EF: fstp    [esp+38h+a2]; a3
0x5CC9F2: push    0FAEh; a2
0x5CC9F7: mov     ecx, edi; this
0x5CC9F9: call    Tile_SetFloat
0x5CC9FE: mov     edx, ds:0B38FE0h
0x5CCA04: jmp     loc_5CC869
0x5CCA09: mov     eax, ds:0B38F80h
0x5CCA0E: push    0FA8h
0x5CCA13: sub     esp, 8
0x5CCA16: mov     ecx, esp; this
0x5CCA18: mov     [esp+40h+var_20], esp
0x5CCA1C: push    ebx; a3
0x5CCA1D: push    eax; a2
0x5CCA1E: mov     [ecx], ebx
0x5CCA20: mov     [ecx+4], bx
0x5CCA24: mov     [ecx+6], bx
0x5CCA28: call    BSStringT_Set
0x5CCA2D: mov     ecx, esi
0x5CCA2F: call    sub_5C3110
0x5CCA34: mov     edi, [esi+4]
0x5CCA37: mov     ecx, eax
0x5CCA39: call    Tile_GetFloat
0x5CCA3E: push    ecx
0x5CCA3F: fstp    [esp+38h+a2]; a3
0x5CCA42: push    0FAEh; a2
0x5CCA47: mov     ecx, edi; this
0x5CCA49: call    Tile_SetFloat
0x5CCA4E: mov     eax, ds:0B38F80h
0x5CCA53: push    0FD0h
0x5CCA58: sub     esp, 8
0x5CCA5B: mov     ecx, esp; this
0x5CCA5D: mov     [esp+40h+var_20], esp
0x5CCA61: push    ebx; a3
0x5CCA62: push    eax; a2
0x5CCA63: mov     [ecx], ebx
0x5CCA65: mov     [ecx+4], bx
0x5CCA69: mov     [ecx+6], bx
0x5CCA6D: call    BSStringT_Set
0x5CCA72: jmp     loc_5CC87D
0x5CCA77: mov     ecx, [esi+30h]
0x5CCA7A: push    0FDEh
0x5CCA7F: mov     [esp+38h+var_22], 1
0x5CCA84: xor     edi, edi
0x5CCA86: call    sub_588C10
0x5CCA8B: lea     edx, [eax+1]
0x5CCA8E: mov     edi, edi
0x5CCA90: mov     cl, [eax]
0x5CCA92: add     eax, 1
0x5CCA95: test    cl, cl
0x5CCA97: jnz     short loc_5CCA90
0x5CCA99: sub     eax, edx
0x5CCA9B: jz      short loc_5CCADF
0x5CCA9D: lea     ecx, [ecx+0]
0x5CCAA0: mov     ecx, [esi+30h]
0x5CCAA3: push    0FDEh
0x5CCAA8: call    sub_588C10
0x5CCAAD: cmp     byte ptr [eax+edi], 20h ; ' '
0x5CCAB1: jz      short loc_5CCAB7
0x5CCAB3: mov     [esp+34h+var_22], bl
0x5CCAB7: mov     ecx, [esi+30h]
0x5CCABA: push    0FDEh
0x5CCABF: add     edi, 1
0x5CCAC2: call    sub_588C10
0x5CCAC7: lea     edx, [eax+1]
0x5CCACA: lea     ebx, [ebx+0]
0x5CCAD0: mov     cl, [eax]
0x5CCAD2: add     eax, 1
0x5CCAD5: test    cl, cl
0x5CCAD7: jnz     short loc_5CCAD0
0x5CCAD9: sub     eax, edx
0x5CCADB: cmp     edi, eax
0x5CCADD: jb      short loc_5CCAA0
0x5CCADF: mov     ecx, [esi+30h]
0x5CCAE2: mov     edi, ds:0B39440h
0x5CCAE8: push    0FDEh
0x5CCAED: call    sub_588C10
0x5CCAF2: push    edi; unsigned __int8 *
0x5CCAF3: push    eax; unsigned __int8 *
0x5CCAF4: call    __mbscmp
0x5CCAF9: add     esp, 8
0x5CCAFC: test    eax, eax
0x5CCAFE: jz      loc_5CCBB7
0x5CCB04: cmp     [esp+34h+var_22], bl
0x5CCB08: jnz     loc_5CCBB7
0x5CCB0E: mov     [esp+34h+var_18], ebx
0x5CCB12: mov     word ptr [esp+34h+var_18+4], bx
0x5CCB17: mov     word ptr [esp+34h+var_18+6], bx
0x5CCB1C: mov     ecx, ds:0B333C4h
0x5CCB22: mov     [esp+34h+var_4], ebx
0x5CCB26: call    Actor__GetRaceIfNPC
0x5CCB2B: add     eax, 18h
0x5CCB2E: mov     eax, [eax+4]
0x5CCB31: cmp     eax, ebx
0x5CCB33: mov     ecx, eax
0x5CCB35: jnz     short loc_5CCB3C
0x5CCB37: mov     ecx, offset EmptyString
0x5CCB3C: mov     al, [ecx]
0x5CCB3E: cmp     al, 61h ; 'a'
0x5CCB40: jz      short loc_5CCB6B
0x5CCB42: cmp     al, 65h ; 'e'
0x5CCB44: jz      short loc_5CCB6B
0x5CCB46: cmp     al, 69h ; 'i'
0x5CCB48: jz      short loc_5CCB6B
0x5CCB4A: cmp     al, 6Fh ; 'o'
0x5CCB4C: jz      short loc_5CCB6B
0x5CCB4E: cmp     al, 75h ; 'u'
0x5CCB50: jz      short loc_5CCB6B
0x5CCB52: cmp     al, 41h ; 'A'
0x5CCB54: jz      short loc_5CCB6B
0x5CCB56: cmp     al, 45h ; 'E'
0x5CCB58: jz      short loc_5CCB6B
0x5CCB5A: cmp     al, 49h ; 'I'
0x5CCB5C: jz      short loc_5CCB6B
0x5CCB5E: cmp     al, 4Fh ; 'O'
0x5CCB60: jz      short loc_5CCB6B
0x5CCB62: cmp     al, 55h ; 'U'
0x5CCB64: mov     eax, ds:0B38660h
0x5CCB69: jnz     short loc_5CCB70
0x5CCB6B: mov     eax, ds:0B38668h
0x5CCB70: push    ecx
0x5CCB71: push    eax; ArgList
0x5CCB72: lea     eax, [esp+3Ch+var_18]
0x5CCB76: push    offset aSS?; "%s %s?"
0x5CCB7B: push    eax; int
0x5CCB7C: call    BSStringT_Static_Format
0x5CCB81: mov     ecx, ds:0B38CF8h
0x5CCB87: mov     edx, ds:0B38D00h
0x5CCB8D: mov     esi, [esp+44h+var_18]
0x5CCB91: push    ebx
0x5CCB92: push    ecx
0x5CCB93: push    edx
0x5CCB94: push    1
0x5CCB96: push    offset sub_5C2BA0
0x5CCB9B: push    esi
0x5CCB9C: call    ShowUIMessageBox
0x5CCBA1: push    esi
0x5CCBA2: mov     [esp+60h+var_4], 0FFFFFFFFh
0x5CCBAA: call    FormHeapFree
0x5CCBAF: add     esp, 2Ch
0x5CCBB2: jmp     loc_5CD9C5
0x5CCBB7: mov     eax, ds:0B38CF0h
0x5CCBBC: mov     ecx, ds:0B39438h
0x5CCBC2: push    ebx
0x5CCBC3: push    eax
0x5CCBC4: push    1
0x5CCBC6: push    ebx
0x5CCBC7: push    ecx
0x5CCBC8: call    ShowUIMessageBox
0x5CCBCD: add     esp, 14h
0x5CCBD0: mov     ecx, [esp+34h+var_C]
0x5CCBD4: mov     large fs:0, ecx
0x5CCBDB: pop     ecx
0x5CCBDC: pop     edi
0x5CCBDD: pop     esi
0x5CCBDE: pop     ebx
0x5CCBDF: mov     esp, ebp
0x5CCBE1: pop     ebp
0x5CCBE2: retn    8
0x5CCBE5: call    sub_5C9CD0
0x5CCBEA: mov     [esp+34h+var_21], 1
0x5CCBEF: jmp     loc_5CD9C5
0x5CCBF4: cmp     ebx, 62h ; 'b'
0x5CCBF7: jnz     short loc_5CCC1C
0x5CCBF9: mov     ecx, ds:0B333C4h
0x5CCBFF: mov     edx, [ecx]
0x5CCC01: mov     eax, [edx+170h]
0x5CCC07: call    eax
0x5CCC09: mov     ecx, eax
0x5CCC0B: call    sub_526F00
0x5CCC10: mov     ecx, esi
0x5CCC12: call    sub_5C91E0
0x5CCC17: jmp     loc_5CD9C5
0x5CCC1C: mov     eax, ds:0B38FF8h
0x5CCC21: push    0FA8h
0x5CCC26: sub     esp, 8
0x5CCC29: mov     ecx, esp; this
0x5CCC2B: xor     ebx, ebx
0x5CCC2D: mov     [esp+40h+var_1C], esp
0x5CCC31: push    ebx; a3
0x5CCC32: push    eax; a2
0x5CCC33: mov     [ecx], ebx
0x5CCC35: mov     [ecx+4], bx
0x5CCC39: mov     [ecx+6], bx
0x5CCC3D: call    BSStringT_Set
0x5CCC42: mov     eax, ds:0B38F80h
0x5CCC47: sub     esp, 8
0x5CCC4A: mov     ecx, esp; this
0x5CCC4C: mov     [esp+48h+var_18], esp
0x5CCC50: push    ebx; a3
0x5CCC51: push    eax; a2
0x5CCC52: mov     [esp+50h+var_4], 2
0x5CCC5A: mov     [ecx], ebx
0x5CCC5C: mov     [ecx+4], bx
0x5CCC60: mov     [ecx+6], bx
0x5CCC64: call    BSStringT_Set
0x5CCC69: mov     ecx, esi
0x5CCC6B: mov     [esp+48h+var_4], edi
0x5CCC6F: call    sub_5C3440
0x5CCC74: fld     [esp+38h+var_20]
0x5CCC78: mov     ecx, eax
0x5CCC7A: fstp    qword ptr [esp+38h+var_18]
0x5CCC7E: call    Tile_GetFloat
0x5CCC83: fld     qword ptr [esp+34h+var_18]
0x5CCC87: fucompp
0x5CCC89: fnstsw  ax
0x5CCC8B: test    ah, 44h
0x5CCC8E: jp      short loc_5CCCD2
0x5CCC90: cmp     ds:0B3B4C9h, bl
0x5CCC96: jnz     short loc_5CCCC8
0x5CCC98: mov     ecx, ds:0B38CF8h
0x5CCC9E: mov     edx, ds:0B38D00h
0x5CCCA4: mov     eax, ds:0B39448h
0x5CCCA9: push    ebx
0x5CCCAA: push    ecx
0x5CCCAB: push    edx
0x5CCCAC: push    1
0x5CCCAE: push    offset sub_5C9F70
0x5CCCB3: push    eax
0x5CCCB4: call    ShowUIMessageBox
0x5CCCB9: add     esp, 18h
0x5CCCBC: mov     byte ptr ds:0B3B4C9h, 1
0x5CCCC3: jmp     loc_5CD9D3
0x5CCCC8: call    sub_5C9C70
0x5CCCCD: jmp     loc_5CD9D3
0x5CCCD2: mov     edx, ds:0B38F98h
0x5CCCD8: push    0FA8h
0x5CCCDD: sub     esp, 8
0x5CCCE0: mov     ecx, esp
0x5CCCE2: mov     [esp+40h+var_18], esp
0x5CCCE6: push    edx; int
0x5CCCE7: call    BSStringT_constr_str
0x5CCCEC: mov     eax, ds:0B38F70h
0x5CCCF1: sub     esp, 8
0x5CCCF4: mov     ecx, esp
0x5CCCF6: mov     [esp+48h+var_1C], esp
0x5CCCFA: push    eax
0x5CCCFB: mov     [esp+4Ch+var_4], 3
0x5CCD03: call    BSStringT_constr_str
0x5CCD08: mov     ecx, esi
0x5CCD0A: mov     [esp+48h+var_4], edi
0x5CCD0E: call    sub_5C3440
0x5CCD13: fld     [esp+38h+var_20]
0x5CCD17: mov     ecx, eax
0x5CCD19: fstp    qword ptr [esp+38h+var_18]
0x5CCD1D: call    Tile_GetFloat
0x5CCD22: fld     qword ptr [esp+34h+var_18]
0x5CCD26: fucompp
0x5CCD28: fnstsw  ax
0x5CCD2A: test    ah, 44h
0x5CCD2D: jp      short loc_5CCD42
0x5CCD2F: push    ebx
0x5CCD30: call    sub_5C7070
0x5CCD35: add     esp, 4
0x5CCD38: call    UpdatePlayerHead
0x5CCD3D: jmp     loc_5CD9C5
0x5CCD42: mov     edx, ds:0B38FC0h
0x5CCD48: push    0FA8h
0x5CCD4D: sub     esp, 8
0x5CCD50: mov     ecx, esp
0x5CCD52: mov     [esp+40h+var_18], esp
0x5CCD56: push    edx; int
0x5CCD57: call    BSStringT_constr_str
0x5CCD5C: mov     eax, ds:0B38F88h
0x5CCD61: sub     esp, 8
0x5CCD64: mov     ecx, esp
0x5CCD66: mov     [esp+48h+var_1C], esp
0x5CCD6A: push    eax
0x5CCD6B: mov     [esp+4Ch+var_4], 4
0x5CCD73: call    BSStringT_constr_str
0x5CCD78: mov     ecx, esi
0x5CCD7A: mov     [esp+48h+var_4], edi
0x5CCD7E: call    sub_5C3440
0x5CCD83: fld     [esp+38h+var_20]
0x5CCD87: mov     ecx, eax
0x5CCD89: fstp    qword ptr [esp+38h+var_18]
0x5CCD8D: call    Tile_GetFloat
0x5CCD92: fld     qword ptr [esp+34h+var_18]
0x5CCD96: fucompp
0x5CCD98: fnstsw  ax
0x5CCD9A: test    ah, 44h
0x5CCD9D: jnp     loc_5CD9BC
0x5CCDA3: mov     edx, ds:0B38FC8h
0x5CCDA9: push    0FA8h
0x5CCDAE: sub     esp, 8
0x5CCDB1: mov     ecx, esp
0x5CCDB3: mov     [esp+40h+var_18], esp
0x5CCDB7: push    edx; int
0x5CCDB8: call    BSStringT_constr_str
0x5CCDBD: mov     eax, ds:0B38F88h
0x5CCDC2: sub     esp, 8
0x5CCDC5: mov     ecx, esp
0x5CCDC7: mov     [esp+48h+var_1C], esp
0x5CCDCB: push    eax
0x5CCDCC: mov     [esp+4Ch+var_4], 5
0x5CCDD4: call    BSStringT_constr_str
0x5CCDD9: mov     ecx, esi
0x5CCDDB: mov     [esp+48h+var_4], edi
0x5CCDDF: call    sub_5C3440
0x5CCDE4: fld     [esp+38h+var_20]
0x5CCDE8: mov     ecx, eax
0x5CCDEA: fstp    qword ptr [esp+38h+var_18]
0x5CCDEE: call    Tile_GetFloat
0x5CCDF3: fld     qword ptr [esp+34h+var_18]
0x5CCDF7: fucompp
0x5CCDF9: fnstsw  ax
0x5CCDFB: test    ah, 44h
0x5CCDFE: jnp     loc_5CD9BC
0x5CCE04: mov     edx, ds:0B38FD0h
0x5CCE0A: push    0FA8h
0x5CCE0F: sub     esp, 8
0x5CCE12: mov     ecx, esp
0x5CCE14: mov     [esp+40h+var_18], esp
0x5CCE18: push    edx; int
0x5CCE19: call    BSStringT_constr_str
0x5CCE1E: mov     eax, ds:0B38F88h
0x5CCE23: sub     esp, 8
0x5CCE26: mov     ecx, esp
0x5CCE28: mov     [esp+48h+var_1C], esp
0x5CCE2C: push    eax
0x5CCE2D: mov     [esp+4Ch+var_4], 6
0x5CCE35: call    BSStringT_constr_str
0x5CCE3A: mov     ecx, esi
0x5CCE3C: mov     [esp+48h+var_4], edi
0x5CCE40: call    sub_5C3440
0x5CCE45: fld     [esp+38h+var_20]
0x5CCE49: mov     ecx, eax
0x5CCE4B: fstp    qword ptr [esp+38h+var_18]
0x5CCE4F: call    Tile_GetFloat
0x5CCE54: fld     qword ptr [esp+34h+var_18]
0x5CCE58: fucompp
0x5CCE5A: fnstsw  ax
0x5CCE5C: test    ah, 44h
0x5CCE5F: jnp     loc_5CD9BC
0x5CCE65: mov     edx, ds:0B38FD8h
0x5CCE6B: push    0FA8h
0x5CCE70: sub     esp, 8
0x5CCE73: mov     ecx, esp
0x5CCE75: mov     [esp+40h+var_18], esp
0x5CCE79: push    edx; int
0x5CCE7A: call    BSStringT_constr_str
0x5CCE7F: mov     eax, ds:0B38F88h
0x5CCE84: sub     esp, 8
0x5CCE87: mov     ecx, esp
0x5CCE89: mov     [esp+48h+var_1C], esp
0x5CCE8D: push    eax
0x5CCE8E: mov     [esp+4Ch+var_4], 7
0x5CCE96: call    BSStringT_constr_str
0x5CCE9B: mov     ecx, esi
0x5CCE9D: mov     [esp+48h+var_4], edi
0x5CCEA1: call    sub_5C3440
0x5CCEA6: fld     [esp+38h+var_20]
0x5CCEAA: mov     ecx, eax
0x5CCEAC: fstp    qword ptr [esp+38h+var_18]
0x5CCEB0: call    Tile_GetFloat
0x5CCEB5: fld     qword ptr [esp+34h+var_18]
0x5CCEB9: fucompp
0x5CCEBB: fnstsw  ax
0x5CCEBD: test    ah, 44h
0x5CCEC0: jp      short loc_5CCECE
0x5CCEC2: mov     ecx, esi
0x5CCEC4: call    sub_5C62D0
0x5CCEC9: jmp     loc_5CD9C5
0x5CCECE: mov     edx, ds:0B38FA8h
0x5CCED4: push    0FA8h
0x5CCED9: sub     esp, 8
0x5CCEDC: mov     ecx, esp
0x5CCEDE: mov     [esp+40h+var_18], esp
0x5CCEE2: push    edx; int
0x5CCEE3: call    BSStringT_constr_str
0x5CCEE8: mov     eax, ds:0B38F78h
0x5CCEED: sub     esp, 8
0x5CCEF0: mov     ecx, esp
0x5CCEF2: mov     [esp+48h+var_1C], esp
0x5CCEF6: push    eax
0x5CCEF7: mov     [esp+4Ch+var_4], 8
0x5CCEFF: call    BSStringT_constr_str
0x5CCF04: mov     ecx, esi
0x5CCF06: mov     [esp+48h+var_4], edi
0x5CCF0A: call    sub_5C3440
0x5CCF0F: fld     [esp+38h+var_20]
0x5CCF13: mov     ecx, eax
0x5CCF15: fstp    qword ptr [esp+38h+var_18]
0x5CCF19: call    Tile_GetFloat
0x5CCF1E: fld     qword ptr [esp+34h+var_18]
0x5CCF22: fucompp
0x5CCF24: fnstsw  ax
0x5CCF26: test    ah, 44h
0x5CCF29: jp      short loc_5CCF37
0x5CCF2B: mov     ecx, esi
0x5CCF2D: call    sub_5C9770
0x5CCF32: jmp     loc_5CD9C5
0x5CCF37: mov     edx, ds:0B38F80h
0x5CCF3D: push    0FA8h
0x5CCF42: sub     esp, 8
0x5CCF45: mov     ecx, esp
0x5CCF47: mov     [esp+40h+var_18], esp
0x5CCF4B: push    edx; int
0x5CCF4C: call    BSStringT_constr_str
0x5CCF51: mov     eax, ds:0B38F70h
0x5CCF56: sub     esp, 8
0x5CCF59: mov     ecx, esp
0x5CCF5B: mov     [esp+48h+var_1C], esp
0x5CCF5F: push    eax
0x5CCF60: mov     [esp+4Ch+var_4], 9
0x5CCF68: call    BSStringT_constr_str
0x5CCF6D: mov     ecx, esi
0x5CCF6F: mov     [esp+48h+var_4], edi
0x5CCF73: call    sub_5C3440
0x5CCF78: fld     [esp+38h+var_20]
0x5CCF7C: mov     ecx, eax
0x5CCF7E: fstp    qword ptr [esp+38h+var_18]
0x5CCF82: call    Tile_GetFloat
0x5CCF87: fld     qword ptr [esp+34h+var_18]
0x5CCF8B: fucompp
0x5CCF8D: fnstsw  ax
0x5CCF8F: test    ah, 44h
0x5CCF92: jp      short loc_5CCFD6
0x5CCF94: mov     edx, ds:0B38F80h
0x5CCF9A: push    ebx
0x5CCF9B: sub     esp, 8
0x5CCF9E: mov     ecx, esp
0x5CCFA0: mov     [esp+40h+var_18], esp
0x5CCFA4: push    edx
0x5CCFA5: call    BSStringT_constr_str
0x5CCFAA: mov     [esp+40h+var_4], 0Ah
0x5CCFB2: mov     eax, ds:0B38F70h
0x5CCFB7: sub     esp, 8
0x5CCFBA: mov     [esp+48h+var_1C], esp
0x5CCFBE: mov     ecx, esp
0x5CCFC0: push    eax
0x5CCFC1: call    BSStringT_constr_str
0x5CCFC6: mov     ecx, esi
0x5CCFC8: mov     [esp+48h+var_4], edi
0x5CCFCC: call    sub_5C9650
0x5CCFD1: jmp     loc_5CD9C5
0x5CCFD6: mov     edx, ds:0B38FE0h
0x5CCFDC: push    0FA8h
0x5CCFE1: sub     esp, 8
0x5CCFE4: mov     ecx, esp
0x5CCFE6: mov     [esp+40h+var_18], esp
0x5CCFEA: push    edx; int
0x5CCFEB: call    BSStringT_constr_str
0x5CCFF0: mov     eax, ds:0B38F80h
0x5CCFF5: sub     esp, 8
0x5CCFF8: mov     ecx, esp
0x5CCFFA: mov     [esp+48h+var_1C], esp
0x5CCFFE: push    eax
0x5CCFFF: mov     [esp+4Ch+var_4], 0Bh
0x5CD007: call    BSStringT_constr_str
0x5CD00C: mov     ecx, esi
0x5CD00E: mov     [esp+48h+var_4], edi
0x5CD012: call    sub_5C3440
0x5CD017: fld     [esp+38h+var_20]
0x5CD01B: mov     ecx, eax
0x5CD01D: fstp    qword ptr [esp+38h+var_18]
0x5CD021: call    Tile_GetFloat
0x5CD026: fld     qword ptr [esp+34h+var_18]
0x5CD02A: fucompp
0x5CD02C: fnstsw  ax
0x5CD02E: test    ah, 44h
0x5CD031: jp      short loc_5CD05C
0x5CD033: mov     edx, ds:0B38FE0h
0x5CD039: push    1
0x5CD03B: sub     esp, 8
0x5CD03E: mov     ecx, esp
0x5CD040: mov     [esp+40h+var_18], esp
0x5CD044: push    edx
0x5CD045: call    BSStringT_constr_str
0x5CD04A: mov     eax, ds:0B38F80h
0x5CD04F: mov     [esp+40h+var_4], 0Ch
0x5CD057: jmp     loc_5CCFB7
0x5CD05C: mov     edx, ds:0B38FE8h
0x5CD062: push    0FA8h
0x5CD067: sub     esp, 8
0x5CD06A: mov     ecx, esp
0x5CD06C: mov     [esp+40h+var_18], esp
0x5CD070: push    edx; int
0x5CD071: call    BSStringT_constr_str
0x5CD076: mov     eax, ds:0B38F80h
0x5CD07B: sub     esp, 8
0x5CD07E: mov     ecx, esp
0x5CD080: mov     [esp+48h+var_1C], esp
0x5CD084: push    eax
0x5CD085: mov     [esp+4Ch+var_4], 0Dh
0x5CD08D: call    BSStringT_constr_str
0x5CD092: mov     ecx, esi
0x5CD094: mov     [esp+48h+var_4], edi
0x5CD098: call    sub_5C3440
0x5CD09D: fld     [esp+38h+var_20]
0x5CD0A1: mov     ecx, eax
0x5CD0A3: fstp    qword ptr [esp+38h+var_18]
0x5CD0A7: call    Tile_GetFloat
0x5CD0AC: fld     qword ptr [esp+34h+var_18]
0x5CD0B0: fucompp
0x5CD0B2: fnstsw  ax
0x5CD0B4: test    ah, 44h
0x5CD0B7: jp      short loc_5CD0E2
0x5CD0B9: mov     edx, ds:0B38FE8h
0x5CD0BF: push    1
0x5CD0C1: sub     esp, 8
0x5CD0C4: mov     ecx, esp
0x5CD0C6: mov     [esp+40h+var_18], esp
0x5CD0CA: push    edx
0x5CD0CB: call    BSStringT_constr_str
0x5CD0D0: mov     eax, ds:0B38F80h
0x5CD0D5: mov     [esp+40h+var_4], 0Eh
0x5CD0DD: jmp     loc_5CCFB7
0x5CD0E2: mov     edx, ds:0B38F88h
0x5CD0E8: push    0FA8h
0x5CD0ED: sub     esp, 8
0x5CD0F0: mov     ecx, esp
0x5CD0F2: mov     [esp+40h+var_18], esp
0x5CD0F6: push    edx; int
0x5CD0F7: call    BSStringT_constr_str
0x5CD0FC: mov     eax, ds:0B38F70h
0x5CD101: sub     esp, 8
0x5CD104: mov     ecx, esp
0x5CD106: mov     [esp+48h+var_1C], esp
0x5CD10A: push    eax
0x5CD10B: mov     [esp+4Ch+var_4], 0Fh
0x5CD113: call    BSStringT_constr_str
0x5CD118: mov     ecx, esi
0x5CD11A: mov     [esp+48h+var_4], edi
0x5CD11E: call    sub_5C3440
0x5CD123: fld     [esp+38h+var_20]
0x5CD127: mov     ecx, eax
0x5CD129: fstp    qword ptr [esp+38h+var_18]
0x5CD12D: call    Tile_GetFloat
0x5CD132: fld     qword ptr [esp+34h+var_18]
0x5CD136: fucompp
0x5CD138: fnstsw  ax
0x5CD13A: test    ah, 44h
0x5CD13D: jp      short loc_5CD162
0x5CD13F: mov     edx, ds:0B38F88h
0x5CD145: push    ebx
0x5CD146: sub     esp, 8
0x5CD149: mov     ecx, esp
0x5CD14B: mov     [esp+40h+var_18], esp
0x5CD14F: push    edx
0x5CD150: call    BSStringT_constr_str
0x5CD155: mov     [esp+40h+var_4], 10h
0x5CD15D: jmp     loc_5CCFB2
0x5CD162: mov     edx, ds:0B38F78h
0x5CD168: push    0FA8h
0x5CD16D: sub     esp, 8
0x5CD170: mov     ecx, esp
0x5CD172: mov     [esp+40h+var_18], esp
0x5CD176: push    edx; int
0x5CD177: call    BSStringT_constr_str
0x5CD17C: mov     eax, ds:0B38F70h
0x5CD181: sub     esp, 8
0x5CD184: mov     ecx, esp
0x5CD186: mov     [esp+48h+var_1C], esp
0x5CD18A: push    eax
0x5CD18B: mov     [esp+4Ch+var_4], 11h
0x5CD193: call    BSStringT_constr_str
0x5CD198: mov     ecx, esi
0x5CD19A: mov     [esp+48h+var_4], edi
0x5CD19E: call    sub_5C3440
0x5CD1A3: fld     [esp+38h+var_20]
0x5CD1A7: mov     ecx, eax
0x5CD1A9: fstp    qword ptr [esp+38h+var_18]
0x5CD1AD: call    Tile_GetFloat
0x5CD1B2: fld     qword ptr [esp+34h+var_18]
0x5CD1B6: fucompp
0x5CD1B8: fnstsw  ax
0x5CD1BA: test    ah, 44h
0x5CD1BD: jp      short loc_5CD1E2
0x5CD1BF: mov     edx, ds:0B38F78h
0x5CD1C5: push    ebx
0x5CD1C6: sub     esp, 8
0x5CD1C9: mov     ecx, esp
0x5CD1CB: mov     [esp+40h+var_18], esp
0x5CD1CF: push    edx
0x5CD1D0: call    BSStringT_constr_str
0x5CD1D5: mov     [esp+40h+var_4], 12h
0x5CD1DD: jmp     loc_5CCFB2
0x5CD1E2: mov     edx, ds:0B39000h
0x5CD1E8: push    0FA8h
0x5CD1ED: sub     esp, 8
0x5CD1F0: mov     ecx, esp
0x5CD1F2: mov     [esp+40h+var_18], esp
0x5CD1F6: push    edx; int
0x5CD1F7: call    BSStringT_constr_str
0x5CD1FC: mov     eax, ds:0B38FE0h
0x5CD201: sub     esp, 8
0x5CD204: mov     ecx, esp
0x5CD206: mov     [esp+48h+var_1C], esp
0x5CD20A: push    eax
0x5CD20B: mov     [esp+4Ch+var_4], 13h
0x5CD213: call    BSStringT_constr_str
0x5CD218: mov     ecx, esi
0x5CD21A: mov     [esp+48h+var_4], edi
0x5CD21E: call    sub_5C3440
0x5CD223: fld     [esp+38h+var_20]
0x5CD227: mov     ecx, eax
0x5CD229: fstp    qword ptr [esp+38h+var_18]
0x5CD22D: call    Tile_GetFloat
0x5CD232: fld     qword ptr [esp+34h+var_18]
0x5CD236: fucompp
0x5CD238: fnstsw  ax
0x5CD23A: test    ah, 44h
0x5CD23D: jp      short loc_5CD268
0x5CD23F: mov     edx, ds:0B39000h
0x5CD245: push    1
0x5CD247: sub     esp, 8
0x5CD24A: mov     ecx, esp
0x5CD24C: mov     [esp+40h+var_18], esp
0x5CD250: push    edx
0x5CD251: call    BSStringT_constr_str
0x5CD256: mov     eax, ds:0B38FE0h
0x5CD25B: mov     [esp+40h+var_4], 14h
0x5CD263: jmp     loc_5CCFB7
0x5CD268: mov     edx, ds:0B39008h
0x5CD26E: push    0FA8h
0x5CD273: sub     esp, 8
0x5CD276: mov     ecx, esp
0x5CD278: mov     [esp+40h+var_18], esp
0x5CD27C: push    edx; int
0x5CD27D: call    BSStringT_constr_str
0x5CD282: mov     eax, ds:0B38FE0h
0x5CD287: sub     esp, 8
0x5CD28A: mov     ecx, esp
0x5CD28C: mov     [esp+48h+var_1C], esp
0x5CD290: push    eax
0x5CD291: mov     [esp+4Ch+var_4], 15h
0x5CD299: call    BSStringT_constr_str
0x5CD29E: mov     ecx, esi
0x5CD2A0: mov     [esp+48h+var_4], edi
0x5CD2A4: call    sub_5C3440
0x5CD2A9: fld     [esp+38h+var_20]
0x5CD2AD: mov     ecx, eax
0x5CD2AF: fstp    qword ptr [esp+38h+var_18]
0x5CD2B3: call    Tile_GetFloat
0x5CD2B8: fld     qword ptr [esp+34h+var_18]
0x5CD2BC: fucompp
0x5CD2BE: fnstsw  ax
0x5CD2C0: test    ah, 44h
0x5CD2C3: jp      short loc_5CD2EE
0x5CD2C5: mov     edx, ds:0B39008h
0x5CD2CB: push    1
0x5CD2CD: sub     esp, 8
0x5CD2D0: mov     ecx, esp
0x5CD2D2: mov     [esp+40h+var_18], esp
0x5CD2D6: push    edx
0x5CD2D7: call    BSStringT_constr_str
0x5CD2DC: mov     eax, ds:0B38FE0h
0x5CD2E1: mov     [esp+40h+var_4], 16h
0x5CD2E9: jmp     loc_5CCFB7
0x5CD2EE: mov     edx, ds:0B39010h
0x5CD2F4: push    0FA8h
0x5CD2F9: sub     esp, 8
0x5CD2FC: mov     ecx, esp
0x5CD2FE: mov     [esp+40h+var_18], esp
0x5CD302: push    edx; int
0x5CD303: call    BSStringT_constr_str
0x5CD308: mov     eax, ds:0B38FE0h
0x5CD30D: sub     esp, 8
0x5CD310: mov     ecx, esp
0x5CD312: mov     [esp+48h+var_1C], esp
0x5CD316: push    eax
0x5CD317: mov     [esp+4Ch+var_4], 17h
0x5CD31F: call    BSStringT_constr_str
0x5CD324: mov     ecx, esi
0x5CD326: mov     [esp+48h+var_4], edi
0x5CD32A: call    sub_5C3440
0x5CD32F: fld     [esp+38h+var_20]
0x5CD333: mov     ecx, eax
0x5CD335: fstp    qword ptr [esp+38h+var_18]
0x5CD339: call    Tile_GetFloat
0x5CD33E: fld     qword ptr [esp+34h+var_18]
0x5CD342: fucompp
0x5CD344: fnstsw  ax
0x5CD346: test    ah, 44h
0x5CD349: jp      short loc_5CD374
0x5CD34B: mov     edx, ds:0B39010h
0x5CD351: push    1
0x5CD353: sub     esp, 8
0x5CD356: mov     ecx, esp
0x5CD358: mov     [esp+40h+var_18], esp
0x5CD35C: push    edx
0x5CD35D: call    BSStringT_constr_str
0x5CD362: mov     eax, ds:0B38FE0h
0x5CD367: mov     [esp+40h+var_4], 18h
0x5CD36F: jmp     loc_5CCFB7
0x5CD374: mov     edx, ds:0B39018h
0x5CD37A: push    0FA8h
0x5CD37F: sub     esp, 8
0x5CD382: mov     ecx, esp
0x5CD384: mov     [esp+40h+var_18], esp
0x5CD388: push    edx; int
0x5CD389: call    BSStringT_constr_str
0x5CD38E: mov     eax, ds:0B38FE0h
0x5CD393: sub     esp, 8
0x5CD396: mov     ecx, esp
0x5CD398: mov     [esp+48h+var_1C], esp
0x5CD39C: push    eax
0x5CD39D: mov     [esp+4Ch+var_4], 19h
0x5CD3A5: call    BSStringT_constr_str
0x5CD3AA: mov     ecx, esi
0x5CD3AC: mov     [esp+48h+var_4], edi
0x5CD3B0: call    sub_5C3440
0x5CD3B5: fld     [esp+38h+var_20]
0x5CD3B9: mov     ecx, eax
0x5CD3BB: fstp    qword ptr [esp+38h+var_18]
0x5CD3BF: call    Tile_GetFloat
0x5CD3C4: fld     qword ptr [esp+34h+var_18]
0x5CD3C8: fucompp
0x5CD3CA: fnstsw  ax
0x5CD3CC: test    ah, 44h
0x5CD3CF: jp      short loc_5CD3FA
0x5CD3D1: mov     edx, ds:0B39018h
0x5CD3D7: push    1
0x5CD3D9: sub     esp, 8
0x5CD3DC: mov     ecx, esp
0x5CD3DE: mov     [esp+40h+var_18], esp
0x5CD3E2: push    edx
0x5CD3E3: call    BSStringT_constr_str
0x5CD3E8: mov     eax, ds:0B38FE0h
0x5CD3ED: mov     [esp+40h+var_4], 1Ah
0x5CD3F5: jmp     loc_5CCFB7
0x5CD3FA: mov     edx, ds:0B38F90h
0x5CD400: push    0FA8h
0x5CD405: sub     esp, 8
0x5CD408: mov     ecx, esp
0x5CD40A: mov     [esp+40h+var_18], esp
0x5CD40E: push    edx; int
0x5CD40F: call    BSStringT_constr_str
0x5CD414: mov     eax, ds:0B38FE0h
0x5CD419: sub     esp, 8
0x5CD41C: mov     ecx, esp
0x5CD41E: mov     [esp+48h+var_1C], esp
0x5CD422: push    eax
0x5CD423: mov     [esp+4Ch+var_4], 1Bh
0x5CD42B: call    BSStringT_constr_str
0x5CD430: mov     ecx, esi
0x5CD432: mov     [esp+48h+var_4], edi
0x5CD436: call    sub_5C3440
0x5CD43B: fld     [esp+38h+var_20]
0x5CD43F: mov     ecx, eax
0x5CD441: fstp    qword ptr [esp+38h+var_18]
0x5CD445: call    Tile_GetFloat
0x5CD44A: fld     qword ptr [esp+34h+var_18]
0x5CD44E: fucompp
0x5CD450: fnstsw  ax
0x5CD452: test    ah, 44h
0x5CD455: jp      short loc_5CD480
0x5CD457: mov     edx, ds:0B38F90h
0x5CD45D: push    1
0x5CD45F: sub     esp, 8
0x5CD462: mov     ecx, esp
0x5CD464: mov     [esp+40h+var_18], esp
0x5CD468: push    edx
0x5CD469: call    BSStringT_constr_str
0x5CD46E: mov     eax, ds:0B38FE0h
0x5CD473: mov     [esp+40h+var_4], 1Ch
0x5CD47B: jmp     loc_5CCFB7
0x5CD480: mov     edx, ds:0B39020h
0x5CD486: push    0FA8h
0x5CD48B: sub     esp, 8
0x5CD48E: mov     ecx, esp
0x5CD490: mov     [esp+40h+var_18], esp
0x5CD494: push    edx; int
0x5CD495: call    BSStringT_constr_str
0x5CD49A: mov     eax, ds:0B38FE0h
0x5CD49F: sub     esp, 8
0x5CD4A2: mov     ecx, esp
0x5CD4A4: mov     [esp+48h+var_1C], esp
0x5CD4A8: push    eax
0x5CD4A9: mov     [esp+4Ch+var_4], 1Dh
0x5CD4B1: call    BSStringT_constr_str
0x5CD4B6: mov     ecx, esi
0x5CD4B8: mov     [esp+48h+var_4], edi
0x5CD4BC: call    sub_5C3440
0x5CD4C1: fld     [esp+38h+var_20]
0x5CD4C5: mov     ecx, eax
0x5CD4C7: fstp    qword ptr [esp+38h+var_18]
0x5CD4CB: call    Tile_GetFloat
0x5CD4D0: fld     qword ptr [esp+34h+var_18]
0x5CD4D4: fucompp
0x5CD4D6: fnstsw  ax
0x5CD4D8: test    ah, 44h
0x5CD4DB: jp      short loc_5CD506
0x5CD4DD: mov     edx, ds:0B39020h
0x5CD4E3: push    1
0x5CD4E5: sub     esp, 8
0x5CD4E8: mov     ecx, esp
0x5CD4EA: mov     [esp+40h+var_18], esp
0x5CD4EE: push    edx
0x5CD4EF: call    BSStringT_constr_str
0x5CD4F4: mov     eax, ds:0B38FE0h
0x5CD4F9: mov     [esp+40h+var_4], 1Eh
0x5CD501: jmp     loc_5CCFB7
0x5CD506: mov     edx, ds:0B39028h
0x5CD50C: push    0FA8h
0x5CD511: sub     esp, 8
0x5CD514: mov     ecx, esp
0x5CD516: mov     [esp+40h+var_18], esp
0x5CD51A: push    edx; int
0x5CD51B: call    BSStringT_constr_str
0x5CD520: mov     eax, ds:0B38FE0h
0x5CD525: sub     esp, 8
0x5CD528: mov     ecx, esp
0x5CD52A: mov     [esp+48h+var_1C], esp
0x5CD52E: push    eax
0x5CD52F: mov     [esp+4Ch+var_4], 1Fh
0x5CD537: call    BSStringT_constr_str
0x5CD53C: mov     ecx, esi
0x5CD53E: mov     [esp+48h+var_4], edi
0x5CD542: call    sub_5C3440
0x5CD547: fld     [esp+38h+var_20]
0x5CD54B: mov     ecx, eax
0x5CD54D: fstp    qword ptr [esp+38h+var_18]
0x5CD551: call    Tile_GetFloat
0x5CD556: fld     qword ptr [esp+34h+var_18]
0x5CD55A: fucompp
0x5CD55C: fnstsw  ax
0x5CD55E: test    ah, 44h
0x5CD561: jp      short loc_5CD58C
0x5CD563: mov     edx, ds:0B39028h
0x5CD569: push    1
0x5CD56B: sub     esp, 8
0x5CD56E: mov     ecx, esp
0x5CD570: mov     [esp+40h+var_18], esp
0x5CD574: push    edx
0x5CD575: call    BSStringT_constr_str
0x5CD57A: mov     eax, ds:0B38FE0h
0x5CD57F: mov     [esp+40h+var_4], 20h ; ' '
0x5CD587: jmp     loc_5CCFB7
0x5CD58C: mov     edx, ds:0B39030h
0x5CD592: push    0FA8h
0x5CD597: sub     esp, 8
0x5CD59A: mov     ecx, esp
0x5CD59C: mov     [esp+40h+var_18], esp
0x5CD5A0: push    edx; int
0x5CD5A1: call    BSStringT_constr_str
0x5CD5A6: mov     eax, ds:0B38FE0h
0x5CD5AB: sub     esp, 8
0x5CD5AE: mov     ecx, esp
0x5CD5B0: mov     [esp+48h+var_1C], esp
0x5CD5B4: push    eax
0x5CD5B5: mov     [esp+4Ch+var_4], 21h ; '!'
0x5CD5BD: call    BSStringT_constr_str
0x5CD5C2: mov     ecx, esi
0x5CD5C4: mov     [esp+48h+var_4], edi
0x5CD5C8: call    sub_5C3440
0x5CD5CD: fld     [esp+38h+var_20]
0x5CD5D1: mov     ecx, eax
0x5CD5D3: fstp    qword ptr [esp+38h+var_18]
0x5CD5D7: call    Tile_GetFloat
0x5CD5DC: fld     qword ptr [esp+34h+var_18]
0x5CD5E0: fucompp
0x5CD5E2: fnstsw  ax
0x5CD5E4: test    ah, 44h
0x5CD5E7: jp      short loc_5CD612
0x5CD5E9: mov     edx, ds:0B39030h
0x5CD5EF: push    1
0x5CD5F1: sub     esp, 8
0x5CD5F4: mov     ecx, esp
0x5CD5F6: mov     [esp+40h+var_18], esp
0x5CD5FA: push    edx
0x5CD5FB: call    BSStringT_constr_str
0x5CD600: mov     eax, ds:0B38FE0h
0x5CD605: mov     [esp+40h+var_4], 22h ; '"'
0x5CD60D: jmp     loc_5CCFB7
0x5CD612: mov     edx, ds:0B39038h
0x5CD618: push    0FA8h
0x5CD61D: sub     esp, 8
0x5CD620: mov     ecx, esp
0x5CD622: mov     [esp+40h+var_18], esp
0x5CD626: push    edx; int
0x5CD627: call    BSStringT_constr_str
0x5CD62C: mov     eax, ds:0B38FE0h
0x5CD631: sub     esp, 8
0x5CD634: mov     ecx, esp
0x5CD636: mov     [esp+48h+var_1C], esp
0x5CD63A: push    eax
0x5CD63B: mov     [esp+4Ch+var_4], 23h ; '#'
0x5CD643: call    BSStringT_constr_str
0x5CD648: mov     ecx, esi
0x5CD64A: mov     [esp+48h+var_4], edi
0x5CD64E: call    sub_5C3440
0x5CD653: fld     [esp+38h+var_20]
0x5CD657: mov     ecx, eax
0x5CD659: fstp    qword ptr [esp+38h+var_18]
0x5CD65D: call    Tile_GetFloat
0x5CD662: fld     qword ptr [esp+34h+var_18]
0x5CD666: fucompp
0x5CD668: fnstsw  ax
0x5CD66A: test    ah, 44h
0x5CD66D: jp      short loc_5CD698
0x5CD66F: mov     edx, ds:0B39038h
0x5CD675: push    1
0x5CD677: sub     esp, 8
0x5CD67A: mov     ecx, esp
0x5CD67C: mov     [esp+40h+var_18], esp
0x5CD680: push    edx
0x5CD681: call    BSStringT_constr_str
0x5CD686: mov     eax, ds:0B38FE0h
0x5CD68B: mov     [esp+40h+var_4], 24h ; '$'
0x5CD693: jmp     loc_5CCFB7
0x5CD698: mov     edx, ds:0B39040h
0x5CD69E: push    0FA8h
0x5CD6A3: sub     esp, 8
0x5CD6A6: mov     ecx, esp
0x5CD6A8: mov     [esp+40h+var_18], esp
0x5CD6AC: push    edx; int
0x5CD6AD: call    BSStringT_constr_str
0x5CD6B2: mov     eax, ds:0B38FE8h
0x5CD6B7: sub     esp, 8
0x5CD6BA: mov     ecx, esp
0x5CD6BC: mov     [esp+48h+var_1C], esp
0x5CD6C0: push    eax
0x5CD6C1: mov     [esp+4Ch+var_4], 25h ; '%'
0x5CD6C9: call    BSStringT_constr_str
0x5CD6CE: mov     ecx, esi
0x5CD6D0: mov     [esp+48h+var_4], edi
0x5CD6D4: call    sub_5C3440
0x5CD6D9: fld     [esp+38h+var_20]
0x5CD6DD: mov     ecx, eax
0x5CD6DF: fstp    qword ptr [esp+38h+var_18]
0x5CD6E3: call    Tile_GetFloat
0x5CD6E8: fld     qword ptr [esp+34h+var_18]
0x5CD6EC: fucompp
0x5CD6EE: fnstsw  ax
0x5CD6F0: test    ah, 44h
0x5CD6F3: jp      short loc_5CD71E
0x5CD6F5: mov     edx, ds:0B39040h
0x5CD6FB: push    1
0x5CD6FD: sub     esp, 8
0x5CD700: mov     ecx, esp
0x5CD702: mov     [esp+40h+var_18], esp
0x5CD706: push    edx
0x5CD707: call    BSStringT_constr_str
0x5CD70C: mov     eax, ds:0B38FE8h
0x5CD711: mov     [esp+40h+var_4], 26h ; '&'
0x5CD719: jmp     loc_5CCFB7
0x5CD71E: mov     edx, ds:0B39050h
0x5CD724: push    0FA8h
0x5CD729: sub     esp, 8
0x5CD72C: mov     ecx, esp
0x5CD72E: mov     [esp+40h+var_18], esp
0x5CD732: push    edx; int
0x5CD733: call    BSStringT_constr_str
0x5CD738: mov     eax, ds:0B38FE8h
0x5CD73D: sub     esp, 8
0x5CD740: mov     ecx, esp
0x5CD742: mov     [esp+48h+var_1C], esp
0x5CD746: push    eax
0x5CD747: mov     [esp+4Ch+var_4], 27h ; '''
0x5CD74F: call    BSStringT_constr_str
0x5CD754: mov     ecx, esi
0x5CD756: mov     [esp+48h+var_4], edi
0x5CD75A: call    sub_5C3440
0x5CD75F: fld     [esp+38h+var_20]
0x5CD763: mov     ecx, eax
0x5CD765: fstp    qword ptr [esp+38h+var_18]
0x5CD769: call    Tile_GetFloat
0x5CD76E: fld     qword ptr [esp+34h+var_18]
0x5CD772: fucompp
0x5CD774: fnstsw  ax
0x5CD776: test    ah, 44h
0x5CD779: jp      short loc_5CD7A4
0x5CD77B: mov     edx, ds:0B39050h
0x5CD781: push    1
0x5CD783: sub     esp, 8
0x5CD786: mov     ecx, esp
0x5CD788: mov     [esp+40h+var_18], esp
0x5CD78C: push    edx
0x5CD78D: call    BSStringT_constr_str
0x5CD792: mov     eax, ds:0B38FE8h
0x5CD797: mov     [esp+40h+var_4], 28h ; '('
0x5CD79F: jmp     loc_5CCFB7
0x5CD7A4: mov     edx, ds:0B39320h
0x5CD7AA: push    0FA8h
0x5CD7AF: sub     esp, 8
0x5CD7B2: mov     ecx, esp
0x5CD7B4: mov     [esp+40h+var_18], esp
0x5CD7B8: push    edx; int
0x5CD7B9: call    BSStringT_constr_str
0x5CD7BE: mov     eax, ds:0B38FE8h
0x5CD7C3: sub     esp, 8
0x5CD7C6: mov     ecx, esp
0x5CD7C8: mov     [esp+48h+var_1C], esp
0x5CD7CC: push    eax
0x5CD7CD: mov     [esp+4Ch+var_4], 29h ; ')'
0x5CD7D5: call    BSStringT_constr_str
0x5CD7DA: mov     ecx, esi
0x5CD7DC: mov     [esp+48h+var_4], edi
0x5CD7E0: call    sub_5C3440
0x5CD7E5: fld     [esp+38h+var_20]
0x5CD7E9: mov     ecx, eax
0x5CD7EB: fstp    qword ptr [esp+38h+var_18]
0x5CD7EF: call    Tile_GetFloat
0x5CD7F4: fld     qword ptr [esp+34h+var_18]
0x5CD7F8: fucompp
0x5CD7FA: fnstsw  ax
0x5CD7FC: test    ah, 44h
0x5CD7FF: jp      short loc_5CD82A
0x5CD801: mov     edx, ds:0B39320h
0x5CD807: push    1
0x5CD809: sub     esp, 8
0x5CD80C: mov     ecx, esp
0x5CD80E: mov     [esp+40h+var_18], esp
0x5CD812: push    edx
0x5CD813: call    BSStringT_constr_str
0x5CD818: mov     eax, ds:0B38FE8h
0x5CD81D: mov     [esp+40h+var_4], 2Ah ; '*'
0x5CD825: jmp     loc_5CCFB7
0x5CD82A: mov     edx, ds:0B39058h
0x5CD830: push    0FA8h
0x5CD835: sub     esp, 8
0x5CD838: mov     ecx, esp
0x5CD83A: mov     [esp+40h+var_18], esp
0x5CD83E: push    edx; int
0x5CD83F: call    BSStringT_constr_str
0x5CD844: mov     eax, ds:0B38FE8h
0x5CD849: sub     esp, 8
0x5CD84C: mov     ecx, esp
0x5CD84E: mov     [esp+48h+var_1C], esp
0x5CD852: push    eax
0x5CD853: mov     [esp+4Ch+var_4], 2Bh ; '+'
0x5CD85B: call    BSStringT_constr_str
0x5CD860: mov     ecx, esi
0x5CD862: mov     [esp+48h+var_4], edi
0x5CD866: call    sub_5C3440
0x5CD86B: fld     [esp+38h+var_20]
0x5CD86F: mov     ecx, eax
0x5CD871: fstp    qword ptr [esp+38h+var_18]
0x5CD875: call    Tile_GetFloat
0x5CD87A: fld     qword ptr [esp+34h+var_18]
0x5CD87E: fucompp
0x5CD880: fnstsw  ax
0x5CD882: test    ah, 44h
0x5CD885: jp      short loc_5CD8B0
0x5CD887: mov     edx, ds:0B39058h
0x5CD88D: push    1
0x5CD88F: sub     esp, 8
0x5CD892: mov     ecx, esp
0x5CD894: mov     [esp+40h+var_18], esp
0x5CD898: push    edx
0x5CD899: call    BSStringT_constr_str
0x5CD89E: mov     eax, ds:0B38FE8h
0x5CD8A3: mov     [esp+40h+var_4], 2Ch ; ','
0x5CD8AB: jmp     loc_5CCFB7
0x5CD8B0: mov     edx, ds:0B39060h
0x5CD8B6: push    0FA8h
0x5CD8BB: sub     esp, 8
0x5CD8BE: mov     ecx, esp
0x5CD8C0: mov     [esp+40h+var_18], esp
0x5CD8C4: push    edx; int
0x5CD8C5: call    BSStringT_constr_str
0x5CD8CA: mov     eax, ds:0B38FE8h
0x5CD8CF: sub     esp, 8
0x5CD8D2: mov     ecx, esp
0x5CD8D4: mov     [esp+48h+var_1C], esp
0x5CD8D8: push    eax
0x5CD8D9: mov     [esp+4Ch+var_4], 2Dh ; '-'
0x5CD8E1: call    BSStringT_constr_str
0x5CD8E6: mov     ecx, esi
0x5CD8E8: mov     [esp+48h+var_4], edi
0x5CD8EC: call    sub_5C3440
0x5CD8F1: fld     [esp+38h+var_20]
0x5CD8F5: mov     ecx, eax
0x5CD8F7: fstp    qword ptr [esp+38h+var_18]
0x5CD8FB: call    Tile_GetFloat
0x5CD900: fld     qword ptr [esp+34h+var_18]
0x5CD904: fucompp
0x5CD906: fnstsw  ax
0x5CD908: test    ah, 44h
0x5CD90B: jp      short loc_5CD936
0x5CD90D: mov     edx, ds:0B39060h
0x5CD913: push    1
0x5CD915: sub     esp, 8
0x5CD918: mov     ecx, esp
0x5CD91A: mov     [esp+40h+var_18], esp
0x5CD91E: push    edx
0x5CD91F: call    BSStringT_constr_str
0x5CD924: mov     eax, ds:0B38FE8h
0x5CD929: mov     [esp+40h+var_4], 2Eh ; '.'
0x5CD931: jmp     loc_5CCFB7
0x5CD936: mov     edx, ds:0B39328h
0x5CD93C: push    0FA8h
0x5CD941: sub     esp, 8
0x5CD944: mov     ecx, esp
0x5CD946: mov     [esp+40h+var_18], esp
0x5CD94A: push    edx; int
0x5CD94B: call    BSStringT_constr_str
0x5CD950: mov     eax, ds:0B38FE8h
0x5CD955: sub     esp, 8
0x5CD958: mov     ecx, esp
0x5CD95A: mov     [esp+48h+var_1C], esp
0x5CD95E: push    eax
0x5CD95F: mov     [esp+4Ch+var_4], 2Fh ; '/'
0x5CD967: call    BSStringT_constr_str
0x5CD96C: mov     ecx, esi
0x5CD96E: mov     [esp+48h+var_4], edi
0x5CD972: call    sub_5C3440
0x5CD977: fld     [esp+38h+var_20]
0x5CD97B: mov     ecx, eax
0x5CD97D: fstp    qword ptr [esp+38h+var_18]
0x5CD981: call    Tile_GetFloat
0x5CD986: fld     qword ptr [esp+34h+var_18]
0x5CD98A: fucompp
0x5CD98C: fnstsw  ax
0x5CD98E: test    ah, 44h
0x5CD991: jp      short loc_5CDA11
0x5CD993: mov     edx, ds:0B39328h
0x5CD999: push    1
0x5CD99B: sub     esp, 8
0x5CD99E: mov     ecx, esp
0x5CD9A0: mov     [esp+40h+var_18], esp
0x5CD9A4: push    edx
0x5CD9A5: call    BSStringT_constr_str
0x5CD9AA: mov     eax, ds:0B38FE8h
0x5CD9AF: mov     [esp+40h+var_4], 30h ; '0'
0x5CD9B7: jmp     loc_5CCFB7
0x5CD9BC: push    1
0x5CD9BE: mov     ecx, esi
0x5CD9C0: call    sub_5C5C30
0x5CD9C5: cmp     [esp+34h+var_21], 0
0x5CD9CA: mov     byte ptr ds:0B3B4C9h, 0
0x5CD9D1: jnz     short loc_5CD9DA
0x5CD9D3: mov     byte ptr ds:0B3B4C8h, 0
0x5CD9DA: mov     ecx, ds:0B333C4h
0x5CD9E0: mov     edx, [ecx]
0x5CD9E2: mov     eax, [edx+154h]
0x5CD9E8: call    eax
0x5CD9EA: push    eax
0x5CD9EB: push    0
0x5CD9ED: call    GetShadowSceneNode
0x5CD9F2: add     esp, 4
0x5CD9F5: mov     ecx, eax
0x5CD9F7: call    sub_7C5E70
0x5CD9FC: push    1
0x5CD9FE: push    1
0x5CDA00: push    0
0x5CDA02: call    GetShadowSceneNode
0x5CDA07: add     esp, 4
0x5CDA0A: mov     ecx, eax
0x5CDA0C: call    sub_7C7EB0
0x5CDA11: mov     ecx, [esp+34h+var_C]
0x5CDA15: mov     large fs:0, ecx
0x5CDA1C: pop     ecx
0x5CDA1D: pop     edi
0x5CDA1E: pop     esi
0x5CDA1F: pop     ebx
0x5CDA20: mov     esp, ebp
0x5CDA22: pop     ebp
0x5CDA23: retn    8
