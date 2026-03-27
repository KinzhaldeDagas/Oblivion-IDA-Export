0x706C20: push    0FFFFFFFFh
0x706C22: push    offset SEH_8C8970
0x706C27: mov     eax, large fs:0
0x706C2D: push    eax
0x706C2E: push    ecx
0x706C2F: push    esi
0x706C30: push    edi
0x706C31: mov     eax, ds:0B30AACh
0x706C36: xor     eax, esp
0x706C38: push    eax
0x706C39: lea     eax, [esp+1Ch+var_C]
0x706C3D: mov     large fs:0, eax
0x706C43: mov     edi, ecx
0x706C45: push    1Ch; Size
0x706C47: call    FormHeapAlloc
0x706C4C: mov     esi, eax
0x706C4E: add     esp, 4
0x706C51: mov     [esp+1Ch+var_10], esi
0x706C55: test    esi, esi
0x706C57: mov     [esp+1Ch+var_4], 0
0x706C5F: jz      short loc_706C76
0x706C61: mov     ecx, esi; this
0x706C63: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706C68: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x706C6E: mov     word ptr [esi+18h], 0Fh
0x706C74: jmp     short loc_706C78
0x706C76: xor     esi, esi
0x706C78: mov     eax, [esp+1Ch+arg_0]
0x706C7C: push    eax
0x706C7D: push    esi
0x706C7E: mov     ecx, edi
0x706C80: mov     [esp+24h+var_4], 0FFFFFFFFh
0x706C88: call    sub_700A60
0x706C8D: mov     cx, [edi+18h]
0x706C91: mov     [esi+18h], cx
0x706C95: mov     eax, esi
0x706C97: mov     ecx, [esp+1Ch+var_C]
0x706C9B: mov     large fs:0, ecx
0x706CA2: pop     ecx
0x706CA3: pop     edi
0x706CA4: pop     esi
0x706CA5: add     esp, 10h
0x706CA8: retn    4
