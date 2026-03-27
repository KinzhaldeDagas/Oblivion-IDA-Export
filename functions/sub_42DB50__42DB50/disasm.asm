0x42DB50: push    0FFFFFFFFh
0x42DB52: push    offset SEH_49E280
0x42DB57: mov     eax, large fs:0
0x42DB5D: push    eax
0x42DB5E: sub     esp, 1Ch
0x42DB61: push    ebx
0x42DB62: push    ebp
0x42DB63: push    esi
0x42DB64: push    edi
0x42DB65: mov     eax, ___security_cookie
0x42DB6A: xor     eax, esp
0x42DB6C: push    eax
0x42DB6D: lea     eax, [esp+3Ch+var_C]
0x42DB71: mov     large fs:0, eax
0x42DB77: mov     edi, [esp+3Ch+arg_0]
0x42DB7B: lea     esi, [edi+200h]
0x42DB81: push    offset aArchivemanager; lpCriticalSection
0x42DB86: mov     ecx, esi
0x42DB88: mov     [esp+40h+var_18], esi
0x42DB8C: call    NiEnterCriticalSection
0x42DB91: mov     ecx, [esp+3Ch+arg_C]
0x42DB95: push    0
0x42DB97: lea     eax, [esp+40h+var_20]
0x42DB9B: push    eax
0x42DB9C: push    ecx
0x42DB9D: mov     ecx, edi
0x42DB9F: call    Archive_ContainsFolder
0x42DBA4: test    al, al
0x42DBA6: jz      loc_42DDCB
0x42DBAC: cmp     [esp+3Ch+arg_8], 0
0x42DBB1: jnz     loc_42DC44
0x42DBB7: mov     ebp, [esp+3Ch+arg_4]
0x42DBBB: test    ebp, ebp
0x42DBBD: jbe     loc_42DC44
0x42DBC3: xor     ecx, ecx
0x42DBC5: mov     eax, ebp
0x42DBC7: mov     edx, 4
0x42DBCC: mul     edx
0x42DBCE: seto    cl
0x42DBD1: neg     ecx
0x42DBD3: or      ecx, eax
0x42DBD5: push    ecx; Size
0x42DBD6: call    FormHeapAlloc
0x42DBDB: mov     esi, [esp+40h+arg_14]
0x42DBDF: add     esp, 4
0x42DBE2: mov     ebx, eax
0x42DBE4: xor     edi, edi
0x42DBE6: test    ebp, ebp
0x42DBE8: mov     [esp+3Ch+arg_8], ebx
0x42DBEC: jbe     short loc_42DC35
0x42DBEE: mov     edi, edi
0x42DBF0: mov     ebp, [esi]
0x42DBF2: push    8; Size
0x42DBF4: call    FormHeapAlloc
0x42DBF9: add     esp, 4
0x42DBFC: mov     [esp+3Ch+var_1C], eax
0x42DC00: test    eax, eax
0x42DC02: mov     [esp+3Ch+var_4], 0
0x42DC0A: jz      short loc_42DC18
0x42DC0C: push    0; int
0x42DC0E: push    ebp; FullPath
0x42DC0F: mov     ecx, eax
0x42DC11: call    BSHash_constr
0x42DC16: jmp     short loc_42DC1A
0x42DC18: xor     eax, eax
0x42DC1A: mov     [ebx+edi*4], eax
0x42DC1D: mov     esi, [esi+4]
0x42DC20: add     edi, 1
0x42DC23: cmp     edi, [esp+3Ch+arg_4]
0x42DC27: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x42DC2F: jb      short loc_42DBF0
0x42DC31: mov     ebp, [esp+3Ch+arg_4]
0x42DC35: add     ebp, 0FFFFFFFFh
0x42DC38: push    ebp
0x42DC39: push    0
0x42DC3B: push    ebx
0x42DC3C: call    sub_42BFB0
0x42DC41: add     esp, 0Ch
0x42DC44: mov     ebp, [esp+3Ch+var_20]
0x42DC48: mov     eax, [esp+3Ch+arg_0]
0x42DC4C: shl     ebp, 4
0x42DC4F: add     ebp, [eax+178h]
0x42DC55: xor     eax, eax
0x42DC57: cmp     [ebp+8], eax
0x42DC5A: mov     [esp+3Ch+var_1C], ebp
0x42DC5E: mov     [esp+3Ch+var_28], eax
0x42DC62: jbe     loc_42DDC7
0x42DC68: mov     [esp+3Ch+var_24], eax
0x42DC6C: mov     esi, [ebp+0Ch]
0x42DC6F: add     esi, [esp+3Ch+var_24]
0x42DC73: mov     edx, [esp+3Ch+arg_0]
0x42DC77: mov     eax, [esi+0Ch]
0x42DC7A: mov     dl, [edx+194h]
0x42DC80: mov     ecx, eax
0x42DC82: shr     ecx, 1Fh
0x42DC85: shr     dl, 3
0x42DC88: xor     cl, dl
0x42DC8A: test    cl, 1
0x42DC8D: jnz     loc_42DDAE
0x42DC93: test    eax, 7FFFFFFFh
0x42DC98: jz      loc_42DDAE
0x42DC9E: mov     ecx, [esp+3Ch+arg_10]
0x42DCA2: push    esi
0x42DCA3: call    sub_42BC50
0x42DCA8: test    eax, eax
0x42DCAA: jnz     loc_42DDA6
0x42DCB0: mov     ebx, [esp+3Ch+arg_4]
0x42DCB4: test    ebx, ebx
0x42DCB6: jz      short loc_42DD0E
0x42DCB8: mov     eax, [esi]
0x42DCBA: mov     ecx, [esi+4]
0x42DCBD: xor     edx, edx
0x42DCBF: mov     dword ptr [esp+3Ch+var_14], eax
0x42DCC3: mov     dword ptr [esp+3Ch+var_14+4], ecx
0x42DCC7: mov     ecx, [esp+3Ch+arg_8]
0x42DCCB: mov     eax, ebx
0x42DCCD: sub     eax, edx
0x42DCCF: shr     eax, 1
0x42DCD1: lea     edi, [eax+edx]
0x42DCD4: mov     ecx, [ecx+edi*4]
0x42DCD7: mov     ebp, [ecx]
0x42DCD9: mov     ecx, [ecx+4]
0x42DCDC: cmp     dword ptr [esp+3Ch+var_14+4], ecx
0x42DCE0: jb      short loc_42DD04
0x42DCE2: ja      short loc_42DCEA
0x42DCE4: cmp     dword ptr [esp+3Ch+var_14], ebp
0x42DCE8: jb      short loc_42DD04
0x42DCEA: cmp     dword ptr [esp+3Ch+var_14+4], ecx
0x42DCEE: jb      loc_42DDAA
0x42DCF4: ja      short loc_42DD00
0x42DCF6: cmp     dword ptr [esp+3Ch+var_14], ebp
0x42DCFA: jbe     loc_42DDAA
0x42DD00: mov     edx, edi
0x42DD02: jmp     short loc_42DD06
0x42DD04: mov     ebx, edi
0x42DD06: test    eax, eax
0x42DD08: jnz     short loc_42DCC7
0x42DD0A: mov     ebp, [esp+3Ch+var_1C]
0x42DD0E: mov     edx, [esp+3Ch+var_28]
0x42DD12: mov     eax, [esp+3Ch+var_20]
0x42DD16: mov     ecx, [esp+3Ch+arg_0]
0x42DD1A: push    edx
0x42DD1B: push    eax
0x42DD1C: call    sub_42CC00
0x42DD21: mov     edi, [esp+3Ch+arg_18]
0x42DD25: mov     ebx, eax
0x42DD27: mov     eax, edi
0x42DD29: lea     edx, [eax+1]
0x42DD2C: lea     esp, [esp+0]
0x42DD30: mov     cl, [eax]
0x42DD32: add     eax, 1
0x42DD35: test    cl, cl
0x42DD37: jnz     short loc_42DD30
0x42DD39: sub     eax, edx
0x42DD3B: mov     edx, eax
0x42DD3D: mov     eax, ebx
0x42DD3F: lea     esi, [eax+1]
0x42DD42: mov     cl, [eax]
0x42DD44: add     eax, 1
0x42DD47: test    cl, cl
0x42DD49: jnz     short loc_42DD42
0x42DD4B: sub     eax, esi
0x42DD4D: lea     ecx, [eax+edx+1]
0x42DD51: push    ecx; Size
0x42DD52: call    FormHeapAlloc
0x42DD57: mov     esi, eax
0x42DD59: add     esp, 4
0x42DD5C: mov     ecx, edi
0x42DD5E: sub     esi, edi
0x42DD60: mov     dl, [ecx]
0x42DD62: mov     [esi+ecx], dl
0x42DD65: add     ecx, 1
0x42DD68: test    dl, dl
0x42DD6A: jnz     short loc_42DD60
0x42DD6C: mov     ecx, ebx
0x42DD6E: mov     esi, ebx
0x42DD70: mov     dl, [ecx]
0x42DD72: add     ecx, 1
0x42DD75: test    dl, dl
0x42DD77: jnz     short loc_42DD70
0x42DD79: sub     ecx, esi
0x42DD7B: mov     edi, eax
0x42DD7D: mov     edx, ecx
0x42DD7F: add     edi, 0FFFFFFFFh
0x42DD82: mov     cl, [edi+1]
0x42DD85: add     edi, 1
0x42DD88: test    cl, cl
0x42DD8A: jnz     short loc_42DD82
0x42DD8C: mov     ecx, edx
0x42DD8E: shr     ecx, 2
0x42DD91: rep movsd
0x42DD93: mov     ecx, edx
0x42DD95: and     ecx, 3
0x42DD98: rep movsb
0x42DD9A: mov     ecx, [esp+3Ch+arg_14]
0x42DD9E: push    eax
0x42DD9F: call    BSSimpleList_PushFront
0x42DDA4: jmp     short loc_42DDAE
0x42DDA6: jl      short loc_42DDC7
0x42DDA8: jmp     short loc_42DDAE
0x42DDAA: mov     ebp, [esp+3Ch+var_1C]
0x42DDAE: mov     eax, [esp+3Ch+var_28]
0x42DDB2: add     [esp+3Ch+var_24], 10h
0x42DDB7: add     eax, 1
0x42DDBA: cmp     eax, [ebp+8]
0x42DDBD: mov     [esp+3Ch+var_28], eax
0x42DDC1: jb      loc_42DC6C
0x42DDC7: mov     esi, [esp+3Ch+var_18]
0x42DDCB: mov     ecx, esi; lpCriticalSection
0x42DDCD: call    NiLeaveCriticalSection_0
0x42DDD2: mov     eax, [esp+3Ch+arg_8]
0x42DDD6: mov     ecx, dword ptr [esp+3Ch+var_C]
0x42DDDA: mov     large fs:0, ecx
0x42DDE1: pop     ecx
0x42DDE2: pop     edi
0x42DDE3: pop     esi
0x42DDE4: pop     ebp
0x42DDE5: pop     ebx
0x42DDE6: add     esp, 28h
0x42DDE9: retn
