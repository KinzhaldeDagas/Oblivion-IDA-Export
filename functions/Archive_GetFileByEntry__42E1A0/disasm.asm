0x42E1A0: push    0FFFFFFFFh
0x42E1A2: push    offset SEH_6ACAB0
0x42E1A7: mov     eax, large fs:0
0x42E1AD: push    eax
0x42E1AE: push    ebp
0x42E1AF: push    esi
0x42E1B0: push    edi
0x42E1B1: mov     eax, ___security_cookie
0x42E1B6: xor     eax, esp
0x42E1B8: push    eax
0x42E1B9: lea     eax, [esp+1Ch+var_C]
0x42E1BD: mov     large fs:0, eax
0x42E1C3: mov     edi, ecx
0x42E1C5: lea     eax, [edi+1A8h]
0x42E1CB: push    eax; lpAddend
0x42E1CC: call    ds:InterlockedIncrement
0x42E1D2: mov     esi, [esp+1Ch+arg_0]
0x42E1D6: xor     ebp, ebp
0x42E1D8: cmp     esi, ebp
0x42E1DA: jz      loc_42E2AE
0x42E1E0: mov     eax, [esi+0Ch]
0x42E1E3: mov     dl, [edi+194h]
0x42E1E9: mov     ecx, eax
0x42E1EB: shr     ecx, 1Fh
0x42E1EE: shr     dl, 3
0x42E1F1: xor     cl, dl
0x42E1F3: test    cl, 1
0x42E1F6: jnz     loc_42E2AE
0x42E1FC: test    eax, 7FFFFFFFh
0x42E201: jz      loc_42E2AE
0x42E207: mov     eax, [edi+160h]
0x42E20D: mov     ecx, [esi+8]
0x42E210: shr     eax, 2
0x42E213: shr     ecx, 1Eh
0x42E216: xor     al, cl
0x42E218: test    al, 1
0x42E21A: jnz     short loc_42E25D
0x42E21C: push    15Ch; Size
0x42E221: call    FormHeapAlloc
0x42E226: add     esp, 4
0x42E229: mov     [esp+1Ch+arg_0], eax
0x42E22D: cmp     eax, ebp
0x42E22F: mov     [esp+1Ch+var_4], ebp
0x42E233: jz      short loc_42E2A2
0x42E235: mov     edx, [esi+8]
0x42E238: mov     ecx, [esp+1Ch+arg_4]
0x42E23C: mov     esi, [esi+0Ch]
0x42E23F: push    ecx
0x42E240: and     edx, 3FFFFFFFh
0x42E246: push    edx
0x42E247: mov     edx, dword ptr [esp+24h+ArgList]
0x42E24B: and     esi, 7FFFFFFFh
0x42E251: push    esi
0x42E252: push    edi
0x42E253: push    edx
0x42E254: mov     ecx, eax; this
0x42E256: call    ??0ArchiveFile@@QAE@XZ; ArchiveFile::ArchiveFile(void)
0x42E25B: jmp     short loc_42E2A4
0x42E25D: push    174h; Size
0x42E262: call    FormHeapAlloc
0x42E267: add     esp, 4
0x42E26A: mov     [esp+1Ch+arg_0], eax
0x42E26E: cmp     eax, ebp
0x42E270: mov     [esp+1Ch+var_4], 1
0x42E278: jz      short loc_42E2A2
0x42E27A: mov     edx, [esi+8]
0x42E27D: mov     ecx, [esp+1Ch+arg_4]
0x42E281: mov     esi, [esi+0Ch]
0x42E284: push    ecx; int
0x42E285: and     edx, 3FFFFFFFh
0x42E28B: push    edx; int
0x42E28C: mov     edx, dword ptr [esp+24h+ArgList]
0x42E290: and     esi, 7FFFFFFFh
0x42E296: push    esi; int
0x42E297: push    edi; int
0x42E298: push    edx; ArgList
0x42E299: mov     ecx, eax; this
0x42E29B: call    ArchiveFileCompressed_constr
0x42E2A0: jmp     short loc_42E2A4
0x42E2A2: xor     eax, eax
0x42E2A4: mov     ebp, eax
0x42E2A6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42E2AE: mov     ecx, edi
0x42E2B0: call    Arcghive_CheckDelete
0x42E2B5: mov     eax, ebp
0x42E2B7: mov     ecx, [esp+1Ch+var_C]
0x42E2BB: mov     large fs:0, ecx
0x42E2C2: pop     ecx
0x42E2C3: pop     edi
0x42E2C4: pop     esi
0x42E2C5: pop     ebp
0x42E2C6: add     esp, 0Ch
0x42E2C9: retn    0Ch
