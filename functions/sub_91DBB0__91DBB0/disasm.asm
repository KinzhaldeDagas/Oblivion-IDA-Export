0x91DBB0: push    ebp
0x91DBB1: mov     ebp, esp
0x91DBB3: and     esp, 0FFFFFFF0h
0x91DBB6: sub     esp, 1Ch
0x91DBB9: mov     edx, [ebp+arg_0]
0x91DBBC: mov     eax, [edx+10h]
0x91DBBF: movaps  xmm0, xmmword ptr [eax+10h]
0x91DBC3: movaps  xmm1, xmmword ptr [eax]
0x91DBC6: mov     ecx, [ecx-10h]
0x91DBC9: mov     edx, [edx+10h]
0x91DBCC: push    esi
0x91DBCD: mov     esi, ds:0BA8458h
0x91DBD3: push    esi
0x91DBD4: push    0FFFF0000h
0x91DBD9: lea     esi, [esp+28h+var_10]
0x91DBDD: addps   xmm1, xmm0
0x91DBE0: push    esi
0x91DBE1: movaps  [esp+2Ch+var_10], xmm1
0x91DBE6: mov     eax, [ecx]
0x91DBE8: push    edx
0x91DBE9: call    dword ptr [eax+1Ch]
0x91DBEC: pop     esi
0x91DBED: mov     esp, ebp
0x91DBEF: pop     ebp
0x91DBF0: retn    4
