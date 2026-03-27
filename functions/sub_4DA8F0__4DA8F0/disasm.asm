0x4DA8F0: sub     esp, 12Ch
0x4DA8F6: mov     eax, ds:0B30AACh
0x4DA8FB: xor     eax, esp
0x4DA8FD: mov     [esp+12Ch+var_4], eax
0x4DA904: fld     dword ptr ds:0A30634h
0x4DA90A: mov     eax, [esp+12Ch+arg_4]
0x4DA911: fcomp   [esp+12Ch+arg_8]
0x4DA918: push    ebx
0x4DA919: mov     [esp+130h+var_118], eax
0x4DA91D: push    esi
0x4DA91E: mov     esi, [esp+134h+arg_0]
0x4DA925: fnstsw  ax
0x4DA927: mov     [esp+134h+var_114], esi
0x4DA92B: test    ah, 44h
0x4DA92E: jp      short loc_4DA93D
0x4DA930: fld     dword ptr ds:0B33A30h
0x4DA936: fstp    [esp+134h+arg_8]
0x4DA93D: push    2; Size
0x4DA93F: lea     ecx, [esp+138h+Dst]
0x4DA943: push    ecx; Dst
0x4DA944: mov     ecx, ds:0B33B00h
0x4DA94A: call    SaveLoad_LoadData
0x4DA94F: mov     eax, [esp+134h+Dst]
0x4DA953: cmp     ax, 0FDE8h
0x4DA957: jbe     short loc_4DA95F
0x4DA959: xor     eax, eax
0x4DA95B: mov     [esp+134h+Dst], eax
0x4DA95F: xor     ebx, ebx
0x4DA961: test    esi, esi
0x4DA963: jz      short loc_4DA973
0x4DA965: test    ax, ax
0x4DA968: movzx   ebx, word ptr [esi+46h]
0x4DA96C: jz      short loc_4DA973
0x4DA96E: or      word ptr [esi+8], 8
0x4DA973: test    ax, ax
0x4DA976: mov     [esp+134h+var_129], 0
0x4DA97B: mov     [esp+134h+var_110], 0
0x4DA983: jbe     loc_4DAAD6
0x4DA989: push    ebp
0x4DA98A: push    edi
0x4DA98B: jmp     short loc_4DA990
0x4DA98D: align 10h
0x4DA990: mov     ecx, ds:0B33B00h
0x4DA996: mov     al, [ecx+7Ch]
0x4DA999: cmp     al, 15h
0x4DA99B: jb      short loc_4DA9EE
0x4DA99D: cmp     al, 17h
0x4DA99F: jnb     short loc_4DA9EE
0x4DA9A1: push    4; Size
0x4DA9A3: lea     edx, [esp+140h+var_10C]
0x4DA9A7: push    edx; Dst
0x4DA9A8: call    SaveLoad_LoadData
0x4DA9AD: mov     eax, [esp+13Ch+var_10C]
0x4DA9B1: cmp     eax, 2Bh ; '+'
0x4DA9B4: jge     short loc_4DA9D4
0x4DA9B6: lea     eax, [eax+eax*8]
0x4DA9B9: mov     eax, ds:0B102E0h[eax*4]
0x4DA9C0: lea     edx, [esp+13Ch+var_108]
0x4DA9C4: sub     edx, eax
0x4DA9C6: mov     cl, [eax]
0x4DA9C8: mov     [edx+eax], cl
0x4DA9CB: add     eax, 1
0x4DA9CE: test    cl, cl
0x4DA9D0: jnz     short loc_4DA9C6
0x4DA9D2: jmp     short loc_4DA9E8
0x4DA9D4: push    104h
0x4DA9D9: lea     ecx, [esp+140h+var_108]
0x4DA9DD: push    0
0x4DA9DF: push    ecx
0x4DA9E0: call    __memset
0x4DA9E5: add     esp, 0Ch
0x4DA9E8: mov     ecx, ds:0B33B00h
0x4DA9EE: mov     al, [ecx+7Ch]
0x4DA9F1: cmp     al, 15h
0x4DA9F3: jb      short loc_4DA9F9
0x4DA9F5: cmp     al, 17h
0x4DA9F7: jb      short loc_4DAA2F
0x4DA9F9: push    1; Size
0x4DA9FB: lea     edx, [esp+140h+var_121]
0x4DA9FF: push    edx; Dst
0x4DAA00: call    SaveLoad_LoadData
0x4DAA05: push    104h
0x4DAA0A: lea     eax, [esp+140h+var_108]
0x4DAA0E: push    0
0x4DAA10: push    eax
0x4DAA11: call    __memset
0x4DAA16: movzx   ecx, [esp+148h+var_121]
0x4DAA1B: add     esp, 0Ch
0x4DAA1E: push    ecx; Size
0x4DAA1F: mov     ecx, ds:0B33B00h
0x4DAA25: lea     edx, [esp+140h+var_108]
0x4DAA29: push    edx; Dst
0x4DAA2A: call    SaveLoad_LoadData
0x4DAA2F: test    esi, esi
0x4DAA31: jz      short loc_4DAA87
0x4DAA33: xor     edi, edi
0x4DAA35: test    ebx, ebx
0x4DAA37: jbe     short loc_4DAA87
0x4DAA39: mov     ebp, [esi+40h]
0x4DAA3C: lea     esp, [esp+0]
0x4DAA40: mov     esi, [ebp+0]
0x4DAA43: test    esi, esi
0x4DAA45: jz      short loc_4DAA79
0x4DAA47: mov     eax, [esi+8]
0x4DAA4A: lea     ecx, [esp+13Ch+var_108]
0x4DAA4E: mov     edi, edi
0x4DAA50: mov     dl, [eax]
0x4DAA52: cmp     dl, [ecx]
0x4DAA54: jnz     short loc_4DAA70
0x4DAA56: test    dl, dl
0x4DAA58: jz      short loc_4DAA6C
0x4DAA5A: mov     dl, [eax+1]
0x4DAA5D: cmp     dl, [ecx+1]
0x4DAA60: jnz     short loc_4DAA70
0x4DAA62: add     eax, 2
0x4DAA65: add     ecx, 2
0x4DAA68: test    dl, dl
0x4DAA6A: jnz     short loc_4DAA50
0x4DAA6C: xor     eax, eax
0x4DAA6E: jmp     short loc_4DAA75
0x4DAA70: sbb     eax, eax
0x4DAA72: sbb     eax, 0FFFFFFFFh
0x4DAA75: test    eax, eax
0x4DAA77: jz      short loc_4DAAED
0x4DAA79: add     edi, 1
0x4DAA7C: add     ebp, 4
0x4DAA7F: cmp     edi, ebx
0x4DAA81: jb      short loc_4DAA40
0x4DAA83: mov     esi, [esp+13Ch+var_114]
0x4DAA87: call    sub_49F550
0x4DAA8C: mov     ecx, ds:0B33B00h
0x4DAA92: movzx   eax, ax
0x4DAA95: push    eax
0x4DAA96: call    SaveLoad_AdvanceBufferOffset
0x4DAA9B: mov     eax, [esp+13Ch+var_110]
0x4DAA9F: movzx   ecx, word ptr [esp+13Ch+Dst]
0x4DAAA4: add     eax, 1
0x4DAAA7: cmp     eax, ecx
0x4DAAA9: mov     [esp+13Ch+var_110], eax
0x4DAAAD: jl      loc_4DA990
0x4DAAB3: cmp     [esp+13Ch+var_129], 0
0x4DAAB8: pop     edi
0x4DAAB9: pop     ebp
0x4DAABA: jz      short loc_4DAAD6
0x4DAABC: mov     ecx, [esp+134h+var_118]; this
0x4DAAC0: test    ecx, ecx
0x4DAAC2: jz      short loc_4DAAD6
0x4DAAC4: fld     [esp+134h+arg_8]
0x4DAACB: push    1; a3
0x4DAACD: push    ecx
0x4DAACE: fstp    [esp+13Ch+a2]; a2
0x4DAAD1: call    NiAVObject_UpdateNiAVObject
0x4DAAD6: mov     ecx, [esp+134h+var_4]
0x4DAADD: pop     esi
0x4DAADE: pop     ebx
0x4DAADF: xor     ecx, esp
0x4DAAE1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4DAAE6: add     esp, 12Ch
0x4DAAEC: retn
0x4DAAED: cmp     dword ptr [esi+44h], 0
0x4DAAF1: jnz     short loc_4DAB10
0x4DAAF3: fldz
0x4DAAF5: push    0; int
0x4DAAF7: push    0; int
0x4DAAF9: sub     esp, 8
0x4DAAFC: fstp    [esp+14Ch+var_148]; float
0x4DAB00: mov     ecx, esi
0x4DAB02: fld1
0x4DAB04: fstp    [esp+14Ch+var_14C]; float
0x4DAB07: push    0; char
0x4DAB09: push    0; int
0x4DAB0B: call    sub_6C9BA0
0x4DAB10: fld     [esp+13Ch+arg_8]
0x4DAB17: push    ecx
0x4DAB18: mov     ecx, esi
0x4DAB1A: fstp    [esp+140h+var_140]; float
0x4DAB1D: call    sub_49F5F0
0x4DAB22: mov     edi, [esp+13Ch+var_118]
0x4DAB26: test    edi, edi
0x4DAB28: jz      loc_4DABE3
0x4DAB2E: push    edi
0x4DAB2F: call    sub_4808A0
0x4DAB34: add     esp, 4
0x4DAB37: test    al, al
0x4DAB39: jz      loc_4DABE3
0x4DAB3F: fld     dword ptr [esi+48h]
0x4DAB42: fld     [esp+13Ch+arg_8]
0x4DAB49: fld     st
0x4DAB4B: faddp   st(2), st
0x4DAB4D: fxch    st(1)
0x4DAB4F: fstp    [esp+13Ch+var_120]
0x4DAB53: fld     st
0x4DAB55: fld     [esp+13Ch+var_120]
0x4DAB59: fld     st
0x4DAB5B: fsubp   st(2), st
0x4DAB5D: fxch    st(1)
0x4DAB5F: fstp    [esp+13Ch+var_128]
0x4DAB63: fldz
0x4DAB65: fld     [esp+13Ch+var_128]
0x4DAB69: fcom    st(1)
0x4DAB6B: fnstsw  ax
0x4DAB6D: test    ah, 5
0x4DAB70: jp      short loc_4DAB7E
0x4DAB72: fstp    st
0x4DAB74: fstp    [esp+13Ch+var_128]
0x4DAB78: fld     [esp+13Ch+var_128]
0x4DAB7C: jmp     short loc_4DAB80
0x4DAB7E: fstp    st(1)
0x4DAB80: fxch    st(1)
0x4DAB82: fdiv    qword ptr ds:0A46E48h
0x4DAB88: fstp    [esp+13Ch+var_120]
0x4DAB8C: fld     dword ptr ds:0A46E44h
0x4DAB92: fcom    [esp+13Ch+var_120]
0x4DAB96: fnstsw  ax
0x4DAB98: test    ah, 41h
0x4DAB9B: jnz     short loc_4DABA3
0x4DAB9D: fstp    [esp+13Ch+var_120]
0x4DABA1: jmp     short loc_4DABA5
0x4DABA3: fstp    st
0x4DABA5: fst     [esp+13Ch+var_128]
0x4DABA9: fcompp
0x4DABAB: fnstsw  ax
0x4DABAD: test    ah, 5
0x4DABB0: jp      short loc_4DABE3
0x4DABB2: fld     [esp+13Ch+var_128]
0x4DABB6: push    ecx
0x4DABB7: mov     ecx, edi
0x4DABB9: fstp    [esp+140h+var_140]; float
0x4DABBC: call    sub_7073A0
0x4DABC1: fld     [esp+13Ch+var_128]
0x4DABC5: fadd    [esp+13Ch+var_120]
0x4DABC9: fstp    [esp+13Ch+var_128]
0x4DABCD: fld     [esp+13Ch+var_128]
0x4DABD1: fld     [esp+13Ch+arg_8]
0x4DABD8: fcomp   st(1)
0x4DABDA: fnstsw  ax
0x4DABDC: test    ah, 41h
0x4DABDF: jz      short loc_4DABB6
0x4DABE1: fstp    st
0x4DABE3: mov     esi, [esp+13Ch+var_114]
0x4DABE7: mov     [esp+13Ch+var_129], 1
0x4DABEC: jmp     loc_4DAA9B
