0x52FC40: push    0FFFFFFFFh
0x52FC42: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x52FC47: mov     eax, large fs:0
0x52FC4D: push    eax
0x52FC4E: push    ecx
0x52FC4F: push    ebx
0x52FC50: push    ebp
0x52FC51: push    esi
0x52FC52: push    edi
0x52FC53: mov     eax, ds:0B30AACh
0x52FC58: xor     eax, esp
0x52FC5A: push    eax
0x52FC5B: lea     eax, [esp+24h+var_C]
0x52FC5F: mov     large fs:0, eax
0x52FC65: mov     edi, [esp+24h+arg_0]
0x52FC69: xor     ebx, ebx
0x52FC6B: cmp     edi, ebx
0x52FC6D: jnz     short loc_52FC76
0x52FC6F: xor     eax, eax
0x52FC71: jmp     loc_52FD09
0x52FC76: lea     ebp, [ecx+28h]
0x52FC79: mov     ecx, ebp
0x52FC7B: xor     esi, esi
0x52FC7D: cmp     ecx, ebx
0x52FC7F: jz      short loc_52FCBF
0x52FC81: mov     eax, [ecx]
0x52FC83: cmp     eax, ebx
0x52FC85: jz      short loc_52FCBB
0x52FC87: cmp     esi, ebx
0x52FC89: jnz     short loc_52FD07
0x52FC8B: mov     ecx, [ecx+4]
0x52FC8E: mov     esi, eax
0x52FC90: cmp     [esi+20h], bl
0x52FC93: jz      short loc_52FCAC
0x52FC95: mov     eax, [esi]
0x52FC97: cmp     eax, ebx
0x52FC99: jz      short loc_52FCA0
0x52FC9B: cmp     [eax+0Ch], edi
0x52FC9E: jz      short loc_52FCB7
0x52FCA0: mov     eax, [esi+1Ch]
0x52FCA3: cmp     eax, ebx
0x52FCA5: jz      short loc_52FCB5
0x52FCA7: cmp     [eax+0Ch], edi
0x52FCAA: jmp     short loc_52FCB3
0x52FCAC: cmp     [esi], edi
0x52FCAE: jz      short loc_52FCB7
0x52FCB0: cmp     [esi+1Ch], edi
0x52FCB3: jz      short loc_52FCB7
0x52FCB5: xor     esi, esi
0x52FCB7: cmp     ecx, ebx
0x52FCB9: jnz     short loc_52FC81
0x52FCBB: cmp     esi, ebx
0x52FCBD: jnz     short loc_52FD07
0x52FCBF: push    24h ; '$'; Size
0x52FCC1: call    FormHeapAlloc
0x52FCC6: add     esp, 4
0x52FCC9: cmp     eax, ebx
0x52FCCB: jz      short loc_52FCF1
0x52FCCD: mov     [eax+0Ch], ebx
0x52FCD0: mov     dword ptr [eax+18h], 1
0x52FCD7: mov     [eax+10h], ebx
0x52FCDA: mov     [eax+14h], ebx
0x52FCDD: mov     [eax+8], ebx
0x52FCE0: mov     dword ptr [eax+4], offset ??_7TopicInfoArray@@6B@; const TopicInfoArray::`vftable'
0x52FCE7: mov     [eax], ebx
0x52FCE9: mov     [eax+1Ch], ebx
0x52FCEC: mov     [eax+20h], bl
0x52FCEF: jmp     short loc_52FCF3
0x52FCF1: xor     eax, eax
0x52FCF3: push    eax
0x52FCF4: mov     ecx, ebp
0x52FCF6: mov     [esp+28h+var_4], 0FFFFFFFFh
0x52FCFE: mov     esi, eax
0x52FD00: mov     [eax], edi
0x52FD02: call    BSSimpleList_PushBack
0x52FD07: mov     eax, esi
0x52FD09: mov     ecx, [esp+24h+var_C]
0x52FD0D: mov     large fs:0, ecx
0x52FD14: pop     ecx
0x52FD15: pop     edi
0x52FD16: pop     esi
0x52FD17: pop     ebp
0x52FD18: pop     ebx
0x52FD19: add     esp, 10h
0x52FD1C: retn    8
