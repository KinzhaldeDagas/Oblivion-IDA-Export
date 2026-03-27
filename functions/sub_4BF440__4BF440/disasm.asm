0x4BF440: push    ecx
0x4BF441: mov     al, byte ptr [esp+4+arg_0]
0x4BF445: cmp     al, 4
0x4BF447: jnb     loc_4BF546
0x4BF44D: push    edi
0x4BF44E: mov     di, word ptr [esp+8+arg_4]
0x4BF453: cmp     di, 8
0x4BF457: jnb     loc_4BF545
0x4BF45D: cmp     dword ptr [ecx+24h], 0
0x4BF461: jz      loc_4BF545
0x4BF467: movzx   edx, al
0x4BF46A: mov     eax, [ecx+24h]
0x4BF46D: movzx   edi, di
0x4BF470: push    ebx
0x4BF471: mov     ebx, [eax+edx*4+30h]
0x4BF475: add     edi, edi
0x4BF477: add     edi, edi
0x4BF479: mov     ebx, [edi+ebx]
0x4BF47C: push    esi
0x4BF47D: mov     esi, [eax+edx*4+20h]
0x4BF481: mov     [eax+edx*4+20h], ebx
0x4BF485: mov     eax, [ecx+24h]
0x4BF488: mov     eax, [eax+edx*4+30h]
0x4BF48C: mov     [edi+eax], esi
0x4BF48F: mov     eax, [ecx+24h]
0x4BF492: cmp     dword ptr [eax+edx*4+40h], 0
0x4BF497: mov     [esp+10h+var_4], edi
0x4BF49B: jz      loc_4BF543
0x4BF4A1: fldz
0x4BF4A3: xor     ebx, ebx
0x4BF4A5: fld1
0x4BF4A7: push    ebp
0x4BF4A8: jmp     short loc_4BF4AC
0x4BF4AA: fxch    st(1)
0x4BF4AC: fxch    st(1)
0x4BF4AE: xor     ebp, ebp
0x4BF4B0: fst     [esp+14h+arg_0]
0x4BF4B4: movzx   edi, bx
0x4BF4B7: fst     [esp+14h+arg_4]
0x4BF4BB: cmp     di, 121h
0x4BF4C0: jnb     short loc_4BF4ED
0x4BF4C2: movzx   esi, bp
0x4BF4C5: cmp     si, 8
0x4BF4C9: jnb     short loc_4BF4ED
0x4BF4CB: mov     eax, [ecx+24h]
0x4BF4CE: test    eax, eax
0x4BF4D0: jz      short loc_4BF4ED
0x4BF4D2: cmp     dword ptr [eax+edx*4+40h], 0
0x4BF4D7: jz      short loc_4BF4ED
0x4BF4D9: mov     eax, [eax+edx*4+40h]
0x4BF4DD: movzx   edi, di
0x4BF4E0: mov     eax, [eax+edi*4]
0x4BF4E3: movzx   esi, si
0x4BF4E6: fld     dword ptr [eax+esi*4]
0x4BF4E9: fstp    [esp+14h+arg_4]
0x4BF4ED: fld     [esp+14h+arg_4]
0x4BF4F1: add     ebp, 1
0x4BF4F4: cmp     ebp, 8
0x4BF4F7: fadd    [esp+14h+arg_0]
0x4BF4FB: fstp    [esp+14h+arg_0]
0x4BF4FF: jb      short loc_4BF4B4
0x4BF501: fld     [esp+14h+arg_0]
0x4BF505: fsubr   st, st(2)
0x4BF507: fstp    [esp+14h+arg_0]
0x4BF50B: fcom    [esp+14h+arg_0]
0x4BF50F: fnstsw  ax
0x4BF511: test    ah, 41h
0x4BF514: jnz     short loc_4BF51A
0x4BF516: fst     [esp+14h+arg_0]
0x4BF51A: mov     eax, [ecx+24h]
0x4BF51D: fld     [esp+14h+arg_0]
0x4BF521: mov     eax, [eax+edx*4+40h]
0x4BF525: mov     eax, [eax+ebx*4]
0x4BF528: mov     esi, [esp+14h+var_4]
0x4BF52C: add     ebx, 1
0x4BF52F: fstp    dword ptr [esi+eax]
0x4BF532: cmp     ebx, 121h
0x4BF538: jl      loc_4BF4AA
0x4BF53E: fstp    st
0x4BF540: pop     ebp
0x4BF541: fstp    st
0x4BF543: pop     esi
0x4BF544: pop     ebx
0x4BF545: pop     edi
0x4BF546: pop     ecx
0x4BF547: retn    8
