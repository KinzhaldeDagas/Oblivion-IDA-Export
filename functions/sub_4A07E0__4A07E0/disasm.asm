0x4A07E0: push    0FFFFFFFFh
0x4A07E2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x4A07E7: mov     eax, large fs:0
0x4A07ED: push    eax
0x4A07EE: push    ecx
0x4A07EF: push    ebp
0x4A07F0: push    esi
0x4A07F1: push    edi
0x4A07F2: mov     eax, ds:0B30AACh
0x4A07F7: xor     eax, esp
0x4A07F9: push    eax
0x4A07FA: lea     eax, [esp+20h+var_C]
0x4A07FE: mov     large fs:0, eax
0x4A0804: mov     ebp, ecx
0x4A0806: cmp     dword ptr ds:0B35290h, 0
0x4A080D: jnz     loc_4A089C
0x4A0813: push    1Ch; Size
0x4A0815: call    FormHeapAlloc
0x4A081A: mov     esi, eax
0x4A081C: add     esp, 4
0x4A081F: mov     [esp+20h+var_10], esi
0x4A0823: test    esi, esi
0x4A0825: mov     [esp+20h+var_4], 0
0x4A082D: jz      short loc_4A0848
0x4A082F: mov     ecx, esi; this
0x4A0831: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x4A0836: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x4A083C: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x4A0842: mov     byte ptr [esi+1Ah], 0
0x4A0846: jmp     short loc_4A084A
0x4A0848: xor     esi, esi
0x4A084A: mov     eax, ds:0B35290h
0x4A084F: cmp     eax, esi
0x4A0851: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4A0859: jz      short loc_4A0897
0x4A085B: test    eax, eax
0x4A085D: jz      short loc_4A087D
0x4A085F: mov     edi, eax
0x4A0861: add     eax, 4
0x4A0864: push    eax; lpAddend
0x4A0865: call    dword ptr ds:0A2807Ch
0x4A086B: test    eax, eax
0x4A086D: jnz     short loc_4A087D
0x4A086F: test    edi, edi
0x4A0871: jz      short loc_4A087D
0x4A0873: mov     eax, [edi]
0x4A0875: mov     edx, [eax]
0x4A0877: push    1
0x4A0879: mov     ecx, edi
0x4A087B: call    edx
0x4A087D: test    esi, esi
0x4A087F: mov     eax, esi
0x4A0881: mov     ds:0B35290h, eax
0x4A0886: jz      short loc_4A0897
0x4A0888: add     esi, 4
0x4A088B: push    esi; lpAddend
0x4A088C: call    dword ptr ds:0A28078h
0x4A0892: mov     eax, ds:0B35290h
0x4A0897: or      word ptr [eax+18h], 1
0x4A089C: fldz
0x4A089E: mov     byte ptr [ebp+0ECh], 0
0x4A08A5: fst     dword ptr [ebp+0E0h]
0x4A08AB: mov     byte ptr [ebp+0DCh], 1
0x4A08B2: fstp    dword ptr [ebp+0E4h]
0x4A08B8: fld1
0x4A08BA: fstp    dword ptr [ebp+0E8h]
0x4A08C0: mov     ecx, dword ptr [esp+20h+var_C]
0x4A08C4: mov     large fs:0, ecx
0x4A08CB: pop     ecx
0x4A08CC: pop     edi
0x4A08CD: pop     esi
0x4A08CE: pop     ebp
0x4A08CF: add     esp, 10h
0x4A08D2: retn
