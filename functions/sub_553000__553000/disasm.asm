0x553000: push    0FFFFFFFFh
0x553002: push    offset SEH_553000
0x553007: mov     eax, large fs:0
0x55300D: push    eax
0x55300E: push    ecx
0x55300F: push    ebp
0x553010: push    esi
0x553011: push    edi
0x553012: mov     eax, ds:0B30AACh
0x553017: xor     eax, esp
0x553019: push    eax
0x55301A: lea     eax, [esp+20h+var_C]
0x55301E: mov     large fs:0, eax
0x553024: mov     edi, ecx
0x553026: mov     [esp+20h+var_10], edi
0x55302A: mov     eax, ds:0B39B80h
0x55302F: test    eax, eax
0x553031: mov     [esp+20h+var_4], 5
0x553039: jz      short loc_553076
0x55303B: cmp     dword ptr [eax+0DACh], 0
0x553042: jz      short loc_553076
0x553044: mov     ecx, [eax+0DACh]
0x55304A: call    sub_54F840
0x55304F: mov     eax, ds:0B39B80h
0x553054: mov     ecx, [eax+0DACh]
0x55305A: test    ecx, ecx
0x55305C: jz      short loc_553066
0x55305E: mov     edx, [ecx]
0x553060: mov     eax, [edx]
0x553062: push    1
0x553064: call    eax
0x553066: mov     ecx, ds:0B39B80h
0x55306C: mov     dword ptr [ecx+0DACh], 0
0x553076: mov     esi, [edi+0DB8h]
0x55307C: test    esi, esi
0x55307E: mov     ebp, ds:0A2807Ch
0x553084: mov     byte ptr [esp+20h+var_4], 4
0x553089: jz      short loc_5530A3
0x55308B: lea     edx, [esi+4]
0x55308E: push    edx; lpAddend
0x55308F: call    ebp ; InterlockedDecrement
0x553091: test    eax, eax
0x553093: jnz     short loc_5530A3
0x553095: test    esi, esi
0x553097: jz      short loc_5530A3
0x553099: mov     eax, [esi]
0x55309B: mov     edx, [eax]
0x55309D: push    1
0x55309F: mov     ecx, esi
0x5530A1: call    edx
0x5530A3: mov     esi, [edi+0DB4h]
0x5530A9: test    esi, esi
0x5530AB: mov     byte ptr [esp+20h+var_4], 3
0x5530B0: jz      short loc_5530CA
0x5530B2: lea     eax, [esi+4]
0x5530B5: push    eax; lpAddend
0x5530B6: call    ebp ; InterlockedDecrement
0x5530B8: test    eax, eax
0x5530BA: jnz     short loc_5530CA
0x5530BC: test    esi, esi
0x5530BE: jz      short loc_5530CA
0x5530C0: mov     edx, [esi]
0x5530C2: mov     eax, [edx]
0x5530C4: push    1
0x5530C6: mov     ecx, esi
0x5530C8: call    eax
0x5530CA: mov     esi, [edi+0DB0h]
0x5530D0: test    esi, esi
0x5530D2: mov     byte ptr [esp+20h+var_4], 2
0x5530D7: jz      short loc_5530F1
0x5530D9: lea     ecx, [esi+4]
0x5530DC: push    ecx; lpAddend
0x5530DD: call    ebp ; InterlockedDecrement
0x5530DF: test    eax, eax
0x5530E1: jnz     short loc_5530F1
0x5530E3: test    esi, esi
0x5530E5: jz      short loc_5530F1
0x5530E7: mov     edx, [esi]
0x5530E9: mov     eax, [edx]
0x5530EB: push    1
0x5530ED: mov     ecx, esi
0x5530EF: call    eax
0x5530F1: lea     ecx, [edi+0C8h]
0x5530F7: mov     byte ptr [esp+20h+var_4], 1
0x5530FC: call    sub_551FE0
0x553101: push    offset sub_552E50; void (__thiscall *)(void *)
0x553106: push    4; int
0x553108: lea     eax, [edi+88h]
0x55310E: push    10h; unsigned int
0x553110: push    eax; void *
0x553111: mov     byte ptr [esp+30h+var_4], 0
0x553116: call    $LN21
0x55311B: mov     ecx, edi
0x55311D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x553125: call    sub_552F40
0x55312A: mov     ecx, dword ptr [esp+20h+var_C]
0x55312E: mov     large fs:0, ecx
0x553135: pop     ecx
0x553136: pop     edi
0x553137: pop     esi
0x553138: pop     ebp
0x553139: add     esp, 10h
0x55313C: retn
