0x575000: push    0FFFFFFFFh
0x575002: push    offset SEH_575000
0x575007: mov     eax, large fs:0
0x57500D: push    eax
0x57500E: sub     esp, 24h
0x575011: push    ebx
0x575012: push    ebp
0x575013: push    esi
0x575014: push    edi
0x575015: mov     eax, ds:0B30AACh
0x57501A: xor     eax, esp
0x57501C: push    eax
0x57501D: lea     eax, [esp+44h+var_C]
0x575021: mov     large fs:0, eax
0x575027: push    30h ; '0'; Size
0x575029: mov     [esp+48h+var_4], 0
0x575031: call    FormHeapAlloc
0x575036: push    30h ; '0'; Size
0x575038: mov     edi, eax
0x57503A: call    FormHeapAlloc
0x57503F: push    20h ; ' '; Size
0x575041: mov     ebp, eax
0x575043: call    FormHeapAlloc
0x575048: push    40h ; '@'; Size
0x57504A: mov     ebx, eax
0x57504C: call    FormHeapAlloc
0x575051: mov     esi, eax
0x575053: add     esp, 10h
0x575056: mov     dword ptr [esp+44h+var_2C], esi
0x57505A: test    esi, esi
0x57505C: mov     byte ptr [esp+44h+var_4], 1
0x575061: jz      short loc_575074
0x575063: push    offset sub_47EA50
0x575068: push    4
0x57506A: push    10h
0x57506C: push    esi
0x57506D: call    sub_401080
0x575072: jmp     short loc_575076
0x575074: xor     esi, esi
0x575076: push    0Ch; Size
0x575078: mov     byte ptr [esp+48h+var_4], 0
0x57507D: call    FormHeapAlloc
0x575082: fld     [esp+48h+arg_8]
0x575086: fst     dword ptr [esp+48h+var_18]
0x57508A: mov     ecx, eax
0x57508C: fld     [esp+48h+arg_C]
0x575090: mov     eax, dword ptr [esp+48h+var_18]
0x575094: fst     dword ptr [esp+48h+var_18+4]
0x575098: mov     edx, dword ptr [esp+48h+var_18+4]
0x57509C: fild    [esp+48h+arg_18]
0x5750A0: mov     [edi], eax
0x5750A2: mov     [edi+4], edx
0x5750A5: add     esp, 4
0x5750A8: fst     [esp+44h+var_20]
0x5750AC: mov     dword ptr [esp+44h+var_2C], ecx
0x5750B0: fld     [esp+44h+arg_10]
0x5750B4: fld     st
0x5750B6: faddp   st(2), st
0x5750B8: fxch    st(1)
0x5750BA: fstp    [esp+44h+arg_18]
0x5750BE: fld     [esp+44h+arg_18]
0x5750C2: fst     [esp+44h+var_10]
0x5750C6: mov     eax, [esp+44h+var_10]
0x5750CA: fxch    st(3)
0x5750CC: mov     [edi+8], eax
0x5750CF: fst     [esp+44h+arg_8]
0x5750D3: mov     edx, [esp+44h+arg_8]
0x5750D7: fxch    st(2)
0x5750D9: mov     [edi+0Ch], edx
0x5750DC: fst     [esp+44h+arg_C]
0x5750E0: mov     eax, [esp+44h+arg_C]
0x5750E4: fxch    st(1)
0x5750E6: mov     [edi+10h], eax
0x5750E9: fst     [esp+44h+arg_10]
0x5750ED: mov     edx, [esp+44h+arg_10]
0x5750F1: fild    [esp+44h+arg_14]
0x5750F5: mov     [edi+14h], edx
0x5750F8: fst     [esp+44h+var_18]
0x5750FC: faddp   st(3), st
0x5750FE: fxch    st(2)
0x575100: fstp    [esp+44h+arg_18]
0x575104: fld     [esp+44h+arg_18]
0x575108: fst     [esp+44h+arg_8]
0x57510C: mov     eax, [esp+44h+arg_8]
0x575110: fxch    st(1)
0x575112: mov     [edi+18h], eax
0x575115: fst     [esp+44h+arg_C]
0x575119: mov     edx, [esp+44h+arg_C]
0x57511D: fxch    st(3)
0x57511F: mov     [edi+1Ch], edx
0x575122: fstp    [esp+44h+arg_10]
0x575126: mov     eax, [esp+44h+arg_10]
0x57512A: mov     [edi+20h], eax
0x57512D: fstp    [esp+44h+arg_8]
0x575131: mov     edx, [esp+44h+arg_8]
0x575135: fxch    st(1)
0x575137: mov     [edi+24h], edx
0x57513A: fstp    [esp+44h+arg_C]
0x57513E: mov     eax, [esp+44h+arg_C]
0x575142: mov     [edi+28h], eax
0x575145: fstp    [esp+44h+arg_10]
0x575149: mov     edx, [esp+44h+arg_10]
0x57514D: fldz
0x57514F: mov     [edi+2Ch], edx
0x575152: fst     [esp+44h+arg_8]
0x575156: mov     eax, [esp+44h+arg_8]
0x57515A: fst     [esp+44h+arg_C]
0x57515E: fld     dword ptr ds:0A30634h
0x575164: mov     edx, [esp+44h+arg_C]
0x575168: fst     [esp+44h+arg_10]
0x57516C: mov     [ebp+0], eax
0x57516F: mov     eax, [esp+44h+arg_10]
0x575173: fxch    st(1)
0x575175: fst     [esp+44h+arg_8]
0x575179: mov     [ebp+4], edx
0x57517C: mov     edx, [esp+44h+arg_8]
0x575180: fst     [esp+44h+arg_C]
0x575184: fxch    st(1)
0x575186: mov     [ebp+8], eax
0x575189: fst     [esp+44h+arg_10]
0x57518D: mov     eax, [esp+44h+arg_C]
0x575191: fxch    st(1)
0x575193: mov     [ebp+0Ch], edx
0x575196: fst     [esp+44h+arg_8]
0x57519A: mov     edx, [esp+44h+arg_10]
0x57519E: fst     [esp+44h+arg_C]
0x5751A2: mov     [ebp+10h], eax
0x5751A5: fxch    st(1)
0x5751A7: mov     eax, [esp+44h+arg_8]
0x5751AB: fst     [esp+44h+arg_10]
0x5751AF: mov     [ebp+14h], edx
0x5751B2: fxch    st(1)
0x5751B4: mov     edx, [esp+44h+arg_C]
0x5751B8: fst     [esp+44h+arg_8]
0x5751BC: mov     [ebp+18h], eax
0x5751BF: fst     [esp+44h+arg_C]
0x5751C3: mov     eax, [esp+44h+arg_10]
0x5751C7: fxch    st(1)
0x5751C9: mov     [ebp+1Ch], edx
0x5751CC: fstp    [esp+44h+arg_10]
0x5751D0: mov     edx, [esp+44h+arg_8]
0x5751D4: mov     [ebp+20h], eax
0x5751D7: fst     [esp+44h+arg_8]
0x5751DB: mov     eax, [esp+44h+arg_C]
0x5751DF: fst     [esp+44h+arg_C]
0x5751E3: mov     [ebp+24h], edx
0x5751E6: mov     edx, [esp+44h+arg_10]
0x5751EA: mov     [ebp+28h], eax
0x5751ED: mov     eax, [esp+44h+arg_8]
0x5751F1: fst     [esp+44h+arg_8]
0x5751F5: fld1
0x5751F7: mov     [ebp+2Ch], edx
0x5751FA: mov     edx, [esp+44h+arg_C]
0x5751FE: fst     [esp+44h+arg_C]
0x575202: mov     [ebx], eax
0x575204: mov     eax, [esp+44h+arg_8]
0x575208: fst     [esp+44h+arg_8]
0x57520C: mov     [ebx+4], edx
0x57520F: fxch    st(1)
0x575211: mov     edx, [esp+44h+arg_C]
0x575215: fst     [esp+44h+arg_C]
0x575219: mov     [ebx+8], eax
0x57521C: fxch    st(1)
0x57521E: mov     eax, [esp+44h+arg_8]
0x575222: fst     [esp+44h+arg_8]
0x575226: mov     [ebx+0Ch], edx
0x575229: mov     edx, [esp+44h+arg_C]
0x57522D: fst     [esp+44h+arg_C]
0x575231: mov     [ebx+10h], eax
0x575234: mov     eax, [esp+44h+arg_8]
0x575238: mov     [ebx+14h], edx
0x57523B: mov     edx, [esp+44h+arg_C]
0x57523F: mov     [ebx+18h], eax
0x575242: mov     [ebx+1Ch], edx
0x575245: mov     [esp+44h+arg_18], 0
0x57524D: mov     ax, word ptr [esp+44h+arg_4]
0x575252: cmp     ax, 0FFFFh
0x575256: jnz     short loc_575272
0x575258: mov     eax, [esp+44h+Source]
0x57525C: lea     edx, [eax+1]
0x57525F: mov     [esp+44h+arg_14], edx
0x575263: mov     dl, [eax]
0x575265: add     eax, 1
0x575268: test    dl, dl
0x57526A: jnz     short loc_575263
0x57526C: sub     eax, [esp+44h+arg_14]
0x575270: jmp     short loc_575275
0x575272: movzx   eax, ax
0x575275: mov     edx, [esp+44h+arg_18]
0x575279: cmp     edx, eax
0x57527B: mov     eax, [esp+44h+Source]
0x57527F: jnb     short loc_57529C
0x575281: neg     eax
0x575283: sbb     eax, eax
0x575285: and     eax, edx
0x575287: mov     edx, [esp+44h+Source]
0x57528B: add     eax, edx
0x57528D: cmp     byte ptr [eax], 2Fh ; '/'
0x575290: jnz     short loc_575295
0x575292: mov     byte ptr [eax], 5Ch ; '\'
0x575295: add     [esp+44h+arg_18], 1
0x57529A: jmp     short loc_57524D
0x57529C: xor     edx, edx
0x57529E: fstp    [esp+44h+var_30]
0x5752A2: cmp     eax, edx
0x5752A4: mov     [esp+44h+arg_18], edx
0x5752A8: jz      loc_575464
0x5752AE: cmp     [eax], dl
0x5752B0: jz      loc_575464
0x5752B6: push    ecx; int
0x5752B7: mov     eax, esp
0x5752B9: mov     [esp+48h+arg_18], esp
0x5752BD: mov     [eax], edx
0x5752BF: push    ecx
0x5752C0: fstp    [esp+4Ch+var_4C]; float
0x5752C3: lea     eax, [esp+4Ch+var_30]
0x5752C7: push    eax; int
0x5752C8: sub     esp, 8
0x5752CB: mov     ecx, esp; this
0x5752CD: mov     [esp+58h+arg_8], esp
0x5752D1: push    edx; a3
0x5752D2: push    offset aBookimg; "(BookIMG)"
0x5752D7: mov     byte ptr [esp+60h+var_4], 2
0x5752DC: mov     [ecx], edx
0x5752DE: mov     [ecx+4], dx
0x5752E2: mov     [ecx+6], dx
0x5752E6: call    BSStringT_Set
0x5752EB: mov     ecx, [esp+58h+Source]
0x5752EF: push    ecx; Source
0x5752F0: lea     edx, [esp+5Ch+arg_14]
0x5752F4: push    edx; int
0x5752F5: mov     byte ptr [esp+60h+var_4], 0
0x5752FA: call    sub_591360
0x5752FF: mov     eax, [eax]
0x575301: mov     [esp+60h+arg_18], eax
0x575305: mov     eax, [esp+60h+arg_14]
0x575309: add     esp, 1Ch
0x57530C: test    eax, eax
0x57530E: jz      short loc_575332
0x575310: mov     [esp+44h+arg_8], eax
0x575314: add     eax, 4
0x575317: push    eax; lpAddend
0x575318: call    dword ptr ds:0A2807Ch
0x57531E: test    eax, eax
0x575320: jnz     short loc_575332
0x575322: mov     ecx, [esp+44h+arg_8]
0x575326: test    ecx, ecx
0x575328: jz      short loc_575332
0x57532A: mov     edx, [ecx]
0x57532C: mov     eax, [edx]
0x57532E: push    1
0x575330: call    eax
0x575332: cmp     [esp+44h+arg_18], 0
0x575337: jz      loc_57545E
0x57533D: fldz
0x57533F: fst     [esp+44h+arg_8]
0x575343: mov     ecx, [esp+44h+arg_8]
0x575347: fstp    [esp+44h+arg_C]
0x57534B: mov     edx, [esp+44h+arg_C]
0x57534F: mov     [ebx], ecx
0x575351: mov     ecx, [esp+44h+arg_18]
0x575355: mov     [ebx+4], edx
0x575358: fld     [esp+44h+var_30]
0x57535C: fmul    [esp+44h+var_20]
0x575360: mov     eax, [ecx]
0x575362: mov     edx, [eax+50h]
0x575365: fstp    [esp+44h+var_2C+4]
0x575369: call    edx
0x57536B: test    eax, eax
0x57536D: mov     [esp+44h+arg_8], eax
0x575371: fild    [esp+44h+arg_8]
0x575375: jge     short loc_57537D
0x575377: fadd    dword ptr ds:0A2FC78h
0x57537D: fdivr   [esp+44h+var_2C+4]
0x575381: fstp    [esp+44h+arg_8]
0x575385: fldz
0x575387: fstp    dword ptr [esp+44h+var_2C+4]
0x57538B: fld     [esp+44h+arg_8]
0x57538F: mov     eax, dword ptr [esp+44h+var_2C+4]
0x575393: fstp    [esp+44h+var_24]
0x575397: mov     [ebx+8], eax
0x57539A: mov     ecx, [esp+44h+var_24]
0x57539E: mov     [ebx+0Ch], ecx
0x5753A1: fld     [esp+44h+var_30]
0x5753A5: mov     ecx, [esp+44h+arg_18]
0x5753A9: fmul    [esp+44h+var_18]
0x5753AD: mov     edx, [ecx]
0x5753AF: mov     eax, [edx+4Ch]
0x5753B2: fstp    [esp+44h+var_2C+4]
0x5753B6: call    eax
0x5753B8: test    eax, eax
0x5753BA: mov     [esp+44h+arg_8], eax
0x5753BE: fild    [esp+44h+arg_8]
0x5753C2: jge     short loc_5753CA
0x5753C4: fadd    dword ptr ds:0A2FC78h
0x5753CA: fdivr   [esp+44h+var_2C+4]
0x5753CE: fstp    [esp+44h+arg_8]
0x5753D2: fldz
0x5753D4: mov     ecx, [esp+44h+arg_8]
0x5753D8: fstp    [esp+44h+arg_C]
0x5753DC: mov     [ebx+10h], ecx
0x5753DF: mov     ecx, [esp+44h+arg_18]
0x5753E3: mov     edx, [esp+44h+arg_C]
0x5753E7: mov     [ebx+14h], edx
0x5753EA: fld     [esp+44h+var_30]
0x5753EE: fmul    [esp+44h+var_20]
0x5753F2: mov     eax, [ecx]
0x5753F4: mov     edx, [eax+50h]
0x5753F7: fstp    [esp+44h+var_20]
0x5753FB: call    edx
0x5753FD: test    eax, eax
0x5753FF: mov     [esp+44h+arg_8], eax
0x575403: fild    [esp+44h+arg_8]
0x575407: jge     short loc_57540F
0x575409: fadd    dword ptr ds:0A2FC78h
0x57540F: fdivr   [esp+44h+var_20]
0x575413: mov     ecx, [esp+44h+arg_18]
0x575417: mov     eax, [ecx]
0x575419: mov     edx, [eax+4Ch]
0x57541C: fstp    [esp+44h+arg_8]
0x575420: fld     [esp+44h+var_30]
0x575424: fmul    [esp+44h+var_18]
0x575428: fstp    [esp+44h+var_18]
0x57542C: call    edx
0x57542E: test    eax, eax
0x575430: mov     dword ptr [esp+44h+var_2C+4], eax
0x575434: fild    dword ptr [esp+44h+var_2C+4]
0x575438: jge     short loc_575440
0x57543A: fadd    dword ptr ds:0A2FC78h
0x575440: fdivr   [esp+44h+var_18]
0x575444: fstp    dword ptr [esp+44h+var_2C+4]
0x575448: fld     [esp+44h+arg_8]
0x57544C: mov     eax, dword ptr [esp+44h+var_2C+4]
0x575450: fstp    [esp+44h+var_24]
0x575454: mov     [ebx+18h], eax
0x575457: mov     ecx, [esp+44h+var_24]
0x57545B: mov     [ebx+1Ch], ecx
0x57545E: mov     ecx, dword ptr [esp+44h+var_2C]
0x575462: jmp     short loc_575466
0x575464: fstp    st
0x575466: mov     edx, ds:0B25AE0h
0x57546C: mov     [esi], edx
0x57546E: mov     eax, ds:0B25AE4h
0x575473: mov     [esi+4], eax
0x575476: mov     edx, ds:0B25AE8h
0x57547C: mov     [esi+8], edx
0x57547F: mov     eax, ds:0B25AECh
0x575484: mov     [esi+0Ch], eax
0x575487: mov     edx, ds:0B25AE0h
0x57548D: mov     [esi+10h], edx
0x575490: mov     eax, ds:0B25AE4h
0x575495: mov     [esi+14h], eax
0x575498: mov     edx, ds:0B25AE8h
0x57549E: mov     [esi+18h], edx
0x5754A1: mov     eax, ds:0B25AECh
0x5754A6: mov     [esi+1Ch], eax
0x5754A9: mov     edx, ds:0B25AE0h
0x5754AF: mov     [esi+20h], edx
0x5754B2: mov     eax, ds:0B25AE4h
0x5754B7: mov     [esi+24h], eax
0x5754BA: mov     edx, ds:0B25AE8h
0x5754C0: mov     [esi+28h], edx
0x5754C3: mov     eax, ds:0B25AECh
0x5754C8: mov     [esi+2Ch], eax
0x5754CB: mov     edx, ds:0B25AE0h
0x5754D1: mov     [esi+30h], edx
0x5754D4: mov     eax, ds:0B25AE4h
0x5754D9: mov     [esi+34h], eax
0x5754DC: mov     edx, ds:0B25AE8h
0x5754E2: mov     [esi+38h], edx
0x5754E5: mov     eax, ds:0B25AECh
0x5754EA: mov     [esi+3Ch], eax
0x5754ED: mov     eax, 1
0x5754F2: mov     edx, 2
0x5754F7: push    0D0h ; 'Ð'; Size
0x5754FC: mov     word ptr [ecx], 0
0x575501: mov     [ecx+2], ax
0x575505: mov     [ecx+4], dx
0x575509: mov     [ecx+6], dx
0x57550D: mov     [ecx+8], ax
0x575511: mov     word ptr [ecx+0Ah], 3
0x575517: call    FormHeapAlloc
0x57551C: add     esp, 4
0x57551F: mov     [esp+44h+arg_8], eax
0x575523: test    eax, eax
0x575525: mov     byte ptr [esp+44h+var_4], 3
0x57552A: jz      short loc_575550
0x57552C: mov     ecx, dword ptr [esp+44h+var_2C]
0x575530: push    0
0x575532: push    0
0x575534: push    0
0x575536: push    0
0x575538: push    ecx
0x575539: push    2
0x57553B: push    0
0x57553D: push    1
0x57553F: push    ebx
0x575540: push    esi
0x575541: push    ebp
0x575542: push    edi
0x575543: push    4
0x575545: mov     ecx, eax
0x575547: call    sub_4A1780
0x57554C: mov     esi, eax
0x57554E: jmp     short loc_575552
0x575550: xor     esi, esi
0x575552: push    30h ; '0'; Size
0x575554: mov     byte ptr [esp+48h+var_4], 0
0x575559: call    FormHeapAlloc
0x57555E: add     esp, 4
0x575561: mov     [esp+44h+arg_8], eax
0x575565: test    eax, eax
0x575567: mov     byte ptr [esp+44h+var_4], 4
0x57556C: jz      short loc_575579
0x57556E: mov     ecx, eax
0x575570: call    NiTexturingProperty__NiTexturingProperty
0x575575: mov     edi, eax
0x575577: jmp     short loc_57557B
0x575579: xor     edi, edi
0x57557B: mov     edx, [esp+44h+arg_18]
0x57557F: push    edx
0x575580: mov     ecx, edi
0x575582: mov     byte ptr [esp+48h+var_4], 0
0x575587: call    NiTexturingProperty__SetUnk08
0x57558C: push    0
0x57558E: mov     ecx, edi
0x575590: call    sub_405870
0x575595: push    edi; a2
0x575596: mov     ecx, esi; this
0x575598: call    sub_405680
0x57559D: mov     ecx, esi; this
0x57559F: call    NiAVObject_InitializePropertyState
0x5755A4: mov     eax, [esp+44h+Source]
0x5755A8: push    eax
0x5755A9: call    FormHeapFree
0x5755AE: add     esp, 4
0x5755B1: mov     eax, esi
0x5755B3: mov     ecx, [esp+44h+var_C]
0x5755B7: mov     large fs:0, ecx
0x5755BE: pop     ecx
0x5755BF: pop     edi
0x5755C0: pop     esi
0x5755C1: pop     ebp
0x5755C2: pop     ebx
0x5755C3: add     esp, 30h
0x5755C6: retn    1Ch
