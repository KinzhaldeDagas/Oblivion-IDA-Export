0x509220: sub     esp, 78h
0x509223: push    ebx
0x509224: mov     ebx, [esp+7Ch+arg_8]
0x50922B: test    ebx, ebx
0x50922D: push    ebp
0x50922E: push    esi
0x50922F: push    edi
0x509230: jz      loc_509397
0x509236: mov     eax, [ebx]
0x509238: mov     edx, [eax+154h]
0x50923E: mov     ecx, ebx
0x509240: call    edx
0x509242: mov     ebp, eax
0x509244: test    ebp, ebp
0x509246: jz      loc_509397
0x50924C: mov     edx, [ebx]
0x50924E: mov     edx, [edx+0F8h]
0x509254: mov     ecx, 9
0x509259: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x50925E: lea     edi, [esp+88h+var_6C]
0x509262: rep movsd
0x509264: mov     ecx, ds:0B3F9A8h
0x50926A: sub     esp, 0Ch
0x50926D: mov     eax, esp
0x50926F: mov     [eax], ecx
0x509271: mov     ecx, ds:0B3F9ACh
0x509277: mov     [eax+4], ecx
0x50927A: mov     ecx, ds:0B3F9B0h
0x509280: mov     [eax+8], ecx
0x509283: mov     ecx, ebx
0x509285: call    edx
0x509287: mov     eax, [ebx]
0x509289: mov     edx, [eax+0F0h]
0x50928F: lea     ecx, [esp+88h+var_78]
0x509293: push    ecx
0x509294: mov     ecx, ebx
0x509296: call    edx
0x509298: fld     dword ptr [eax]
0x50929A: push    ecx
0x50929B: lea     ecx, [esp+8Ch+var_48]
0x50929F: fstp    [esp+8Ch+var_8C]; float
0x5092A2: call    NiMatrix33_InitRotationTransposedTransform???
0x5092A7: lea     eax, [esp+88h+var_6C]
0x5092AB: push    eax
0x5092AC: lea     ecx, [esp+8Ch+var_24]
0x5092B0: push    ecx
0x5092B1: lea     ecx, [esp+90h+var_48]
0x5092B5: call    NiMAtrix33_Multiply
0x5092BA: mov     edx, [ebx]
0x5092BC: mov     edx, [edx+0F0h]
0x5092C2: mov     esi, eax
0x5092C4: mov     ecx, 9
0x5092C9: lea     edi, [esp+88h+var_6C]
0x5092CD: lea     eax, [esp+88h+var_78]
0x5092D1: rep movsd
0x5092D3: push    eax
0x5092D4: mov     ecx, ebx
0x5092D6: call    edx
0x5092D8: push    ecx
0x5092D9: fld     dword ptr [eax+4]
0x5092DC: lea     ecx, [esp+8Ch+var_48]
0x5092E0: fstp    [esp+8Ch+var_8C]; float
0x5092E3: call    sub_70FD80
0x5092E8: lea     eax, [esp+88h+var_6C]
0x5092EC: push    eax
0x5092ED: lea     ecx, [esp+8Ch+var_24]
0x5092F1: push    ecx
0x5092F2: lea     ecx, [esp+90h+var_48]
0x5092F6: call    NiMAtrix33_Multiply
0x5092FB: mov     edx, [ebx]
0x5092FD: mov     edx, [edx+0F0h]
0x509303: mov     esi, eax
0x509305: mov     ecx, 9
0x50930A: lea     edi, [esp+88h+var_6C]
0x50930E: lea     eax, [esp+88h+var_78]
0x509312: rep movsd
0x509314: push    eax
0x509315: mov     ecx, ebx
0x509317: call    edx
0x509319: push    ecx
0x50931A: fld     dword ptr [eax+8]
0x50931D: lea     ecx, [esp+8Ch+var_48]
0x509321: fstp    [esp+8Ch+var_8C]; float
0x509324: call    NiMatrix33_InitRotationTransform
0x509329: lea     eax, [esp+88h+var_6C]
0x50932D: push    eax
0x50932E: lea     ecx, [esp+8Ch+var_24]
0x509332: push    ecx
0x509333: lea     ecx, [esp+90h+var_48]
0x509337: call    NiMAtrix33_Multiply
0x50933C: mov     edx, [ebx]
0x50933E: mov     esi, eax
0x509340: mov     ecx, 9
0x509345: lea     edi, [esp+88h+var_6C]
0x509349: rep movsd
0x50934B: lea     eax, [esp+88h+var_78]
0x50934F: mov     edx, [edx+0F4h]
0x509355: push    eax
0x509356: mov     ecx, ebx
0x509358: call    edx
0x50935A: mov     ecx, [eax]
0x50935C: mov     [ebp+54h], ecx
0x50935F: mov     edx, [eax+4]
0x509362: mov     [ebp+58h], edx
0x509365: mov     eax, [eax+8]
0x509368: mov     [ebp+5Ch], eax
0x50936B: lea     edi, [ebp+30h]
0x50936E: mov     ecx, 9
0x509373: lea     esi, [esp+88h+var_6C]
0x509377: rep movsd
0x509379: mov     edx, [ebx]
0x50937B: mov     eax, [edx+164h]
0x509381: mov     ecx, ebx
0x509383: call    eax
0x509385: test    eax, eax
0x509387: jnz     short loc_509397
0x509389: fldz
0x50938B: push    eax; a3
0x50938C: push    ecx
0x50938D: fstp    [esp+90h+a2+4]; a2
0x509390: mov     ecx, ebp; this
0x509392: call    NiAVObject_UpdateNiAVObject
0x509397: pop     edi
0x509398: pop     esi
0x509399: pop     ebp
0x50939A: mov     al, 1
0x50939C: pop     ebx
0x50939D: add     esp, 78h
0x5093A0: retn
