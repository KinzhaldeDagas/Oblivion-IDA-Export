0x41DD30: push    0FFFFFFFFh
0x41DD32: push    offset ??1ExtraCellCanopyShadowMask@@UAE@XZ_SEH
0x41DD37: mov     eax, large fs:0
0x41DD3D: push    eax
0x41DD3E: push    ecx
0x41DD3F: push    ebx
0x41DD40: push    ebp
0x41DD41: push    esi
0x41DD42: push    edi
0x41DD43: mov     eax, ___security_cookie
0x41DD48: xor     eax, esp
0x41DD4A: push    eax
0x41DD4B: lea     eax, [esp+24h+var_C]
0x41DD4F: mov     large fs:0, eax
0x41DD55: mov     esi, ecx
0x41DD57: mov     [esp+24h+var_10], esi
0x41DD5B: mov     dword ptr [esi], offset ??_7ExtraCellCanopyShadowMask@@6B@; const ExtraCellCanopyShadowMask::`vftable'
0x41DD61: xor     ebx, ebx
0x41DD63: push    3
0x41DD65: mov     [esp+28h+var_4], 1
0x41DD6D: mov     [esi+0Ch], ebx
0x41DD70: call    nullsub_returnTrue_0arg
0x41DD75: mov     edi, [esi+10h]
0x41DD78: mov     ebp, ds:InterlockedDecrement
0x41DD7E: add     esp, 4
0x41DD81: cmp     edi, ebx
0x41DD83: jz      short loc_41DDA0
0x41DD85: lea     eax, [edi+4]
0x41DD88: push    eax; lpAddend
0x41DD89: call    ebp ; InterlockedDecrement
0x41DD8B: test    eax, eax
0x41DD8D: jnz     short loc_41DD9D
0x41DD8F: cmp     edi, ebx
0x41DD91: jz      short loc_41DD9D
0x41DD93: mov     edx, [edi]
0x41DD95: mov     eax, [edx]
0x41DD97: push    1
0x41DD99: mov     ecx, edi
0x41DD9B: call    eax
0x41DD9D: mov     [esi+10h], ebx
0x41DDA0: push    2
0x41DDA2: call    nullsub_returnTrue_0arg
0x41DDA7: mov     [esi+18h], ebx
0x41DDAA: mov     edi, [esi+10h]
0x41DDAD: add     esp, 4
0x41DDB0: cmp     edi, ebx
0x41DDB2: mov     byte ptr [esp+24h+var_4], bl
0x41DDB6: jz      short loc_41DDD0
0x41DDB8: lea     ecx, [edi+4]
0x41DDBB: push    ecx; lpAddend
0x41DDBC: call    ebp ; InterlockedDecrement
0x41DDBE: test    eax, eax
0x41DDC0: jnz     short loc_41DDD0
0x41DDC2: cmp     edi, ebx
0x41DDC4: jz      short loc_41DDD0
0x41DDC6: mov     edx, [edi]
0x41DDC8: mov     eax, [edx]
0x41DDCA: push    1
0x41DDCC: mov     ecx, edi
0x41DDCE: call    eax
0x41DDD0: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x41DDD6: mov     ecx, dword ptr [esp+24h+var_C]
0x41DDDA: mov     large fs:0, ecx
0x41DDE1: pop     ecx
0x41DDE2: pop     edi
0x41DDE3: pop     esi
0x41DDE4: pop     ebp
0x41DDE5: pop     ebx
0x41DDE6: add     esp, 10h
0x41DDE9: retn
