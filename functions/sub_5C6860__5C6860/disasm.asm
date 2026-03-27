0x5C6860: push    0FFFFFFFFh
0x5C6862: push    offset SEH_5C6860
0x5C6867: mov     eax, large fs:0
0x5C686D: push    eax
0x5C686E: sub     esp, 6Ch
0x5C6871: push    ebx
0x5C6872: push    esi
0x5C6873: push    edi
0x5C6874: mov     eax, ds:0B30AACh
0x5C6879: xor     eax, esp
0x5C687B: push    eax
0x5C687C: lea     eax, [esp+88h+var_C]
0x5C6880: mov     large fs:0, eax
0x5C6886: mov     esi, ecx
0x5C6888: push    offset sub_43ACE0; a5
0x5C688D: push    offset sub_43EB30; a4
0x5C6892: push    4; size
0x5C6894: push    18h; a2
0x5C6896: lea     eax, [esp+98h+a1]
0x5C689A: push    eax; a1
0x5C689B: call    ArrayConstructor
0x5C68A0: mov     ecx, ds:0B333C4h
0x5C68A6: mov     edx, [ecx]
0x5C68A8: mov     eax, [edx+170h]
0x5C68AE: mov     [esp+88h+var_4], 0
0x5C68B9: call    eax
0x5C68BB: fldz
0x5C68BD: push    ecx
0x5C68BE: fstp    [esp+8Ch+var_8C]; float
0x5C68C1: mov     edi, eax
0x5C68C3: mov     ebx, [edi+0E8h]
0x5C68C9: push    0; int
0x5C68CB: lea     ecx, [esp+90h+a1]
0x5C68CF: push    ecx; unsigned __int8 *
0x5C68D0: mov     ecx, edi
0x5C68D2: call    sub_521A10
0x5C68D7: push    eax; int
0x5C68D8: add     ebx, 29Ch
0x5C68DE: push    ebx; int
0x5C68DF: call    sub_552990
0x5C68E4: mov     eax, ds:0B39000h
0x5C68E9: add     esp, 14h
0x5C68EC: push    0FA8h
0x5C68F1: sub     esp, 8
0x5C68F4: mov     ecx, esp; this
0x5C68F6: mov     dword ptr [esp+94h+var_74], esp
0x5C68FA: push    0; a3
0x5C68FC: push    eax; a2
0x5C68FD: mov     dword ptr [ecx], 0
0x5C6903: mov     word ptr [ecx+4], 0
0x5C6909: mov     word ptr [ecx+6], 0
0x5C690F: call    BSStringT_Set
0x5C6914: mov     ecx, esi
0x5C6916: call    sub_5C3110
0x5C691B: mov     ecx, [esi+4]
0x5C691E: push    0FAEh
0x5C6923: mov     ebx, eax
0x5C6925: call    Tile_GetFloat
0x5C692A: fstp    [esp+8Ch+var_74]
0x5C692E: mov     ecx, ebx
0x5C6930: call    Tile_GetFloat
0x5C6935: fcomp   [esp+88h+var_74]
0x5C6939: mov     edi, [edi+0E8h]
0x5C693F: fnstsw  ax
0x5C6941: fldz
0x5C6943: test    ah, 44h
0x5C6946: jp      short loc_5C6965
0x5C6948: fcomp   dword ptr [edi+0A4h]
0x5C694E: fnstsw  ax
0x5C6950: test    ah, 5
0x5C6953: jp      short loc_5C695D
0x5C6955: fld     dword ptr [edi+0A4h]
0x5C695B: jmp     short loc_5C6980
0x5C695D: fld     dword ptr ds:0A46C30h
0x5C6963: jmp     short loc_5C6980
0x5C6965: fcomp   dword ptr [edi+0A0h]
0x5C696B: fnstsw  ax
0x5C696D: test    ah, 5
0x5C6970: jp      short loc_5C697A
0x5C6972: fld     dword ptr [edi+0A0h]
0x5C6978: jmp     short loc_5C6980
0x5C697A: fld     dword ptr ds:0A31E2Ch
0x5C6980: mov     edi, [esp+88h+arg_0]
0x5C6987: fstp    [esp+88h+var_78]
0x5C698B: mov     ecx, [esi+edi*4+94h]
0x5C6992: push    0FB6h
0x5C6997: call    Tile_GetFloat
0x5C699C: call    Double_To_SInt32
0x5C69A1: test    eax, eax
0x5C69A3: mov     esi, [esi+edi*4+94h]
0x5C69AA: push    0FB5h
0x5C69AF: mov     ecx, esi
0x5C69B1: jnz     short loc_5C6A30
0x5C69B3: call    Tile_GetFloat
0x5C69B8: fsub    qword ptr ds:0A2F928h
0x5C69BE: fnstcw  word ptr [esp+88h+arg_0]
0x5C69C5: mov     ecx, esi
0x5C69C7: movzx   eax, word ptr [esp+88h+arg_0]
0x5C69CF: or      eax, 0C00h
0x5C69D4: mov     dword ptr [esp+88h+var_74], eax
0x5C69D8: fldcw   word ptr [esp+88h+var_74]
0x5C69DC: fistp   [esp+88h+var_74]
0x5C69E0: mov     edx, dword ptr [esp+88h+var_74]
0x5C69E4: push    edx
0x5C69E5: push    0
0x5C69E7: fldcw   word ptr [esp+90h+arg_0]
0x5C69EE: push    0FB6h
0x5C69F3: call    Tile_GetFloat
0x5C69F8: call    Double_To_SInt32
0x5C69FD: push    eax
0x5C69FE: lea     eax, [esp+94h+a1]
0x5C6A02: push    eax
0x5C6A03: call    sub_5538F0
0x5C6A08: fstp    [esp+98h+arg_0]
0x5C6A0F: fld     [esp+98h+var_78]
0x5C6A13: fld     st
0x5C6A15: fchs
0x5C6A17: fstp    dword ptr [esp+98h+var_74]
0x5C6A1B: fld     [esp+98h+arg_0]
0x5C6A22: fld     dword ptr [esp+98h+var_74]
0x5C6A26: fld     st
0x5C6A28: fsubp   st(2), st
0x5C6A2A: fsubp   st(2), st
0x5C6A2C: fdivrp  st(1), st
0x5C6A2E: jmp     short loc_5C6A9F
0x5C6A30: call    Tile_GetFloat
0x5C6A35: fsub    qword ptr ds:0A2F928h
0x5C6A3B: fnstcw  word ptr [esp+88h+arg_0]
0x5C6A42: mov     ecx, esi
0x5C6A44: movzx   eax, word ptr [esp+88h+arg_0]
0x5C6A4C: or      eax, 0C00h
0x5C6A51: mov     dword ptr [esp+88h+var_74], eax
0x5C6A55: fldcw   word ptr [esp+88h+var_74]
0x5C6A59: fistp   [esp+88h+var_74]
0x5C6A5D: mov     edx, dword ptr [esp+88h+var_74]
0x5C6A61: push    edx
0x5C6A62: push    0
0x5C6A64: fldcw   word ptr [esp+90h+arg_0]
0x5C6A6B: push    0FB6h
0x5C6A70: call    Tile_GetFloat
0x5C6A75: call    Double_To_SInt32
0x5C6A7A: push    eax
0x5C6A7B: lea     eax, [esp+94h+a1]
0x5C6A7F: push    eax
0x5C6A80: call    sub_5538F0
0x5C6A85: fstp    [esp+98h+arg_0]
0x5C6A8C: fld     [esp+98h+arg_0]
0x5C6A93: fsub    qword ptr ds:0A6D3C8h
0x5C6A99: fdiv    qword ptr ds:0A46E48h
0x5C6A9F: fld1
0x5C6AA1: add     esp, 10h
0x5C6AA4: fldz
0x5C6AA6: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C6AAB: fsub    st(1), st
0x5C6AAD: push    4; int
0x5C6AAF: fxch    st(2)
0x5C6AB1: push    18h; unsigned int
0x5C6AB3: lea     ecx, [esp+94h+a1]
0x5C6AB7: push    ecx; void *
0x5C6AB8: mov     [esp+98h+var_4], 0FFFFFFFFh
0x5C6AC3: fmulp   st(1), st
0x5C6AC5: faddp   st(1), st
0x5C6AC7: fstp    [esp+98h+arg_0]
0x5C6ACE: call    $LN21
0x5C6AD3: fld     [esp+88h+arg_0]
0x5C6ADA: mov     ecx, [esp+88h+var_C]
0x5C6ADE: mov     large fs:0, ecx
0x5C6AE5: pop     ecx
0x5C6AE6: pop     edi
0x5C6AE7: pop     esi
0x5C6AE8: pop     ebx
0x5C6AE9: add     esp, 78h
0x5C6AEC: retn    4
