0x814160: push    0FFFFFFFFh
0x814162: push    offset ??0BSCubeMapCamera@@QAE@XZ_SEH
0x814167: mov     eax, large fs:0
0x81416D: push    eax
0x81416E: sub     esp, 20h
0x814171: push    ebx
0x814172: push    ebp
0x814173: push    esi
0x814174: push    edi
0x814175: mov     eax, ds:0B30AACh
0x81417A: xor     eax, esp
0x81417C: push    eax
0x81417D: lea     eax, [esp+40h+var_C]
0x814181: mov     large fs:0, eax
0x814187: mov     ebp, ecx
0x814189: mov     [esp+40h+var_2C], ebp
0x81418D: call    sub_70D590
0x814192: push    offset sub_7016A0; a5
0x814197: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x81419C: push    6; size
0x81419E: push    4; a2
0x8141A0: xor     edi, edi
0x8141A2: lea     esi, [ebp+128h]
0x8141A8: push    esi; a1
0x8141A9: mov     [esp+54h+var_4], edi
0x8141AD: mov     dword ptr [ebp+0], offset ??_7BSCubeMapCamera@@6B@; const BSCubeMapCamera::`vftable'
0x8141B4: call    ArrayConstructor
0x8141B9: mov     [ebp+140h], edi
0x8141BF: mov     [ebp+148h], edi
0x8141C5: mov     eax, [esp+40h+arg_0]
0x8141C9: mov     byte ptr [esp+40h+var_4], 3
0x8141CE: mov     [ebp+124h], eax
0x8141D4: mov     edi, esi
0x8141D6: mov     ebx, 6
0x8141DB: jmp     short loc_8141E0
0x8141DD: align 10h
0x8141E0: mov     esi, [edi]
0x8141E2: test    esi, esi
0x8141E4: jz      short loc_814208
0x8141E6: lea     ecx, [esi+4]
0x8141E9: push    ecx; lpAddend
0x8141EA: call    dword ptr ds:0A2807Ch
0x8141F0: test    eax, eax
0x8141F2: jnz     short loc_814202
0x8141F4: test    esi, esi
0x8141F6: jz      short loc_814202
0x8141F8: mov     edx, [esi]
0x8141FA: mov     eax, [edx]
0x8141FC: push    1
0x8141FE: mov     ecx, esi
0x814200: call    eax
0x814202: mov     dword ptr [edi], 0
0x814208: add     edi, 4
0x81420B: sub     ebx, 1
0x81420E: jnz     short loc_8141E0
0x814210: mov     esi, [ebp+140h]
0x814216: test    esi, esi
0x814218: jz      short loc_814240
0x81421A: lea     ecx, [esi+4]
0x81421D: push    ecx; lpAddend
0x81421E: call    dword ptr ds:0A2807Ch
0x814224: test    eax, eax
0x814226: jnz     short loc_814236
0x814228: test    esi, esi
0x81422A: jz      short loc_814236
0x81422C: mov     edx, [esi]
0x81422E: mov     eax, [edx]
0x814230: push    1
0x814232: mov     ecx, esi
0x814234: call    eax
0x814236: mov     dword ptr [ebp+140h], 0
0x814240: mov     esi, [ebp+148h]
0x814246: test    esi, esi
0x814248: jz      short loc_814270
0x81424A: lea     ecx, [esi+4]
0x81424D: push    ecx; lpAddend
0x81424E: call    dword ptr ds:0A2807Ch
0x814254: test    eax, eax
0x814256: jnz     short loc_814266
0x814258: test    esi, esi
0x81425A: jz      short loc_814266
0x81425C: mov     edx, [esi]
0x81425E: mov     eax, [edx]
0x814260: push    1
0x814262: mov     ecx, esi
0x814264: call    eax
0x814266: mov     dword ptr [ebp+148h], 0
0x814270: push    0
0x814272: lea     ecx, [esp+44h+var_28]
0x814276: call    NiFrustum__SetOrtho
0x81427B: fld     qword ptr ds:0A948E8h
0x814281: mov     [esp+40h+var_10], 0
0x814286: call    __CItan
0x81428B: fstp    [esp+40h+arg_0]
0x81428F: fld     [esp+40h+arg_0]
0x814293: lea     edi, [ebp+0ECh]
0x814299: fld     st
0x81429B: mov     ecx, 7
0x8142A0: fchs
0x8142A2: lea     esi, [esp+40h+var_28]
0x8142A6: fstp    [esp+40h+arg_0]
0x8142AA: push    1Ch; Size
0x8142AC: fld     [esp+44h+arg_0]
0x8142B0: fst     [esp+44h+var_28]
0x8142B4: fstp    [esp+44h+var_1C]
0x8142B8: fst     [esp+44h+var_24]
0x8142BC: fstp    [esp+44h+var_20]
0x8142C0: fld1
0x8142C2: fstp    [esp+44h+var_18]
0x8142C6: fld     dword ptr ds:0A2FF44h
0x8142CC: fstp    [esp+44h+var_14]
0x8142D0: rep movsd
0x8142D2: call    FormHeapAlloc
0x8142D7: add     esp, 4
0x8142DA: mov     [esp+40h+arg_0], eax
0x8142DE: test    eax, eax
0x8142E0: mov     byte ptr [esp+40h+var_4], 4
0x8142E5: jz      short loc_8142F0
0x8142E7: mov     ecx, eax
0x8142E9: call    ImageSpaceshaderList__Create; Treat this list as a de facto subclass of a standard NiTPointerList as this is bigger of 3 UInt32
0x8142EE: jmp     short loc_8142F2
0x8142F0: xor     eax, eax
0x8142F2: mov     ecx, eax; this
0x8142F4: mov     byte ptr [esp+40h+var_4], 3
0x8142F9: mov     [ebp+14Ch], eax
0x8142FF: call    j_NiTPointerList__FreeAllNodes
0x814304: mov     eax, ebp
0x814306: mov     ecx, dword ptr [esp+40h+var_C]
0x81430A: mov     large fs:0, ecx
0x814311: pop     ecx
0x814312: pop     edi
0x814313: pop     esi
0x814314: pop     ebp
0x814315: pop     ebx
0x814316: add     esp, 2Ch
0x814319: retn    4
