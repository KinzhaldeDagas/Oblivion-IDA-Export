0x5FAC98: fld     dword ptr ds:0B375F0h; jumptable 005FAC59 default case
0x5FAC9E: fmul    [esp+arg_0]
0x5FACA2: fstp    [esp+arg_0]
0x5FACA6: fldz
0x5FACA8: fld     [esp+arg_0]
0x5FACAC: fcom    st(1)
0x5FACAE: fnstsw  ax
0x5FACB0: fstp    st(1)
0x5FACB2: test    ah, 41h
0x5FACB5: jnz     short loc_5FACC6
0x5FACB7: push    ecx
0x5FACB8: fchs
0x5FACBA: mov     ecx, esi
0x5FACBC: fstp    [esp+4+var_4]; float
0x5FACBF: call    Actor_ModFatigue?
0x5FACC4: jmp     short loc_5FACC8
0x5FACC6: fstp    st
0x5FACC8: cmp     esi, ds:0B333C4h
0x5FACCE: jnz     short loc_5FAD1B
0x5FACD0: mov     ecx, [esi+58h]
0x5FACD3: test    ecx, ecx
0x5FACD5: jz      short loc_5FAD1B
0x5FACD7: mov     eax, [ecx]
0x5FACD9: mov     edx, [eax+2D0h]
0x5FACDF: call    edx
0x5FACE1: cmp     eax, 5
0x5FACE4: jnz     short loc_5FAD1B
0x5FACE6: push    1Ch
0x5FACE8: mov     ecx, esi
0x5FACEA: call    Actor_GetBaseCalcAVi
0x5FACEF: push    eax
0x5FACF0: call    Calc_MasteryFromSkill
0x5FACF5: add     esp, 4
0x5FACF8: test    eax, eax
0x5FACFA: jnz     short loc_5FAD1B
0x5FACFC: fld     dword ptr ds:0B37010h
0x5FAD02: push    ecx
0x5FAD03: fmul    [esp+4+arg_4]
0x5FAD07: mov     ecx, esi
0x5FAD09: fstp    [esp+4+arg_8]
0x5FAD0D: fld     [esp+4+arg_8]
0x5FAD11: fchs
0x5FAD13: fstp    [esp+4+var_4]; float
0x5FAD16: call    Actor_ModFatigue?
0x5FAD1B: fld     [esp+arg_4]
0x5FAD1F: push    ecx
0x5FAD20: mov     ecx, esi
0x5FAD22: fstp    [esp+4+var_4]; float
0x5FAD25: call    sub_5F2720
0x5FAD2A: mov     eax, [esi+5Ch]
0x5FAD2D: mov     edx, [eax+30h]
0x5FAD30: lea     ecx, [esi+5Ch]
0x5FAD33: call    edx
0x5FAD35: test    eax, eax
0x5FAD37: jnz     loc_5FAE3F
0x5FAD3D: fldz
0x5FAD3F: mov     ecx, ds:0B333C4h
0x5FAD45: cmp     esi, ecx
0x5FAD47: fstp    [esp+arg_0]
0x5FAD4B: jnz     short loc_5FAD57
0x5FAD4D: push    9
0x5FAD4F: push    eax
0x5FAD50: call    Player_GetAVModifierf
0x5FAD55: jmp     short loc_5FAD6A
0x5FAD57: mov     ecx, [esi+58h]
0x5FAD5A: test    ecx, ecx
0x5FAD5C: jz      short loc_5FAD6E
0x5FAD5E: mov     eax, [ecx]
0x5FAD60: mov     edx, [eax+468h]
0x5FAD66: push    9
0x5FAD68: call    edx
0x5FAD6A: fstp    [esp+arg_0]
0x5FAD6E: push    9
0x5FAD70: mov     ecx, esi
0x5FAD72: call    Actor_GetBaseCalcAVi
0x5FAD77: mov     [esp+arg_8], eax
0x5FAD7B: fild    [esp+arg_8]
0x5FAD7F: mov     eax, [esi]
0x5FAD81: mov     edx, [eax+288h]
0x5FAD87: push    9
0x5FAD89: fadd    [esp+4+arg_0]
0x5FAD8D: mov     ecx, esi
0x5FAD8F: fstp    [esp+4+arg_0]
0x5FAD93: call    edx
0x5FAD95: fstp    [esp+4+arg_4]
0x5FAD99: fld     [esp+4+arg_4]
0x5FAD9D: fld     st
0x5FAD9F: call    Double_To_SInt32
0x5FADA4: mov     [esp+4+arg_4], eax
0x5FADA8: fild    [esp+4+arg_4]
0x5FADAC: fstp    [esp+4+arg_4]
0x5FADB0: fld     [esp+4+arg_4]
0x5FADB4: fld     st
0x5FADB6: fsubp   st(2), st
0x5FADB8: fxch    st(1)
0x5FADBA: fcomp   qword ptr ds:0A2FC68h
0x5FADC0: fnstsw  ax
0x5FADC2: test    ah, 1
0x5FADC5: jz      short loc_5FADCD
0x5FADC7: fsub    qword ptr ds:0A2F928h
0x5FADCD: fstp    [esp+4+arg_4]
0x5FADD1: fld     [esp+4+arg_4]
0x5FADD5: fld     dword ptr [esp+4]
0x5FADD9: fcom    st(1)
0x5FADDB: fnstsw  ax
0x5FADDD: fstp    st(1)
0x5FADDF: test    ah, 41h
0x5FADE2: jnz     short loc_5FAE3D
0x5FADE4: mov     eax, [esi]
0x5FADE6: mov     edx, [eax+284h]
0x5FADEC: push    ecx
0x5FADED: fstp    [esp+8+var_8]
0x5FADF0: push    39h ; '9'
0x5FADF2: mov     ecx, esi
0x5FADF4: call    edx
0x5FADF6: push    eax; float
0x5FADF7: mov     eax, [esi]
0x5FADF9: mov     edx, [eax+284h]
0x5FADFF: push    2; int
0x5FAE01: mov     ecx, esi
0x5FAE03: call    edx
0x5FAE05: push    eax; int
0x5FAE06: call    Calc_MagickaReturnRate
0x5FAE0B: fmul    [esp+18h+var_4]
0x5FAE0F: add     esp, 0Ch
0x5FAE12: fstp    dword ptr [esp+0Ch]
0x5FAE16: fldz
0x5FAE18: fld     dword ptr [esp+0Ch]
0x5FAE1C: fcom    st(1)
0x5FAE1E: fnstsw  ax
0x5FAE20: fstp    st(1)
0x5FAE22: test    ah, 41h
0x5FAE25: jnz     short loc_5FAE3D
0x5FAE27: mov     eax, [esi]
0x5FAE29: mov     edx, [eax+2A4h]
0x5FAE2F: push    0
0x5FAE31: push    ecx
0x5FAE32: fstp    [esp+14h+var_14]
0x5FAE35: push    9
0x5FAE37: mov     ecx, esi
0x5FAE39: call    edx
0x5FAE3B: jmp     short loc_5FAE3F
0x5FAE3D: fstp    st
0x5FAE3F: fld     [esp+18h+var_10]
0x5FAE43: push    ecx
0x5FAE44: mov     ecx, esi
0x5FAE46: fstp    [esp+1Ch+var_1C]; float
0x5FAE49: call    sub_5E7A60
0x5FAE4E: mov     eax, ds:0B333C4h
0x5FAE53: cmp     byte ptr [eax+594h], 0
0x5FAE5A: jz      short loc_5FAE6B
0x5FAE5C: fld     [esp+18h+var_10]
0x5FAE60: push    ecx
0x5FAE61: mov     ecx, esi
0x5FAE63: fstp    [esp+1Ch+var_1C]
0x5FAE66: call    sub_5F2530
0x5FAE6B: mov     edx, [esi]
0x5FAE6D: fld     [esp+18h+var_10]
0x5FAE71: mov     eax, [edx+2D8h]
0x5FAE77: push    ecx
0x5FAE78: mov     ecx, esi
0x5FAE7A: fstp    [esp+1Ch+var_1C]
0x5FAE7D: call    eax
0x5FAE7F: fld     [esp+1Ch+var_8]
0x5FAE83: fstp    dword ptr [esi+0BCh]
0x5FAE89: pop     esi
0x5FAE8A: add     esp, 0Ch
0x5FAE8D: retn    4
