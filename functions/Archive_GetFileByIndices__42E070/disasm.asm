0x42E070: push    0FFFFFFFFh
0x42E072: push    offset Archive_GetFileByIndices_SEH
0x42E077: mov     eax, large fs:0
0x42E07D: push    eax
0x42E07E: push    ebx
0x42E07F: push    ebp
0x42E080: push    esi
0x42E081: push    edi
0x42E082: mov     eax, ___security_cookie
0x42E087: xor     eax, esp
0x42E089: push    eax
0x42E08A: lea     eax, [esp+20h+var_C]
0x42E08E: mov     large fs:0, eax
0x42E094: mov     edi, ecx
0x42E096: lea     eax, [edi+1A8h]
0x42E09C: push    eax; lpAddend
0x42E09D: call    ds:InterlockedIncrement
0x42E0A3: mov     ecx, [esp+20h+arg_0]
0x42E0A7: mov     esi, [esp+20h+arg_4]
0x42E0AB: mov     edx, [edi+178h]
0x42E0B1: shl     ecx, 4
0x42E0B4: shl     esi, 4
0x42E0B7: xor     ebp, ebp
0x42E0B9: add     esi, [edx+ecx+0Ch]
0x42E0BD: jz      loc_42E180
0x42E0C3: mov     ebx, [esi+0Ch]
0x42E0C6: mov     cl, [edi+194h]
0x42E0CC: mov     eax, ebx
0x42E0CE: shr     eax, 1Fh
0x42E0D1: shr     cl, 3
0x42E0D4: xor     al, cl
0x42E0D6: test    al, 1
0x42E0D8: jnz     loc_42E180
0x42E0DE: and     ebx, 7FFFFFFFh
0x42E0E4: jz      loc_42E180
0x42E0EA: mov     edx, [edi+160h]
0x42E0F0: mov     eax, [esi+8]
0x42E0F3: shr     edx, 2
0x42E0F6: shr     eax, 1Eh
0x42E0F9: xor     dl, al
0x42E0FB: test    dl, 1
0x42E0FE: jnz     short loc_42E138
0x42E100: push    15Ch; Size
0x42E105: call    FormHeapAlloc
0x42E10A: add     esp, 4
0x42E10D: mov     [esp+20h+arg_0], eax
0x42E111: cmp     eax, ebp
0x42E113: mov     [esp+20h+var_4], ebp
0x42E117: jz      short loc_42E174
0x42E119: mov     esi, [esi+8]
0x42E11C: mov     ecx, [esp+20h+arg_8]
0x42E120: mov     edx, dword ptr [esp+20h+ArgList]
0x42E124: push    ecx
0x42E125: and     esi, 3FFFFFFFh
0x42E12B: push    esi
0x42E12C: push    ebx
0x42E12D: push    edi
0x42E12E: push    edx
0x42E12F: mov     ecx, eax; this
0x42E131: call    ??0ArchiveFile@@QAE@XZ; ArchiveFile::ArchiveFile(void)
0x42E136: jmp     short loc_42E176
0x42E138: push    174h; Size
0x42E13D: call    FormHeapAlloc
0x42E142: add     esp, 4
0x42E145: mov     [esp+20h+arg_0], eax
0x42E149: cmp     eax, ebp
0x42E14B: mov     [esp+20h+var_4], 1
0x42E153: jz      short loc_42E174
0x42E155: mov     esi, [esi+8]
0x42E158: mov     ecx, [esp+20h+arg_8]
0x42E15C: mov     edx, dword ptr [esp+20h+ArgList]
0x42E160: push    ecx; int
0x42E161: and     esi, 3FFFFFFFh
0x42E167: push    esi; int
0x42E168: push    ebx; int
0x42E169: push    edi; int
0x42E16A: push    edx; ArgList
0x42E16B: mov     ecx, eax; this
0x42E16D: call    ArchiveFileCompressed_constr
0x42E172: jmp     short loc_42E176
0x42E174: xor     eax, eax
0x42E176: mov     ebp, eax
0x42E178: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42E180: mov     ecx, edi
0x42E182: call    Arcghive_CheckDelete
0x42E187: mov     eax, ebp
0x42E189: mov     ecx, [esp+20h+var_C]
0x42E18D: mov     large fs:0, ecx
0x42E194: pop     ecx
0x42E195: pop     edi
0x42E196: pop     esi
0x42E197: pop     ebp
0x42E198: pop     ebx
0x42E199: add     esp, 0Ch
0x42E19C: retn    10h
