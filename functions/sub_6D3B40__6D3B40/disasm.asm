0x6D3B40: mov     edx, [esp+arg_0]
0x6D3B44: movzx   eax, byte ptr [edx+8]
0x6D3B48: and     eax, 1
0x6D3B4B: push    esi
0x6D3B4C: mov     esi, eax
0x6D3B4E: mov     eax, [esp+4+arg_4]
0x6D3B52: movzx   ecx, word ptr [eax+8]
0x6D3B56: and     cx, 0FFFEh
0x6D3B5B: or      cx, si
0x6D3B5E: test    esi, esi
0x6D3B60: mov     [eax+8], cx
0x6D3B64: jnz     short loc_6D3B6B
0x6D3B66: or      ecx, 8
0x6D3B69: jmp     short loc_6D3B71
0x6D3B6B: and     ecx, 0FFF7h
0x6D3B71: mov     [eax+8], cx
0x6D3B75: movzx   ecx, cl
0x6D3B78: xor     cl, [edx+8]
0x6D3B7B: and     ecx, 6
0x6D3B7E: xor     [eax+8], cx
0x6D3B82: movzx   ecx, byte ptr [edx+8]
0x6D3B86: movzx   esi, word ptr [eax+8]
0x6D3B8A: shr     cl, 4
0x6D3B8D: test    cl, 1
0x6D3B90: jz      short loc_6D3B97
0x6D3B92: or      esi, 10h
0x6D3B95: jmp     short loc_6D3B9D
0x6D3B97: and     esi, 0FFEFh
0x6D3B9D: mov     [eax+8], si
0x6D3BA1: fld     dword ptr [edx+0Ch]
0x6D3BA4: fstp    dword ptr [eax+0Ch]
0x6D3BA7: pop     esi
0x6D3BA8: fld     dword ptr [edx+14h]
0x6D3BAB: fstp    dword ptr [eax+14h]
0x6D3BAE: fld     dword ptr [edx+18h]
0x6D3BB1: fstp    dword ptr [eax+18h]
0x6D3BB4: mov     dl, [edx+8]
0x6D3BB7: shr     dl, 3
0x6D3BBA: test    dl, 1
0x6D3BBD: jz      short loc_6D3BC5
0x6D3BBF: or      word ptr [eax+8], 8
0x6D3BC4: retn
0x6D3BC5: and     word ptr [eax+8], 0FFF7h
0x6D3BCB: retn
