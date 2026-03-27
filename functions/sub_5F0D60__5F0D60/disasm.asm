0x5F0D60: sub     esp, 18h
0x5F0D63: push    ebx
0x5F0D64: push    esi
0x5F0D65: mov     esi, ecx
0x5F0D67: xor     bl, bl
0x5F0D69: cmp     esi, ds:0B333C4h
0x5F0D6F: jnz     short loc_5F0D79
0x5F0D71: pop     esi
0x5F0D72: xor     al, al
0x5F0D74: pop     ebx
0x5F0D75: add     esp, 18h
0x5F0D78: retn
0x5F0D79: cmp     byte ptr ds:0B14E90h, 0
0x5F0D80: push    edi
0x5F0D81: jz      loc_5F0ED0
0x5F0D87: mov     eax, [esi]
0x5F0D89: mov     edx, [eax+170h]
0x5F0D8F: push    ebp
0x5F0D90: xor     ebp, ebp
0x5F0D92: call    edx
0x5F0D94: mov     edi, eax
0x5F0D96: test    edi, edi
0x5F0D98: jz      short loc_5F0DAC
0x5F0D9A: mov     eax, [esi]
0x5F0D9C: mov     edx, [eax+190h]
0x5F0DA2: mov     ecx, esi
0x5F0DA4: call    edx
0x5F0DA6: test    al, al
0x5F0DA8: jz      short loc_5F0DAC
0x5F0DAA: mov     ebp, edi
0x5F0DAC: mov     ecx, esi; this
0x5F0DAE: call    TESObjectREFR_GetHealth
0x5F0DB3: fstp    [esp+28h+var_14]
0x5F0DB7: mov     ecx, ebp
0x5F0DB9: call    TESActorBase_GetHealth
0x5F0DBE: mov     [esp+28h+var_18], eax
0x5F0DC2: fild    [esp+28h+var_18]
0x5F0DC6: pop     ebp
0x5F0DC7: fcomp   [esp+24h+var_14]
0x5F0DCB: fnstsw  ax
0x5F0DCD: test    ah, 41h
0x5F0DD0: jnp     loc_5F0ED0
0x5F0DD6: mov     eax, [esi]
0x5F0DD8: mov     edx, [eax+198h]
0x5F0DDE: push    0
0x5F0DE0: mov     ecx, esi
0x5F0DE2: call    edx
0x5F0DE4: test    al, al
0x5F0DE6: jnz     loc_5F0EC7
0x5F0DEC: cmp     dword ptr [esi+58h], 0
0x5F0DF0: jz      loc_5F0EC7
0x5F0DF6: mov     ecx, [esi+58h]
0x5F0DF9: mov     eax, [ecx]
0x5F0DFB: mov     edx, [eax+8]
0x5F0DFE: call    edx
0x5F0E00: test    eax, eax
0x5F0E02: jnz     loc_5F0EC7
0x5F0E08: mov     eax, ds:0B333CCh
0x5F0E0D: mov     edx, [esi]
0x5F0E0F: mov     edi, [eax+0DCh]
0x5F0E15: mov     eax, [edx+154h]
0x5F0E1B: mov     ecx, esi
0x5F0E1D: call    eax
0x5F0E1F: push    eax
0x5F0E20: push    offset dword_B3FAB0
0x5F0E25: call    NiRTTI_Cast
0x5F0E2A: push    edi
0x5F0E2B: push    eax
0x5F0E2C: call    sub_47F7B0
0x5F0E31: add     esp, 10h
0x5F0E34: test    al, al
0x5F0E36: jz      loc_5F0EC7
0x5F0E3C: mov     ecx, ds:0B333C4h
0x5F0E42: push    0
0x5F0E44: push    ecx
0x5F0E45: mov     ecx, esi
0x5F0E47: call    TesObjectREF_GetDistance
0x5F0E4C: fcomp   dword ptr ds:0A6E748h
0x5F0E52: fnstsw  ax
0x5F0E54: test    ah, 41h
0x5F0E57: jp      short loc_5F0EC7
0x5F0E59: mov     ecx, ds:0B333C4h
0x5F0E5F: mov     edx, [ecx]
0x5F0E61: mov     eax, [edx+174h]
0x5F0E67: call    eax
0x5F0E69: mov     edx, [esi]
0x5F0E6B: push    eax
0x5F0E6C: mov     eax, [edx+174h]
0x5F0E72: lea     ecx, [esp+28h+var_C]
0x5F0E76: push    ecx
0x5F0E77: mov     ecx, esi
0x5F0E79: call    eax
0x5F0E7B: mov     ecx, eax
0x5F0E7D: call    sub_4121A0
0x5F0E82: lea     ecx, [esp+24h+var_C]
0x5F0E86: push    ecx
0x5F0E87: call    sub_683CB0
0x5F0E8C: fstp    [esp+28h+var_18]
0x5F0E90: fld     [esp+28h+var_18]
0x5F0E94: mov     eax, ds:0B333C4h
0x5F0E99: add     esp, 4
0x5F0E9C: lea     edx, [esp+24h+var_14]
0x5F0EA0: push    edx; int
0x5F0EA1: push    ecx
0x5F0EA2: fstp    [esp+2Ch+var_2C]; float
0x5F0EA5: push    eax; int
0x5F0EA6: call    sub_683D80
0x5F0EAB: fabs
0x5F0EAD: fstp    [esp+30h+var_18]
0x5F0EB1: add     esp, 0Ch
0x5F0EB4: fld     [esp+24h+var_18]
0x5F0EB8: fcomp   qword ptr ds:0A6E740h
0x5F0EBE: fnstsw  ax
0x5F0EC0: test    ah, 5
0x5F0EC3: jp      short loc_5F0EC7
0x5F0EC5: mov     bl, 1
0x5F0EC7: pop     edi
0x5F0EC8: pop     esi
0x5F0EC9: mov     al, bl
0x5F0ECB: pop     ebx
0x5F0ECC: add     esp, 18h
0x5F0ECF: retn
0x5F0ED0: pop     edi
0x5F0ED1: pop     esi
0x5F0ED2: xor     al, al
0x5F0ED4: pop     ebx
0x5F0ED5: add     esp, 18h
0x5F0ED8: retn
