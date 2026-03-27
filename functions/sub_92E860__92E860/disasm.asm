0x92E860: push    ebp
0x92E861: mov     ebp, esp
0x92E863: and     esp, 0FFFFFFF0h
0x92E866: sub     esp, 84h
0x92E86C: push    ebx
0x92E86D: push    esi
0x92E86E: push    edi
0x92E86F: mov     edi, [ebp+arg_0]
0x92E872: lea     eax, [esp+90h+var_80]
0x92E876: push    eax
0x92E877: push    edi
0x92E878: call    sub_92CD60
0x92E87D: fld     [esp+98h+var_80]
0x92E881: fadd    [esp+98h+var_70]
0x92E885: mov     esi, [ebp+arg_8]
0x92E888: mov     ecx, [ebp+arg_4]
0x92E88B: mov     [esp+98h+var_84], 3F000000h
0x92E893: fstp    dword ptr [esi]
0x92E895: movss   xmm0, [esp+98h+var_84]
0x92E89B: fld     [esp+98h+var_7C]
0x92E89F: movaps  xmm2, xmm0
0x92E8A2: fadd    [esp+98h+var_6C]
0x92E8A6: shufps  xmm2, xmm0, 0
0x92E8AA: add     esp, 8
0x92E8AD: fstp    dword ptr [esi+4]
0x92E8B0: fld     [esp+90h+var_78]
0x92E8B4: fadd    [esp+90h+var_68]
0x92E8B8: fstp    dword ptr [esi+8]
0x92E8BB: fld     [esp+90h+var_74]
0x92E8BF: fadd    [esp+90h+var_64]
0x92E8C3: fstp    dword ptr [esi+0Ch]
0x92E8C6: movaps  xmm1, xmmword ptr [esi]
0x92E8C9: fld     [esp+90h+var_70]
0x92E8CD: mulps   xmm2, xmm1
0x92E8D0: fsub    [esp+90h+var_80]
0x92E8D4: movaps  xmmword ptr [esi], xmm2
0x92E8D7: fstp    dword ptr [ecx]
0x92E8D9: fld     [esp+90h+var_6C]
0x92E8DD: fsub    [esp+90h+var_7C]
0x92E8E1: fstp    dword ptr [ecx+4]
0x92E8E4: fld     [esp+90h+var_68]
0x92E8E8: fsub    [esp+90h+var_78]
0x92E8EC: fstp    dword ptr [ecx+8]
0x92E8EF: fld     [esp+90h+var_64]
0x92E8F3: fsub    [esp+90h+var_74]
0x92E8F7: fstp    dword ptr [ecx+0Ch]
0x92E8FA: fld     dword ptr [ecx+8]
0x92E8FD: fcomp   dword ptr ds:0AA1C3Ch
0x92E903: fld     dword ptr ds:0A2F948h
0x92E909: fnstsw  ax
0x92E90B: test    ah, 41h
0x92E90E: jnz     short loc_92E913
0x92E910: fdiv    dword ptr [ecx+8]
0x92E913: fld     dword ptr [ecx+4]
0x92E916: fcomp   dword ptr ds:0AA1C3Ch
0x92E91C: fld     dword ptr ds:0A2F948h
0x92E922: fnstsw  ax
0x92E924: test    ah, 41h
0x92E927: jnz     short loc_92E92C
0x92E929: fdiv    dword ptr [ecx+4]
0x92E92C: fld     dword ptr [ecx]
0x92E92E: fcomp   dword ptr ds:0AA1C3Ch
0x92E934: fld     dword ptr ds:0A2F948h
0x92E93A: fnstsw  ax
0x92E93C: test    ah, 41h
0x92E93F: jnz     short loc_92E943
0x92E941: fdiv    dword ptr [ecx]
0x92E943: mov     eax, [edi+4]
0x92E946: xorps   xmm0, xmm0
0x92E949: movaps  [esp+90h+var_30], xmm0
0x92E94E: fstp    dword ptr [esp+90h+var_30]
0x92E952: movaps  [esp+90h+var_20], xmm0
0x92E957: xor     ebx, ebx
0x92E959: fstp    dword ptr [esp+90h+var_20+4]
0x92E95D: cmp     eax, ebx
0x92E95F: movaps  [esp+90h+var_10], xmm0
0x92E967: fstp    dword ptr [esp+90h+var_10+8]
0x92E96E: mov     [esp+90h+var_84], ebx
0x92E972: jle     loc_92EA35
0x92E978: jmp     short loc_92E980
0x92E97A: align 10h
0x92E980: mov     eax, [edi]
0x92E982: fld     dword ptr [eax+ebx]
0x92E985: mov     ecx, ds:0BA7A40h
0x92E98B: fsub    dword ptr [esi]
0x92E98D: add     eax, ebx
0x92E98F: fld     dword ptr [eax+4]
0x92E992: mov     edx, ecx
0x92E994: fsub    dword ptr [esi+4]
0x92E997: fld     dword ptr [eax+8]
0x92E99A: mov     eax, ds:0BA7A44h
0x92E99F: fsub    dword ptr [esi+8]
0x92E9A2: mov     [esp+90h+var_5C], ecx
0x92E9A6: mov     ecx, eax
0x92E9A8: mov     [esp+90h+var_58], edx
0x92E9AC: fstp    [esp+90h+var_78]
0x92E9B0: mov     edx, [esp+90h+var_78]
0x92E9B4: mov     [esp+90h+var_4C], eax
0x92E9B8: fxch    st(1)
0x92E9BA: mov     eax, ds:0BA7A48h
0x92E9BF: fstp    [esp+90h+var_60]
0x92E9C3: mov     [esp+90h+var_48], ecx
0x92E9C7: mov     ecx, eax
0x92E9C9: fstp    [esp+90h+var_50]
0x92E9CD: mov     [esp+90h+var_40], edx
0x92E9D1: lea     edx, [esp+90h+var_30]
0x92E9D5: mov     [esp+90h+var_38], ecx
0x92E9D9: push    edx
0x92E9DA: lea     ecx, [esp+94h+var_60]
0x92E9DE: mov     [esp+94h+var_54], 0
0x92E9E6: mov     [esp+94h+var_44], 0
0x92E9EE: mov     [esp+94h+var_3C], eax
0x92E9F2: mov     [esp+94h+var_34], 0
0x92E9FA: call    sub_8D2C20
0x92E9FF: fld     [esp+90h+var_40]
0x92EA03: mov     eax, [edi]
0x92EA05: fld     [esp+90h+var_50]
0x92EA09: mov     ecx, [esp+90h+var_60]
0x92EA0D: add     eax, ebx
0x92EA0F: mov     [eax], ecx
0x92EA11: fstp    dword ptr [eax+4]
0x92EA14: add     ebx, 10h
0x92EA17: fstp    dword ptr [eax+8]
0x92EA1A: mov     dword ptr [eax+0Ch], 0
0x92EA21: mov     eax, [esp+90h+var_84]
0x92EA25: mov     ecx, [edi+4]
0x92EA28: inc     eax
0x92EA29: cmp     eax, ecx
0x92EA2B: mov     [esp+90h+var_84], eax
0x92EA2F: jl      loc_92E980
0x92EA35: pop     edi
0x92EA36: pop     esi
0x92EA37: pop     ebx
0x92EA38: mov     esp, ebp
0x92EA3A: pop     ebp
0x92EA3B: retn
