0x537D40: push    ecx
0x537D41: push    ebx
0x537D42: push    ebp
0x537D43: push    esi
0x537D44: push    edi
0x537D45: call    sub_537CC0
0x537D4A: fld     dword ptr ds:0A3B888h
0x537D50: mov     edi, eax
0x537D52: mov     ebp, [edi+20h]
0x537D55: fstp    dword ptr [edi+1Ch]
0x537D58: xor     ebx, ebx
0x537D5A: test    ebp, ebp
0x537D5C: jle     loc_537DEA
0x537D62: xor     esi, esi
0x537D64: test    ebp, ebp
0x537D66: jle     short loc_537DDF
0x537D68: jmp     short loc_537D70
0x537D6A: align 10h
0x537D70: mov     eax, ds:0B333A0h
0x537D75: fld     dword ptr ds:0A3B888h
0x537D7B: mov     ecx, [eax+8]
0x537D7E: fstp    [esp+14h+var_4]
0x537D82: push    esi
0x537D83: push    ebx
0x537D84: call    GetGridEntry
0x537D89: mov     ecx, [eax]
0x537D8B: test    ecx, ecx
0x537D8D: jz      short loc_537DA3
0x537D8F: movzx   edx, byte ptr [ecx+24h]
0x537D93: shr     edx, 1
0x537D95: test    dl, 1
0x537D98: jz      short loc_537DA3
0x537D9A: call    TESObjectCELL_GetWaterHeight
0x537D9F: fstp    [esp+14h+var_4]
0x537DA3: mov     eax, [edi+20h]
0x537DA6: fld     [esp+14h+var_4]
0x537DAA: fld     qword ptr ds:0A39088h
0x537DB0: mov     ecx, [edi+18h]
0x537DB3: imul    eax, esi
0x537DB6: fmul    st, st(1)
0x537DB8: fstp    [esp+14h+var_4]
0x537DBC: fld     [esp+14h+var_4]
0x537DC0: add     eax, ebx
0x537DC2: fstp    dword ptr [ecx+eax*4]
0x537DC5: fld     dword ptr [edi+1Ch]
0x537DC8: fcomp   st(1)
0x537DCA: fnstsw  ax
0x537DCC: test    ah, 5
0x537DCF: jp      short loc_537DD6
0x537DD1: fstp    dword ptr [edi+1Ch]
0x537DD4: jmp     short loc_537DD8
0x537DD6: fstp    st
0x537DD8: add     esi, 1
0x537DDB: cmp     esi, ebp
0x537DDD: jl      short loc_537D70
0x537DDF: add     ebx, 1
0x537DE2: cmp     ebx, ebp
0x537DE4: jl      loc_537D62
0x537DEA: mov     edx, ds:0B333A0h
0x537DF0: mov     ecx, [edx+8]
0x537DF3: push    0
0x537DF5: push    0
0x537DF7: call    GetGridEntry
0x537DFC: mov     esi, [eax]
0x537DFE: test    esi, esi
0x537E00: jz      short loc_537E16
0x537E02: mov     ecx, esi; this
0x537E04: call    TESObjectCELL_GetXCoordinate
0x537E09: mov     ecx, esi; this
0x537E0B: mov     [edi+24h], eax
0x537E0E: call    TESObjectCELL_GetYCoordinate
0x537E13: mov     [edi+28h], eax
0x537E16: fld     dword ptr [edi+1Ch]
0x537E19: fcomp   qword ptr ds:0A40398h
0x537E1F: fnstsw  ax
0x537E21: test    ah, 44h
0x537E24: jnp     short loc_537E31
0x537E26: mov     al, 1
0x537E28: mov     [edi+8], al
0x537E2B: pop     edi
0x537E2C: pop     esi
0x537E2D: pop     ebp
0x537E2E: pop     ebx
0x537E2F: pop     ecx
0x537E30: retn
0x537E31: xor     al, al
0x537E33: mov     [edi+8], al
0x537E36: pop     edi
0x537E37: pop     esi
0x537E38: pop     ebp
0x537E39: pop     ebx
0x537E3A: pop     ecx
0x537E3B: retn
