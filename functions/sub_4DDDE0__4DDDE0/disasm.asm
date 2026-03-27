0x4DDDE0: sub     esp, 20h
0x4DDDE3: push    esi
0x4DDDE4: mov     esi, ecx
0x4DDDE6: mov     eax, [esi]
0x4DDDE8: mov     edx, [eax+44h]
0x4DDDEB: push    edi; int
0x4DDDEC: push    offset loc_800000
0x4DDDF1: call    edx
0x4DDDF3: lea     ecx, [esi+44h]
0x4DDDF6: call    sub_420190
0x4DDDFB: mov     edi, eax
0x4DDDFD: test    edi, edi
0x4DDDFF: jz      loc_4DDF7C
0x4DDE05: cmp     dword ptr [edi+18h], 0
0x4DDE09: jz      loc_4DDF7C
0x4DDE0F: mov     eax, [esi]
0x4DDE11: mov     edx, [eax+190h]
0x4DDE17: push    ebp
0x4DDE18: mov     ecx, esi
0x4DDE1A: xor     ebp, ebp
0x4DDE1C: call    edx
0x4DDE1E: test    al, al
0x4DDE20: jz      short loc_4DDE31
0x4DDE22: cmp     dword ptr [esi+58h], 0
0x4DDE26: mov     ebp, esi
0x4DDE28: jz      short loc_4DDE31
0x4DDE2A: mov     ecx, esi; int
0x4DDE2C: call    sub_5EAE70
0x4DDE31: mov     ecx, [edi+18h]
0x4DDE34: mov     eax, [ecx]
0x4DDE36: mov     edx, [eax+174h]
0x4DDE3C: push    ebx
0x4DDE3D: call    edx
0x4DDE3F: fld     dword ptr [eax+4]
0x4DDE42: fsub    dword ptr [edi+10h]
0x4DDE45: fstp    [esp+2Ch+var_1C]
0x4DDE49: fld     dword ptr [eax+8]
0x4DDE4C: fsub    dword ptr [edi+14h]
0x4DDE4F: fstp    [esp+2Ch+var_18]
0x4DDE53: fld     dword ptr [eax]
0x4DDE55: lea     eax, [esp+2Ch+var_8]
0x4DDE59: fsub    dword ptr [edi+0Ch]
0x4DDE5C: push    eax
0x4DDE5D: fstp    [esp+30h+var_8]
0x4DDE61: fld     [esp+30h+var_1C]
0x4DDE65: fstp    [esp+30h+var_4]
0x4DDE69: fld     [esp+30h+var_18]
0x4DDE6D: fstp    dword ptr [esp+30h]
0x4DDE71: fldz
0x4DDE73: fst     [esp+30h+var_14]
0x4DDE77: fstp    [esp+30h+var_10]
0x4DDE7B: call    sub_683CB0
0x4DDE80: fstp    [esp+30h+var_C]
0x4DDE84: mov     ecx, [esp+30h+var_14]
0x4DDE88: mov     edx, [esp+30h+var_10]
0x4DDE8C: mov     eax, [esp+30h+var_C]
0x4DDE90: mov     [esi+20h], ecx
0x4DDE93: mov     [esi+24h], edx
0x4DDE96: mov     edx, [esi]
0x4DDE98: add     esp, 4
0x4DDE9B: mov     [esi+28h], eax
0x4DDE9E: mov     eax, [edx+40h]
0x4DDEA1: push    4
0x4DDEA3: mov     ecx, esi
0x4DDEA5: call    eax
0x4DDEA7: mov     eax, [edi+0Ch]
0x4DDEAA: mov     ecx, [edi+10h]
0x4DDEAD: mov     edx, [edi+14h]
0x4DDEB0: mov     [esi+2Ch], eax
0x4DDEB3: mov     [esi+30h], ecx
0x4DDEB6: mov     [esi+34h], edx
0x4DDEB9: mov     edx, [esi]
0x4DDEBB: mov     eax, [edx+40h]
0x4DDEBE: push    4
0x4DDEC0: mov     ecx, esi
0x4DDEC2: call    eax
0x4DDEC4: mov     ecx, [edi+18h]
0x4DDEC7: mov     eax, [ecx+40h]
0x4DDECA: xor     ebx, ebx
0x4DDECC: test    eax, eax
0x4DDECE: jnz     short loc_4DDEDE
0x4DDED0: mov     edx, [ecx+18h]
0x4DDED3: mov     eax, [edx]
0x4DDED5: add     ecx, 18h
0x4DDED8: call    eax
0x4DDEDA: test    eax, eax
0x4DDEDC: jz      short loc_4DDEE7
0x4DDEDE: mov     ecx, eax; this
0x4DDEE0: call    TESObjectCELL_GetWorldSpace
0x4DDEE5: mov     ebx, eax
0x4DDEE7: mov     ecx, [edi+18h]
0x4DDEEA: mov     edi, [ecx+40h]
0x4DDEED: test    edi, edi
0x4DDEEF: jz      short loc_4DDEFE
0x4DDEF1: mov     ecx, edi; this
0x4DDEF3: call    TESObjectCELL_IsInterior
0x4DDEF8: test    al, al
0x4DDEFA: jnz     short loc_4DDEFE
0x4DDEFC: xor     edi, edi
0x4DDEFE: mov     edx, [esi]
0x4DDF00: mov     eax, [edx+190h]
0x4DDF06: mov     ecx, esi
0x4DDF08: call    eax
0x4DDF0A: test    al, al
0x4DDF0C: jz      short loc_4DDF17
0x4DDF0E: push    0
0x4DDF10: mov     ecx, esi
0x4DDF12: call    sub_5E1360
0x4DDF17: push    ebx; int
0x4DDF18: push    edi; int
0x4DDF19: push    esi; Concurrency::details::SchedulerBase *
0x4DDF1A: call    sub_4DD4B0
0x4DDF1F: add     esp, 0Ch
0x4DDF22: test    ebp, ebp
0x4DDF24: pop     ebx
0x4DDF25: jz      short loc_4DDF3A
0x4DDF27: cmp     dword ptr [ebp+58h], 0
0x4DDF2B: jz      short loc_4DDF3A
0x4DDF2D: mov     edx, [ebp+0]
0x4DDF30: mov     eax, [edx+1A8h]
0x4DDF36: mov     ecx, ebp
0x4DDF38: call    eax
0x4DDF3A: mov     edx, [esi]
0x4DDF3C: mov     eax, [edx+198h]
0x4DDF42: push    0
0x4DDF44: mov     ecx, esi
0x4DDF46: call    eax
0x4DDF48: test    al, al
0x4DDF4A: pop     ebp
0x4DDF4B: jz      short loc_4DDF63
0x4DDF4D: lea     ecx, [esi+44h]
0x4DDF50: call    sub_4212E0
0x4DDF55: mov     edx, [esi]
0x4DDF57: mov     eax, [edx+9Ch]
0x4DDF5D: push    0
0x4DDF5F: mov     ecx, esi
0x4DDF61: call    eax
0x4DDF63: push    0
0x4DDF65: push    esi
0x4DDF66: lea     ecx, [esi+44h]
0x4DDF69: call    sub_4201A0
0x4DDF6E: mov     edx, [esi]
0x4DDF70: mov     eax, [edx+44h]
0x4DDF73: push    4000h
0x4DDF78: mov     ecx, esi
0x4DDF7A: call    eax
0x4DDF7C: pop     edi
0x4DDF7D: pop     esi
0x4DDF7E: add     esp, 20h
0x4DDF81: retn
