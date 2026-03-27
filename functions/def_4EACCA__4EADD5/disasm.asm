0x4EADD5: fld     st; jumptable 004EACCA default case
0x4EADD7: call    Double_To_SInt32
0x4EADDC: mov     [esp+arg_18], eax
0x4EADE0: fild    [esp+arg_18]
0x4EADE4: fstp    [esp+arg_18]
0x4EADE8: fld     [esp+arg_18]
0x4EADEC: fld     st
0x4EADEE: fsubp   st(2), st
0x4EADF0: fxch    st(1)
0x4EADF2: fcomp   qword ptr ds:0A2FC68h
0x4EADF8: fnstsw  ax
0x4EADFA: test    ah, 1
0x4EADFD: jz      short loc_4EAE05
0x4EADFF: fsub    qword ptr ds:0A2F928h
0x4EAE05: test    bl, bl
0x4EAE07: fstp    [esp+arg_34]
0x4EAE0B: lea     edx, [esp+arg_60]
0x4EAE0F: lea     eax, [esp+arg_38]
0x4EAE13: push    edx
0x4EAE14: push    eax
0x4EAE15: jz      short loc_4EAE29
0x4EAE17: lea     ecx, [esp+8+arg_A0]
0x4EAE1E: push    ecx
0x4EAE1F: mov     ecx, [ebp+14h]
0x4EAE22: call    sub_4C3540
0x4EAE27: jmp     short loc_4EAE39
0x4EAE29: lea     ecx, [esp+8+arg_2C]
0x4EAE2D: push    ecx
0x4EAE2E: mov     ecx, ds:0B333A0h
0x4EAE34: call    sub_4406A0
0x4EAE39: mov     ecx, [ebp+30h]
0x4EAE3C: mov     al, [ecx+1Eh]
0x4EAE3F: test    al, al
0x4EAE41: jz      loc_4EAEE5
0x4EAE47: cmp     byte ptr [ecx+1Ch], 0
0x4EAE4B: jz      short loc_4EAE6A
0x4EAE4D: mov     edx, [esp+arg_60]
0x4EAE51: mov     eax, [esp+arg_64]
0x4EAE55: mov     ecx, [esp+arg_68]
0x4EAE59: mov     [esp+arg_38], edx
0x4EAE5D: mov     [esp+arg_3C], eax
0x4EAE61: mov     [esp+arg_40], ecx
0x4EAE65: jmp     loc_4EAEE5
0x4EAE6A: test    al, al
0x4EAE6C: jz      short loc_4EAEE5
0x4EAE6E: cmp     byte ptr [ecx+1Ch], 0
0x4EAE72: jnz     short loc_4EAEE5
0x4EAE74: fld     [esp+arg_60]
0x4EAE78: fadd    [esp+arg_38]
0x4EAE7C: fstp    [esp+arg_18]
0x4EAE80: fld     [esp+arg_64]
0x4EAE84: fadd    [esp+arg_3C]
0x4EAE88: fstp    [esp+arg_24]
0x4EAE8C: fld     [esp+arg_68]
0x4EAE90: fadd    [esp+arg_40]
0x4EAE94: fstp    [esp+arg_14]
0x4EAE98: fld     [esp+arg_18]
0x4EAE9C: fstp    [esp+arg_84]
0x4EAEA3: mov     edx, [esp+arg_84]
0x4EAEAA: fld     [esp+arg_24]
0x4EAEAE: mov     [esp+arg_38], edx
0x4EAEB2: fstp    [esp+arg_88]
0x4EAEB9: mov     eax, [esp+arg_88]
0x4EAEC0: fld     [esp+arg_14]
0x4EAEC4: mov     [esp+arg_3C], eax
0x4EAEC8: fstp    [esp+arg_8C]
0x4EAECF: mov     ecx, [esp+arg_8C]
0x4EAED6: mov     [esp+arg_40], ecx
0x4EAEDA: lea     ecx, [esp+arg_38]
0x4EAEDE: call    sub_43F350
0x4EAEE3: fstp    st
0x4EAEE5: fld     [esp+arg_40]
0x4EAEE9: fld     [esp+arg_90]
0x4EAEF0: fcomp   st(1)
0x4EAEF2: fnstsw  ax
0x4EAEF4: test    ah, 41h
0x4EAEF7: jz      loc_4EB04F
0x4EAEFD: fld     [esp+arg_80]
0x4EAF04: fcomp   st(1)
0x4EAF06: fnstsw  ax
0x4EAF08: test    ah, 5
0x4EAF0B: jnp     loc_4EB04F
0x4EAF11: fld     [esp+arg_38]
0x4EAF15: fld     qword ptr ds:0A2FAA0h
0x4EAF1B: fmul    st(1), st
0x4EAF1D: fadd    st(1), st
0x4EAF1F: fxch    st(1)
0x4EAF21: fstp    [esp+arg_38]
0x4EAF25: fld     [esp+arg_38]
0x4EAF29: fld     qword ptr ds:0A46B18h
0x4EAF2F: fcom    st(1)
0x4EAF31: fnstsw  ax
0x4EAF33: fstp    st(1)
0x4EAF35: test    ah, 41h
0x4EAF38: fld     dword ptr ds:0A34F5Ch
0x4EAF3E: jp      short loc_4EAF44
0x4EAF40: fst     [esp+arg_38]
0x4EAF44: fld     [esp+arg_3C]
0x4EAF48: fmul    st, st(3)
0x4EAF4A: fadd    st, st(3)
0x4EAF4C: fstp    [esp+arg_3C]
0x4EAF50: fld     [esp+arg_3C]
0x4EAF54: fcomp   st(2)
0x4EAF56: fnstsw  ax
0x4EAF58: test    ah, 1
0x4EAF5B: jnz     short loc_4EAF61
0x4EAF5D: fst     [esp+arg_3C]
0x4EAF61: fxch    st(3)
0x4EAF63: fmul    st, st(2)
0x4EAF65: faddp   st(2), st
0x4EAF67: fxch    st(1)
0x4EAF69: fstp    [esp+arg_40]
0x4EAF6D: fld     [esp+arg_40]
0x4EAF71: fcompp
0x4EAF73: fnstsw  ax
0x4EAF75: test    ah, 1
0x4EAF78: jnz     short loc_4EAF80
0x4EAF7A: fstp    [esp+arg_40]
0x4EAF7E: jmp     short loc_4EAF82
0x4EAF80: fstp    st
0x4EAF82: test    bl, bl
0x4EAF84: fld     [esp+arg_38]
0x4EAF88: fadd    [esp+arg_2C]
0x4EAF8C: fstp    [esp+arg_2C]
0x4EAF90: fld     [esp+arg_3C]
0x4EAF94: fadd    [esp+arg_30]
0x4EAF98: fstp    [esp+arg_30]
0x4EAF9C: fld     [esp+arg_40]
0x4EAFA0: fadd    [esp+arg_34]
0x4EAFA4: fstp    [esp+arg_34]
0x4EAFA8: fldz
0x4EAFAA: fst     [esp+arg_6C]
0x4EAFAE: fst     [esp+arg_70]
0x4EAFB2: fst     [esp+arg_74]
0x4EAFB6: fstp    [esp+arg_78]
0x4EAFBA: jz      short loc_4EAFD3
0x4EAFBC: mov     ecx, [ebp+14h]
0x4EAFBF: lea     edx, [esp+arg_6C]
0x4EAFC3: push    edx
0x4EAFC4: lea     eax, [esp+4+arg_A0]
0x4EAFCB: push    eax
0x4EAFCC: call    sub_4C4B70
0x4EAFD1: jmp     short loc_4EAFE8
0x4EAFD3: lea     ecx, [esp+arg_6C]
0x4EAFD7: push    ecx
0x4EAFD8: mov     ecx, ds:0B333A0h
0x4EAFDE: lea     edx, [esp+4+arg_2C]
0x4EAFE2: push    edx
0x4EAFE3: call    sub_4407A0
0x4EAFE8: fld     [esp+arg_6C]
0x4EAFEC: mov     edx, [esp+arg_54]
0x4EAFF0: fmul    qword ptr ds:0A47A48h
0x4EAFF6: mov     esi, ds:0B36098h
0x4EAFFC: fld     [esp+arg_70]
0x4EB000: movzx   eax, dx
0x4EB003: fmul    qword ptr ds:0A47A40h
0x4EB009: lea     ecx, [eax+eax*2]
0x4EB00C: lea     ecx, [esi+ecx*4]
0x4EB00F: mov     esi, [esp+arg_2C]
0x4EB013: faddp   st(1), st
0x4EB015: add     edx, 1
0x4EB018: fld     [esp+arg_74]
0x4EB01C: mov     [ecx], esi
0x4EB01E: fmul    qword ptr ds:0A47A38h
0x4EB024: mov     esi, [esp+arg_30]
0x4EB028: mov     [ecx+4], esi
0x4EB02B: mov     esi, [esp+arg_34]
0x4EB02F: faddp   st(1), st
0x4EB031: mov     [ecx+8], esi
0x4EB034: mov     ecx, ds:0B3609Ch
0x4EB03A: mov     [esp+arg_54], edx
0x4EB03E: fstp    [esp+arg_18]
0x4EB042: fld     [esp+arg_18]
0x4EB046: fstp    dword ptr [ecx+eax*4]
0x4EB049: jmp     short loc_4EB051
0x4EB04B: fstp    st(1)
0x4EB04D: fstp    st
0x4EB04F: fstp    st
0x4EB051: mov     eax, [esp+arg_4C]
0x4EB055: mov     ecx, [esp+arg_44]
0x4EB059: add     eax, 1
0x4EB05C: cmp     eax, ecx
0x4EB05E: mov     [esp+arg_4C], eax
0x4EB062: jl      loc_4EAA64
0x4EB068: mov     eax, [esp+arg_48]
0x4EB06C: add     eax, 1
0x4EB06F: cmp     eax, ecx
0x4EB071: mov     [esp+arg_48], eax
0x4EB075: jl      loc_4EAA30
0x4EB07B: mov     eax, [esp+arg_54]
0x4EB07F: test    ax, ax
0x4EB082: jbe     short loc_4EB0AE
0x4EB084: mov     edx, ds:0B3609Ch
0x4EB08A: mov     ecx, [ebp+30h]
0x4EB08D: push    eax; float
0x4EB08E: mov     eax, ds:0B36098h
0x4EB093: push    edx; int
0x4EB094: mov     edx, [ebp+20h]
0x4EB097: push    eax; int
0x4EB098: mov     eax, [ebp+0Ch]
0x4EB09B: push    ecx; int
0x4EB09C: mov     ecx, [ebp+8]
0x4EB09F: push    edx; int
0x4EB0A0: mov     edx, [ebp+18h]
0x4EB0A3: push    eax; float
0x4EB0A4: push    ecx; int
0x4EB0A5: push    edx; int
0x4EB0A6: call    sub_7C4F50
0x4EB0AB: add     esp, 20h
0x4EB0AE: mov     ecx, [esp+arg_F4]
0x4EB0B5: mov     large fs:0, ecx
0x4EB0BC: pop     ecx
0x4EB0BD: pop     edi
0x4EB0BE: pop     esi
0x4EB0BF: pop     ebx
0x4EB0C0: mov     esp, ebp
0x4EB0C2: pop     ebp
0x4EB0C3: retn
