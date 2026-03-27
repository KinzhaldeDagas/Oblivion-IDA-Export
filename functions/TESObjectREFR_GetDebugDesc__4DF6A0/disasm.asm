0x4DF6A0: sub     esp, 310h
0x4DF6A6: mov     eax, ds:0B30AACh
0x4DF6AB: xor     eax, esp
0x4DF6AD: mov     [esp+310h+var_4], eax
0x4DF6B4: push    ebx
0x4DF6B5: push    ebp
0x4DF6B6: mov     ebp, [esp+318h+arg_0]
0x4DF6BD: push    esi
0x4DF6BE: mov     esi, ecx
0x4DF6C0: mov     eax, [esi]
0x4DF6C2: mov     edx, [eax+170h]
0x4DF6C8: xor     ebx, ebx
0x4DF6CA: push    edi
0x4DF6CB: mov     [esp+320h+var_108], bl
0x4DF6D2: call    edx
0x4DF6D4: cmp     eax, ebx
0x4DF6D6: jz      short loc_4DF70D
0x4DF6D8: movzx   ecx, byte ptr [eax+4]
0x4DF6DC: mov     edx, [eax+0Ch]
0x4DF6DF: lea     ecx, [ecx+ecx*2]
0x4DF6E2: mov     edi, ds:0B05E04h[ecx*4]
0x4DF6E9: push    edx
0x4DF6EA: mov     edx, [eax]
0x4DF6EC: mov     ecx, eax
0x4DF6EE: mov     eax, [edx+0D4h]
0x4DF6F4: call    eax
0x4DF6F6: push    eax
0x4DF6F7: push    edi
0x4DF6F8: lea     ecx, [esp+32Ch+var_108]
0x4DF6FF: push    offset aToSFormS08x; " to %s form '%s' (%08X)"
0x4DF704: push    ecx
0x4DF705: call    __sprintf
0x4DF70A: add     esp, 14h
0x4DF70D: mov     eax, [esi+40h]
0x4DF710: cmp     eax, ebx
0x4DF712: mov     [esp+320h+var_20C], bl
0x4DF719: jnz     short loc_4DF729
0x4DF71B: mov     edx, [esi+18h]
0x4DF71E: mov     eax, [edx]
0x4DF720: lea     ecx, [esi+18h]
0x4DF723: call    eax
0x4DF725: cmp     eax, ebx
0x4DF727: jz      short loc_4DF75A
0x4DF729: mov     ecx, eax; this
0x4DF72B: call    TESObjectCELL_GetWorldSpace
0x4DF730: cmp     eax, ebx
0x4DF732: jz      short loc_4DF75A
0x4DF734: mov     ecx, [eax+0Ch]
0x4DF737: mov     edx, [eax]
0x4DF739: push    ecx
0x4DF73A: mov     ecx, eax
0x4DF73C: mov     eax, [edx+0D4h]
0x4DF742: call    eax
0x4DF744: push    eax
0x4DF745: lea     ecx, [esp+328h+var_20C]
0x4DF74C: push    offset aInWorldspaceS0; " in WorldSpace '%s' (%08X)"
0x4DF751: push    ecx
0x4DF752: call    __sprintf
0x4DF757: add     esp, 10h
0x4DF75A: mov     edi, [esi+40h]
0x4DF75D: cmp     edi, ebx
0x4DF75F: mov     [esp+320h+var_310], bl
0x4DF763: jz      short loc_4DF7C6
0x4DF765: mov     ecx, edi; this
0x4DF767: call    TESObjectCELL_IsInterior
0x4DF76C: test    al, al
0x4DF76E: mov     ecx, edi; this
0x4DF770: jz      short loc_4DF795
0x4DF772: mov     eax, [edi+0Ch]
0x4DF775: mov     edx, [edi]
0x4DF777: push    eax
0x4DF778: mov     eax, [edx+0D4h]
0x4DF77E: call    eax
0x4DF780: push    eax
0x4DF781: lea     ecx, [esp+328h+var_310]
0x4DF785: push    offset aInCellS08x; " in Cell '%s' (%08X)"
0x4DF78A: push    ecx
0x4DF78B: call    __sprintf
0x4DF790: add     esp, 10h
0x4DF793: jmp     short loc_4DF7C6
0x4DF795: mov     ebx, [edi+0Ch]
0x4DF798: call    TESObjectCELL_GetYCoordinate
0x4DF79D: push    eax
0x4DF79E: mov     ecx, edi; this
0x4DF7A0: call    TESObjectCELL_GetXCoordinate
0x4DF7A5: mov     edx, [edi]
0x4DF7A7: push    eax
0x4DF7A8: mov     eax, [edx+0D4h]
0x4DF7AE: push    ebx
0x4DF7AF: mov     ecx, edi
0x4DF7B1: call    eax
0x4DF7B3: push    eax
0x4DF7B4: lea     ecx, [esp+330h+var_310]
0x4DF7B8: push    offset aInCellS08xII; " in Cell '%s' (%08X) (%i, %i)"
0x4DF7BD: push    ecx
0x4DF7BE: call    __sprintf
0x4DF7C3: add     esp, 18h
0x4DF7C6: lea     edx, [esp+320h+var_20C]
0x4DF7CD: push    edx
0x4DF7CE: mov     edx, [esi+0Ch]
0x4DF7D1: lea     eax, [esp+324h+var_310]
0x4DF7D5: push    eax
0x4DF7D6: movzx   eax, byte ptr [esi+4]
0x4DF7DA: lea     ecx, [esp+328h+var_108]
0x4DF7E1: push    ecx
0x4DF7E2: push    edx
0x4DF7E3: lea     eax, [eax+eax*2]
0x4DF7E6: mov     ecx, ds:0B05E04h[eax*4]
0x4DF7ED: push    offset EmptyString
0x4DF7F2: push    ecx; ArgList
0x4DF7F3: push    offset aSFormS08xSSS; "%s Form '%s' (%08X)%s%s%s"
0x4DF7F8: push    ebp; int
0x4DF7F9: call    BSStringT_Static_Format
0x4DF7FE: mov     ecx, [esp+340h+var_4]
0x4DF805: add     esp, 20h
0x4DF808: pop     edi
0x4DF809: pop     esi
0x4DF80A: pop     ebp
0x4DF80B: pop     ebx
0x4DF80C: xor     ecx, esp
0x4DF80E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4DF813: add     esp, 310h
0x4DF819: retn    4
