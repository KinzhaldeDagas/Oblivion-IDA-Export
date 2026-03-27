0x8C0350: push    esi
0x8C0351: mov     esi, ecx
0x8C0353: cmp     dword ptr [esi+0Ch], 0
0x8C0357: jnz     short loc_8C03CD
0x8C0359: push    14h; Size
0x8C035B: call    FormHeapAlloc
0x8C0360: add     esp, 4
0x8C0363: test    eax, eax
0x8C0365: jz      short loc_8C038D
0x8C0367: lea     ecx, [eax+4]
0x8C036A: mov     dword ptr [ecx], 0
0x8C0370: mov     dword ptr [eax+0Ch], 0
0x8C0377: mov     dword ptr [eax+10h], 0
0x8C037E: mov     dword ptr [eax+8], 1
0x8C0385: mov     dword ptr [eax], offset ??_7hkWheelConstraintCinfo@@6B@; const hkWheelConstraintCinfo::`vftable'
0x8C038B: jmp     short loc_8C038F
0x8C038D: xor     ecx, ecx
0x8C038F: cmp     dword ptr [esi+8], 0
0x8C0393: mov     [esi+0Ch], ecx
0x8C0396: jz      short loc_8C03BF
0x8C0398: test    ecx, ecx
0x8C039A: jz      short loc_8C03B5
0x8C039C: lea     eax, [ecx-4]
0x8C039F: push    eax
0x8C03A0: mov     ecx, esi
0x8C03A2: call    sub_8A07E0
0x8C03A7: mov     eax, [esp+4+arg_0]
0x8C03AB: mov     byte ptr [eax], 1
0x8C03AE: mov     eax, [esi+0Ch]
0x8C03B1: pop     esi
0x8C03B2: retn    4
0x8C03B5: xor     eax, eax
0x8C03B7: push    eax
0x8C03B8: mov     ecx, esi
0x8C03BA: call    sub_8A07E0
0x8C03BF: mov     eax, [esp+4+arg_0]
0x8C03C3: mov     byte ptr [eax], 1
0x8C03C6: mov     eax, [esi+0Ch]
0x8C03C9: pop     esi
0x8C03CA: retn    4
0x8C03CD: mov     ecx, [esp+4+arg_0]
0x8C03D1: mov     byte ptr [ecx], 0
0x8C03D4: mov     eax, [esi+0Ch]
0x8C03D7: pop     esi
0x8C03D8: retn    4
