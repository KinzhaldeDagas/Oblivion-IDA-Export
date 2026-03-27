0x8A5A20: push    ebp
0x8A5A21: mov     ebp, esp
0x8A5A23: and     esp, 0FFFFFFF0h
0x8A5A26: push    0FFFFFFFFh
0x8A5A28: push    offset SEH_8A5A20
0x8A5A2D: mov     eax, large fs:0
0x8A5A33: push    eax
0x8A5A34: sub     esp, 2F8h
0x8A5A3A: mov     eax, ds:0B30AACh
0x8A5A3F: xor     eax, esp
0x8A5A41: mov     [esp+304h+var_14], eax
0x8A5A48: push    ebx
0x8A5A49: push    esi
0x8A5A4A: push    edi
0x8A5A4B: mov     eax, ds:0B30AACh
0x8A5A50: xor     eax, esp
0x8A5A52: push    eax
0x8A5A53: lea     eax, [esp+314h+var_C]
0x8A5A5A: mov     large fs:0, eax
0x8A5A60: mov     edi, [ebp+arg_0]
0x8A5A63: mov     esi, ecx
0x8A5A65: mov     eax, [esi]
0x8A5A67: mov     edx, [eax+68h]
0x8A5A6A: call    edx
0x8A5A6C: mov     [esp+314h+var_2F4], eax
0x8A5A70: mov     eax, [esi]
0x8A5A72: mov     edx, [eax+74h]
0x8A5A75: lea     ecx, [esp+314h+var_2F5]
0x8A5A79: push    ecx
0x8A5A7A: mov     ecx, esi
0x8A5A7C: call    edx
0x8A5A7E: cmp     dword ptr [edi+4], 6
0x8A5A82: mov     ebx, eax
0x8A5A84: jnb     loc_8A5BCF
0x8A5A8A: lea     ecx, [esp+314h+var_2E0]
0x8A5A8E: call    sub_8A4FF0
0x8A5A93: mov     eax, [edi+21Ch]
0x8A5A99: mov     edx, [eax+4]
0x8A5A9C: push    0
0x8A5A9E: push    0
0x8A5AA0: push    0C0h ; 'À'
0x8A5AA5: lea     ecx, [esp+320h+var_2E0]
0x8A5AA9: push    ecx
0x8A5AAA: push    eax
0x8A5AAB: mov     [esp+328h+var_4], 0
0x8A5AB6: call    edx
0x8A5AB8: add     esp, 14h
0x8A5ABB: test    ebx, ebx
0x8A5ABD: jz      short loc_8A5ADA
0x8A5ABF: lea     eax, [esp+314h+var_2E0]
0x8A5AC3: push    eax
0x8A5AC4: mov     ecx, ebx
0x8A5AC6: call    sub_8A3270
0x8A5ACB: mov     ecx, [ebx+20h]
0x8A5ACE: mov     edx, [ebx+24h]
0x8A5AD1: mov     [ebx], ecx
0x8A5AD3: mov     [ebx+4], edx
0x8A5AD6: mov     byte ptr [ebx+8], 1
0x8A5ADA: lea     esi, [edi+0E0h]
0x8A5AE0: add     edi, 8
0x8A5AE3: cmp     byte ptr [edi], 0
0x8A5AE6: jnz     short loc_8A5AED
0x8A5AE8: mov     edi, offset aPlease; "Please"
0x8A5AED: push    ecx
0x8A5AEE: mov     eax, esp
0x8A5AF0: mov     [esp+318h+var_2F0], esp
0x8A5AF4: mov     byte ptr [eax], 1
0x8A5AF7: push    200h
0x8A5AFC: lea     eax, [esp+31Ch+var_218]
0x8A5B03: push    eax
0x8A5B04: lea     ecx, [esp+320h+var_2EC]
0x8A5B08: call    sub_8BBFB0
0x8A5B0D: push    offset aReExport; " re-export\n"
0x8A5B12: push    edi
0x8A5B13: push    offset aContainsAnOldB; " contains an old bhkRigidBody! "
0x8A5B18: push    esi
0x8A5B19: push    offset aFile; "File "
0x8A5B1E: lea     ecx, [esp+328h+var_2EC]
0x8A5B22: mov     byte ptr [esp+328h+var_4], 1
0x8A5B2A: call    sub_8BBDB0
0x8A5B2F: mov     ecx, eax
0x8A5B31: call    sub_8BBDB0
0x8A5B36: mov     ecx, eax
0x8A5B38: call    sub_8BBDB0
0x8A5B3D: mov     ecx, eax
0x8A5B3F: call    sub_8BBDB0
0x8A5B44: mov     ecx, eax
0x8A5B46: call    sub_8BBDB0
0x8A5B4B: mov     ecx, ds:0BA7FB0h
0x8A5B51: mov     edx, [ecx]
0x8A5B53: mov     edx, [edx+8]
0x8A5B56: push    21Ah
0x8A5B5B: push    offset a_Bhkrigidbody_; ".\\bhkRigidBody.cpp"
0x8A5B60: lea     eax, [esp+31Ch+var_218]
0x8A5B67: push    eax
0x8A5B68: push    234F2250h
0x8A5B6D: push    1
0x8A5B6F: call    edx
0x8A5B71: lea     ecx, [esp+314h+var_2EC]
0x8A5B75: mov     byte ptr [esp+314h+var_4], 0
0x8A5B7D: call    sub_8BC000
0x8A5B82: mov     eax, [esp+314h+var_2CC]
0x8A5B86: test    eax, eax
0x8A5B88: mov     [esp+314h+var_4], 0FFFFFFFFh
0x8A5B93: js      short loc_8A5BD7
0x8A5B95: mov     ecx, ds:0BA9DE4h
0x8A5B9B: mov     edx, large fs:2Ch
0x8A5BA2: mov     ecx, [edx+ecx*4]
0x8A5BA5: mov     ecx, [ecx+19Ch]
0x8A5BAB: test    ecx, ecx
0x8A5BAD: jnz     short loc_8A5BB5
0x8A5BAF: mov     ecx, ds:0BA7D9Ch
0x8A5BB5: mov     edx, [esp+314h+var_2D4]
0x8A5BB9: and     eax, 3FFFFFFFh
0x8A5BBE: add     eax, eax
0x8A5BC0: add     eax, eax
0x8A5BC2: push    14h
0x8A5BC4: add     eax, eax
0x8A5BC6: push    eax
0x8A5BC7: push    edx
0x8A5BC8: call    sub_8A75D0
0x8A5BCD: jmp     short loc_8A5BD7
0x8A5BCF: push    edi
0x8A5BD0: mov     ecx, esi
0x8A5BD2: call    sub_89D670
0x8A5BD7: mov     eax, [esp+314h+var_2F4]
0x8A5BDB: mov     ecx, dword ptr [esp+314h+var_C]
0x8A5BE2: mov     large fs:0, ecx
0x8A5BE9: pop     ecx
0x8A5BEA: pop     edi
0x8A5BEB: pop     esi
0x8A5BEC: pop     ebx
0x8A5BED: mov     ecx, [esp+304h+var_14]
0x8A5BF4: xor     ecx, esp
0x8A5BF6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A5BFB: mov     esp, ebp
0x8A5BFD: pop     ebp
0x8A5BFE: retn    4
