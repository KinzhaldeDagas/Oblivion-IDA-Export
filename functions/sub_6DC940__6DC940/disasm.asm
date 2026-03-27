0x6DC940: sub     esp, 0E8h
0x6DC946: push    ebx
0x6DC947: push    ebp
0x6DC948: push    esi
0x6DC949: mov     ebx, ecx
0x6DC94B: mov     eax, [ebx+48h]
0x6DC94E: test    eax, eax
0x6DC950: push    edi
0x6DC951: mov     ecx, 9
0x6DC956: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6DC95B: lea     edi, [esp+0F8h+var_AC]
0x6DC95F: rep movsd
0x6DC961: jz      loc_6DD0D1
0x6DC967: mov     edx, [eax+8]
0x6DC96A: cmp     edx, 2
0x6DC96D: mov     ebp, [eax+10h]
0x6DC970: mov     cl, [eax+14h]
0x6DC973: mov     edi, [eax+0Ch]
0x6DC976: mov     [esp+0F8h+var_DC], edx
0x6DC97A: jb      loc_6DD0D1
0x6DC980: mov     al, [ebx+3Ch]
0x6DC983: fld     [esp+0F8h+arg_8]
0x6DC98A: shr     al, 2
0x6DC98D: test    al, 1
0x6DC98F: jz      loc_6DCDBB
0x6DC995: movzx   esi, cl
0x6DC998: mov     ecx, esi
0x6DC99A: imul    ecx, [esp+0F8h+arg_4]
0x6DC9A2: mov     edx, esi
0x6DC9A4: imul    edx, [esp+0F8h+arg_0]
0x6DC9AC: lea     eax, [ecx+edi]
0x6DC9AF: lea     ecx, [edx+edi]
0x6DC9B2: lea     edx, [esp+0F8h+var_D4]
0x6DC9B6: push    edx; int
0x6DC9B7: lea     edx, [esp+0FCh+var_7C]
0x6DC9BE: push    edx; int
0x6DC9BF: lea     edx, [esp+100h+var_B8]
0x6DC9C3: push    edx; int
0x6DC9C4: lea     edx, [esp+104h+var_88]
0x6DC9C8: push    edx; int
0x6DC9C9: push    ebp; int
0x6DC9CA: push    eax; int
0x6DC9CB: push    ecx; int
0x6DC9CC: push    ecx
0x6DC9CD: mov     [esp+118h+var_70], eax
0x6DC9D4: mov     [esp+118h+var_D8], ecx
0x6DC9D8: fstp    [esp+118h+var_118]; float
0x6DC9DB: call    sub_6BBEE0
0x6DC9E0: add     esp, 20h
0x6DC9E3: fldz
0x6DC9E5: fcomp   dword ptr [ebx+5Ch]
0x6DC9E8: fnstsw  ax
0x6DC9EA: test    ah, 44h
0x6DC9ED: jnp     loc_6DCD2C
0x6DC9F3: fld     [esp+0F8h+arg_8]
0x6DC9FA: fld     dword ptr [ebx+5Ch]
0x6DC9FD: fld1
0x6DC9FF: fld     st
0x6DCA01: fsubrp  st(2), st
0x6DCA03: fxch    st(1)
0x6DCA05: fcomp   st(2)
0x6DCA07: fnstsw  ax
0x6DCA09: test    ah, 41h
0x6DCA0C: jp      loc_6DCB9B
0x6DCA12: mov     al, [ebx+3Ch]
0x6DCA15: shr     al, 1
0x6DCA17: test    al, 1
0x6DCA19: jnz     short loc_6DCA35
0x6DCA1B: mov     ecx, [esp+0F8h+var_DC]
0x6DCA1F: add     ecx, 0FFFFFFFFh
0x6DCA22: cmp     [esp+0F8h+arg_4], ecx
0x6DCA29: jnz     short loc_6DCA35
0x6DCA2B: mov     [esp+0F8h+var_CC], 0
0x6DCA33: jmp     short loc_6DCA40
0x6DCA35: mov     edx, [esp+0F8h+arg_4]
0x6DCA3C: mov     [esp+0F8h+var_CC], edx
0x6DCA40: mov     eax, [esp+0F8h+var_DC]
0x6DCA44: add     eax, 0FFFFFFFFh
0x6DCA47: cmp     [esp+0F8h+var_CC], eax
0x6DCA4B: jnb     loc_6DCD28
0x6DCA51: fld     st
0x6DCA53: lea     ecx, [esp+0F8h+var_D4]
0x6DCA57: fsubrp  st(2), st
0x6DCA59: push    ecx; int
0x6DCA5A: fld     dword ptr [ebx+5Ch]
0x6DCA5D: lea     edx, [esp+0FCh+var_7C]
0x6DCA64: push    edx; int
0x6DCA65: faddp   st(2), st
0x6DCA67: mov     edx, [esp+100h+var_70]
0x6DCA6E: fld     dword ptr [ebx+5Ch]
0x6DCA71: lea     eax, [esp+100h+var_B8]
0x6DCA75: fadd    st, st
0x6DCA77: push    eax; int
0x6DCA78: mov     eax, [esp+104h+var_D8]
0x6DCA7C: lea     ecx, [esp+104h+var_C4]
0x6DCA80: fdivp   st(2), st
0x6DCA82: push    ecx; int
0x6DCA83: push    ebp; int
0x6DCA84: push    edx; int
0x6DCA85: push    eax; int
0x6DCA86: push    ecx
0x6DCA87: fxch    st(1)
0x6DCA89: fstp    [esp+118h+var_DC]
0x6DCA8D: fld     [esp+118h+var_DC]
0x6DCA91: fsubr   st, st(1)
0x6DCA93: fstp    [esp+118h+var_C8]
0x6DCA97: fsub    dword ptr [ebx+5Ch]
0x6DCA9A: fstp    [esp+118h+var_D8]
0x6DCA9E: fld     [esp+118h+var_D8]
0x6DCAA2: fstp    [esp+118h+var_118]; float
0x6DCAA5: call    sub_6BBEE0
0x6DCAAA: add     esp, 20h
0x6DCAAD: fld     dword ptr [ebx+5Ch]
0x6DCAB0: lea     ecx, [esp+0F8h+var_D0]
0x6DCAB4: push    ecx; int
0x6DCAB5: lea     edx, [esp+0FCh+var_7C]
0x6DCABC: push    edx; int
0x6DCABD: lea     eax, [esp+100h+var_E8]
0x6DCAC1: push    eax; int
0x6DCAC2: mov     eax, [esp+104h+var_CC]
0x6DCAC6: lea     edx, [eax+1]
0x6DCAC9: imul    edx, esi
0x6DCACC: imul    esi, eax
0x6DCACF: lea     ecx, [esp+104h+var_C4]
0x6DCAD3: push    ecx; int
0x6DCAD4: push    ebp; int
0x6DCAD5: add     edx, edi
0x6DCAD7: push    edx; int
0x6DCAD8: add     esi, edi
0x6DCADA: push    esi; int
0x6DCADB: push    ecx
0x6DCADC: fstp    [esp+118h+var_118]; float
0x6DCADF: call    sub_6BBEE0
0x6DCAE4: fld     [esp+118h+var_C8]
0x6DCAE8: add     esp, 20h
0x6DCAEB: lea     eax, [esp+0F8h+var_E8]
0x6DCAEF: push    eax; int
0x6DCAF0: push    ecx
0x6DCAF1: lea     ecx, [esp+100h+var_54]
0x6DCAF8: fstp    [esp+100h+var_100]; float
0x6DCAFB: push    ecx; int
0x6DCAFC: call    sub_47DA10
0x6DCB01: fld     [esp+104h+var_DC]
0x6DCB05: add     esp, 0Ch
0x6DCB08: push    eax
0x6DCB09: lea     edx, [esp+0FCh+var_60]
0x6DCB10: push    edx
0x6DCB11: lea     eax, [esp+100h+var_B8]
0x6DCB15: push    eax; int
0x6DCB16: push    ecx
0x6DCB17: lea     ecx, [esp+108h+var_6C]
0x6DCB1E: fstp    [esp+108h+var_108]; float
0x6DCB21: push    ecx; int
0x6DCB22: call    sub_47DA10
0x6DCB27: add     esp, 0Ch
0x6DCB2A: mov     ecx, eax
0x6DCB2C: call    sub_47D9B0
0x6DCB31: mov     edx, [eax]
0x6DCB33: mov     [esp+0F8h+var_B8], edx
0x6DCB37: mov     ecx, [eax+4]
0x6DCB3A: mov     [esp+0F8h+var_B4], ecx
0x6DCB3E: mov     edx, [eax+8]
0x6DCB41: lea     ecx, [esp+0F8h+var_B8]
0x6DCB45: mov     [esp+0F8h+var_B0], edx
0x6DCB49: call    sub_43F350
0x6DCB4E: fstp    st
0x6DCB50: fld     [esp+0F8h+var_D0]
0x6DCB54: lea     eax, [esp+0F8h+var_B8]
0x6DCB58: fmul    [esp+0F8h+var_C8]
0x6DCB5C: push    eax
0x6DCB5D: fld     [esp+0FCh+var_DC]
0x6DCB61: lea     ecx, [esp+0FCh+var_6C]
0x6DCB68: fmul    [esp+0FCh+var_D4]
0x6DCB6C: push    ecx
0x6DCB6D: lea     ecx, [esp+100h+var_88]
0x6DCB71: faddp   st(1), st
0x6DCB73: fstp    [esp+100h+var_D4]
0x6DCB77: call    sub_498FE0
0x6DCB7C: mov     edx, [eax]
0x6DCB7E: mov     [esp+0F8h+var_7C], edx
0x6DCB82: mov     ecx, [eax+4]
0x6DCB85: mov     [esp+0F8h+var_78], ecx
0x6DCB8C: mov     edx, [eax+8]
0x6DCB8F: mov     [esp+0F8h+var_74], edx
0x6DCB96: jmp     loc_6DCD2C
0x6DCB9B: fld     dword ptr [ebx+5Ch]
0x6DCB9E: fcomp   st(2)
0x6DCBA0: fnstsw  ax
0x6DCBA2: test    ah, 1
0x6DCBA5: jnz     loc_6DCD28
0x6DCBAB: mov     al, [ebx+3Ch]
0x6DCBAE: shr     al, 1
0x6DCBB0: test    al, 1
0x6DCBB2: jnz     short loc_6DCBCB
0x6DCBB4: cmp     [esp+0F8h+arg_0], 0
0x6DCBBC: jnz     short loc_6DCBCB
0x6DCBBE: mov     ecx, [esp+0F8h+var_DC]
0x6DCBC2: add     ecx, 0FFFFFFFFh
0x6DCBC5: mov     [esp+0F8h+var_CC], ecx
0x6DCBC9: jmp     short loc_6DCBD6
0x6DCBCB: mov     edx, [esp+0F8h+arg_0]
0x6DCBD2: mov     [esp+0F8h+var_CC], edx
0x6DCBD6: cmp     [esp+0F8h+var_CC], 1
0x6DCBDB: jb      loc_6DCD28
0x6DCBE1: fld     dword ptr [ebx+5Ch]
0x6DCBE4: lea     eax, [esp+0F8h+var_D4]
0x6DCBE8: fsubrp  st(2), st
0x6DCBEA: push    eax; int
0x6DCBEB: fld     dword ptr [ebx+5Ch]
0x6DCBEE: lea     ecx, [esp+0FCh+var_7C]
0x6DCBF5: fadd    st, st
0x6DCBF7: push    ecx; int
0x6DCBF8: mov     ecx, [esp+100h+var_70]
0x6DCBFF: lea     edx, [esp+100h+var_B8]
0x6DCC03: fdivp   st(2), st
0x6DCC05: push    edx; int
0x6DCC06: mov     edx, [esp+104h+var_D8]
0x6DCC0A: lea     eax, [esp+104h+var_C4]
0x6DCC0E: push    eax; int
0x6DCC0F: push    ebp; int
0x6DCC10: push    ecx; int
0x6DCC11: push    edx; int
0x6DCC12: push    ecx
0x6DCC13: fxch    st(1)
0x6DCC15: fstp    [esp+118h+var_C8]
0x6DCC19: fsub    [esp+118h+var_C8]
0x6DCC1D: fstp    [esp+118h+var_DC]
0x6DCC21: fld     dword ptr [ebx+5Ch]
0x6DCC24: fstp    [esp+118h+var_118]; float
0x6DCC27: call    sub_6BBEE0
0x6DCC2C: fld     dword ptr [ebx+5Ch]
0x6DCC2F: add     esp, 20h
0x6DCC32: fld1
0x6DCC34: lea     eax, [esp+0F8h+var_D0]
0x6DCC38: push    eax; int
0x6DCC39: fsubrp  st(1), st
0x6DCC3B: lea     ecx, [esp+0FCh+var_7C]
0x6DCC42: push    ecx; int
0x6DCC43: lea     edx, [esp+100h+var_E8]
0x6DCC47: push    edx; int
0x6DCC48: fstp    [esp+104h+var_D8]
0x6DCC4C: fld     [esp+104h+var_D8]
0x6DCC50: lea     eax, [esp+104h+var_C4]
0x6DCC54: push    eax; int
0x6DCC55: mov     eax, [esp+108h+var_CC]
0x6DCC59: mov     ecx, esi
0x6DCC5B: imul    ecx, eax
0x6DCC5E: add     eax, 0FFFFFFFFh
0x6DCC61: imul    eax, esi
0x6DCC64: push    ebp; int
0x6DCC65: add     ecx, edi
0x6DCC67: push    ecx; int
0x6DCC68: add     eax, edi
0x6DCC6A: push    eax; int
0x6DCC6B: push    ecx
0x6DCC6C: fstp    [esp+118h+var_118]; float
0x6DCC6F: call    sub_6BBEE0
0x6DCC74: fld     [esp+118h+var_C8]
0x6DCC78: add     esp, 20h
0x6DCC7B: lea     edx, [esp+0F8h+var_E8]
0x6DCC7F: push    edx; int
0x6DCC80: push    ecx
0x6DCC81: lea     eax, [esp+100h+var_6C]
0x6DCC88: fstp    [esp+100h+var_100]; float
0x6DCC8B: push    eax; int
0x6DCC8C: call    sub_47DA10
0x6DCC91: fld     [esp+104h+var_DC]
0x6DCC95: add     esp, 0Ch
0x6DCC98: push    eax
0x6DCC99: lea     ecx, [esp+0FCh+var_60]
0x6DCCA0: push    ecx
0x6DCCA1: lea     edx, [esp+100h+var_B8]
0x6DCCA5: push    edx; int
0x6DCCA6: push    ecx
0x6DCCA7: lea     eax, [esp+108h+var_54]
0x6DCCAE: fstp    [esp+108h+var_108]; float
0x6DCCB1: push    eax; int
0x6DCCB2: call    sub_47DA10
0x6DCCB7: add     esp, 0Ch
0x6DCCBA: mov     ecx, eax
0x6DCCBC: call    sub_47D9B0
0x6DCCC1: mov     ecx, [eax]
0x6DCCC3: mov     [esp+0F8h+var_B8], ecx
0x6DCCC7: mov     edx, [eax+4]
0x6DCCCA: mov     [esp+0F8h+var_B4], edx
0x6DCCCE: mov     eax, [eax+8]
0x6DCCD1: lea     ecx, [esp+0F8h+var_B8]
0x6DCCD5: mov     [esp+0F8h+var_B0], eax
0x6DCCD9: call    sub_43F350
0x6DCCDE: fstp    st
0x6DCCE0: fld     [esp+0F8h+var_D0]
0x6DCCE4: lea     ecx, [esp+0F8h+var_B8]
0x6DCCE8: fmul    [esp+0F8h+var_C8]
0x6DCCEC: push    ecx
0x6DCCED: fld     [esp+0FCh+var_DC]
0x6DCCF1: lea     edx, [esp+0FCh+var_6C]
0x6DCCF8: fmul    [esp+0FCh+var_D4]
0x6DCCFC: push    edx
0x6DCCFD: lea     ecx, [esp+100h+var_88]
0x6DCD01: faddp   st(1), st
0x6DCD03: fstp    [esp+100h+var_D4]
0x6DCD07: call    sub_498FE0
0x6DCD0C: mov     ecx, [eax]
0x6DCD0E: mov     [esp+0F8h+var_7C], ecx
0x6DCD12: mov     edx, [eax+4]
0x6DCD15: mov     [esp+0F8h+var_78], edx
0x6DCD1C: mov     eax, [eax+8]
0x6DCD1F: mov     [esp+0F8h+var_74], eax
0x6DCD26: jmp     short loc_6DCD2C
0x6DCD28: fstp    st
0x6DCD2A: fstp    st
0x6DCD2C: fld     [esp+0F8h+var_88]
0x6DCD30: fst     [esp+0F8h+var_AC]
0x6DCD34: fld     [esp+0F8h+var_84]
0x6DCD38: fst     [esp+0F8h+var_A0]
0x6DCD3C: fld     [esp+0F8h+var_80]
0x6DCD40: fst     [esp+0F8h+var_94]
0x6DCD44: fld     [esp+0F8h+var_B8]
0x6DCD48: fchs
0x6DCD4A: fstp    [esp+0F8h+var_E8]
0x6DCD4E: fld     [esp+0F8h+var_B4]
0x6DCD52: fchs
0x6DCD54: fstp    [esp+0F8h+var_E4]
0x6DCD58: fld     [esp+0F8h+var_B0]
0x6DCD5C: fchs
0x6DCD5E: fstp    [esp+0F8h+var_E0]
0x6DCD62: fld     [esp+0F8h+var_E8]
0x6DCD66: fstp    [esp+0F8h+var_A8]
0x6DCD6A: fld     [esp+0F8h+var_E4]
0x6DCD6E: fstp    [esp+0F8h+var_9C]
0x6DCD72: fld     [esp+0F8h+var_E0]
0x6DCD76: fstp    [esp+0F8h+var_90]
0x6DCD7A: fld     [esp+0F8h+var_7C]
0x6DCD7E: fchs
0x6DCD80: fstp    [esp+0F8h+var_E8]
0x6DCD84: fld     [esp+0F8h+var_78]
0x6DCD8B: fchs
0x6DCD8D: fstp    [esp+0F8h+var_E4]
0x6DCD91: fld     [esp+0F8h+var_74]
0x6DCD98: fchs
0x6DCD9A: fstp    [esp+0F8h+var_E0]
0x6DCD9E: fld     [esp+0F8h+var_E8]
0x6DCDA2: fstp    [esp+0F8h+var_A4]
0x6DCDA6: fld     [esp+0F8h+var_E4]
0x6DCDAA: fstp    [esp+0F8h+var_98]
0x6DCDAE: fld     [esp+0F8h+var_E0]
0x6DCDB2: fstp    [esp+0F8h+var_8C]
0x6DCDB6: jmp     loc_6DCE9F
0x6DCDBB: movzx   eax, cl
0x6DCDBE: lea     ecx, [esp+0F8h+var_D4]
0x6DCDC2: push    ecx; int
0x6DCDC3: lea     edx, [esp+0FCh+var_7C]
0x6DCDCA: push    edx; int
0x6DCDCB: lea     ecx, [esp+100h+var_B8]
0x6DCDCF: push    ecx; int
0x6DCDD0: mov     ecx, eax
0x6DCDD2: imul    eax, [esp+104h+arg_0]
0x6DCDDA: imul    ecx, [esp+104h+arg_4]
0x6DCDE2: lea     edx, [esp+104h+var_88]
0x6DCDE6: push    edx; int
0x6DCDE7: push    ebp; int
0x6DCDE8: add     ecx, edi
0x6DCDEA: push    ecx; int
0x6DCDEB: add     eax, edi
0x6DCDED: push    eax; int
0x6DCDEE: push    ecx
0x6DCDEF: fstp    [esp+118h+var_118]; float
0x6DCDF2: call    sub_6BBEE0
0x6DCDF7: fld     [esp+118h+var_88]
0x6DCDFE: add     esp, 20h
0x6DCE01: fstp    [esp+0F8h+var_AC]
0x6DCE05: lea     edx, [esp+0F8h+var_88]
0x6DCE09: fld     [esp+0F8h+var_84]
0x6DCE0D: push    edx
0x6DCE0E: fstp    [esp+0FCh+var_A0]
0x6DCE12: lea     eax, [esp+0FCh+var_C4]
0x6DCE16: fld     [esp+0FCh+var_80]
0x6DCE1A: push    eax
0x6DCE1B: mov     ecx, offset dword_B258E8
0x6DCE20: fstp    [esp+100h+var_94]
0x6DCE24: call    sub_4BF9E0
0x6DCE29: fld     [esp+0F8h+var_C4]
0x6DCE2D: fst     [esp+0F8h+var_A8]
0x6DCE31: fld     [esp+0F8h+var_C0]
0x6DCE35: fst     [esp+0F8h+var_9C]
0x6DCE39: fld     [esp+0F8h+var_BC]
0x6DCE3D: fst     [esp+0F8h+var_90]
0x6DCE41: fld     st
0x6DCE43: fld     [esp+0F8h+var_84]
0x6DCE47: fld     st
0x6DCE49: fmulp   st(2), st
0x6DCE4B: fld     st(3)
0x6DCE4D: fld     [esp+0F8h+var_80]
0x6DCE51: fld     st
0x6DCE53: fmulp   st(2), st
0x6DCE55: fxch    st(3)
0x6DCE57: fsubrp  st(1), st
0x6DCE59: fstp    [esp+0F8h+var_E8]
0x6DCE5D: fld     st(1)
0x6DCE5F: fmul    st, st(5)
0x6DCE61: fld     [esp+0F8h+var_88]
0x6DCE65: fld     st
0x6DCE67: fmulp   st(5), st
0x6DCE69: fxch    st(1)
0x6DCE6B: fsubrp  st(4), st
0x6DCE6D: fxch    st(3)
0x6DCE6F: fstp    [esp+0F8h+var_E4]
0x6DCE73: fld     st(2)
0x6DCE75: fmulp   st(4), st
0x6DCE77: fld     st
0x6DCE79: fmulp   st(5), st
0x6DCE7B: fxch    st(3)
0x6DCE7D: fsubrp  st(4), st
0x6DCE7F: fxch    st(3)
0x6DCE81: fstp    [esp+0F8h+var_E0]
0x6DCE85: fld     [esp+0F8h+var_E8]
0x6DCE89: fstp    [esp+0F8h+var_A4]
0x6DCE8D: fld     [esp+0F8h+var_E4]
0x6DCE91: fstp    [esp+0F8h+var_98]
0x6DCE95: fld     [esp+0F8h+var_E0]
0x6DCE99: fstp    [esp+0F8h+var_8C]
0x6DCE9D: fxch    st(2)
0x6DCE9F: movzx   ecx, word ptr [ebx+3Ch]
0x6DCEA3: mov     dl, cl
0x6DCEA5: shr     dl, 6
0x6DCEA8: test    dl, 1
0x6DCEAB: jz      short loc_6DCF13
0x6DCEAD: fld     st(2)
0x6DCEAF: fchs
0x6DCEB1: fstp    [esp+0F8h+var_E8]
0x6DCEB5: fld     st(1)
0x6DCEB7: fchs
0x6DCEB9: fstp    [esp+0F8h+var_E4]
0x6DCEBD: fld     st
0x6DCEBF: fchs
0x6DCEC1: fstp    [esp+0F8h+var_E0]
0x6DCEC5: fld     [esp+0F8h+var_E8]
0x6DCEC9: fstp    [esp+0F8h+var_AC]
0x6DCECD: fld     [esp+0F8h+var_E4]
0x6DCED1: fstp    [esp+0F8h+var_A0]
0x6DCED5: fld     [esp+0F8h+var_E0]
0x6DCED9: fstp    [esp+0F8h+var_94]
0x6DCEDD: fld     [esp+0F8h+var_A8]
0x6DCEE1: fchs
0x6DCEE3: fstp    [esp+0F8h+var_E8]
0x6DCEE7: fld     [esp+0F8h+var_9C]
0x6DCEEB: fchs
0x6DCEED: fstp    [esp+0F8h+var_E4]
0x6DCEF1: fld     [esp+0F8h+var_90]
0x6DCEF5: fchs
0x6DCEF7: fstp    [esp+0F8h+var_E0]
0x6DCEFB: fld     [esp+0F8h+var_E8]
0x6DCEFF: fstp    [esp+0F8h+var_A8]
0x6DCF03: fld     [esp+0F8h+var_E4]
0x6DCF07: fstp    [esp+0F8h+var_9C]
0x6DCF0B: fld     [esp+0F8h+var_E0]
0x6DCF0F: fstp    [esp+0F8h+var_90]
0x6DCF13: movsx   eax, word ptr [ebx+60h]
0x6DCF17: sub     eax, 1
0x6DCF1A: jz      short loc_6DCF8D
0x6DCF1C: sub     eax, 1
0x6DCF1F: jnz     loc_6DCFF3
0x6DCF25: fld     [esp+0F8h+var_AC]
0x6DCF29: fstp    [esp+0F8h+var_E8]
0x6DCF2D: fld     [esp+0F8h+var_A0]
0x6DCF31: fstp    [esp+0F8h+var_E4]
0x6DCF35: fld     [esp+0F8h+var_94]
0x6DCF39: fstp    [esp+0F8h+var_E0]
0x6DCF3D: fld     [esp+0F8h+var_A4]
0x6DCF41: fchs
0x6DCF43: fstp    [esp+0F8h+var_C4]
0x6DCF47: fld     [esp+0F8h+var_98]
0x6DCF4B: fchs
0x6DCF4D: fstp    [esp+0F8h+var_C0]
0x6DCF51: fld     [esp+0F8h+var_8C]
0x6DCF55: fchs
0x6DCF57: fstp    [esp+0F8h+var_BC]
0x6DCF5B: fld     [esp+0F8h+var_C4]
0x6DCF5F: fstp    [esp+0F8h+var_AC]
0x6DCF63: fld     [esp+0F8h+var_C0]
0x6DCF67: fstp    [esp+0F8h+var_A0]
0x6DCF6B: fld     [esp+0F8h+var_BC]
0x6DCF6F: fstp    [esp+0F8h+var_94]
0x6DCF73: fld     [esp+0F8h+var_E8]
0x6DCF77: fstp    [esp+0F8h+var_A4]
0x6DCF7B: fld     [esp+0F8h+var_E4]
0x6DCF7F: fstp    [esp+0F8h+var_98]
0x6DCF83: fld     [esp+0F8h+var_E0]
0x6DCF87: fstp    [esp+0F8h+var_8C]
0x6DCF8B: jmp     short loc_6DCFF3
0x6DCF8D: fld     [esp+0F8h+var_AC]
0x6DCF91: fstp    [esp+0F8h+var_E8]
0x6DCF95: fld     [esp+0F8h+var_A0]
0x6DCF99: fstp    [esp+0F8h+var_E4]
0x6DCF9D: fld     [esp+0F8h+var_94]
0x6DCFA1: fstp    [esp+0F8h+var_E0]
0x6DCFA5: fld     [esp+0F8h+var_A8]
0x6DCFA9: fchs
0x6DCFAB: fstp    [esp+0F8h+var_C4]
0x6DCFAF: fld     [esp+0F8h+var_9C]
0x6DCFB3: fchs
0x6DCFB5: fstp    [esp+0F8h+var_C0]
0x6DCFB9: fld     [esp+0F8h+var_90]
0x6DCFBD: fchs
0x6DCFBF: fstp    [esp+0F8h+var_BC]
0x6DCFC3: fld     [esp+0F8h+var_C4]
0x6DCFC7: fstp    [esp+0F8h+var_AC]
0x6DCFCB: fld     [esp+0F8h+var_C0]
0x6DCFCF: fstp    [esp+0F8h+var_A0]
0x6DCFD3: fld     [esp+0F8h+var_BC]
0x6DCFD7: fstp    [esp+0F8h+var_94]
0x6DCFDB: fld     [esp+0F8h+var_E8]
0x6DCFDF: fstp    [esp+0F8h+var_A8]
0x6DCFE3: fld     [esp+0F8h+var_E4]
0x6DCFE7: fstp    [esp+0F8h+var_9C]
0x6DCFEB: fld     [esp+0F8h+var_E0]
0x6DCFEF: fstp    [esp+0F8h+var_90]
0x6DCFF3: shr     cl, 3
0x6DCFF6: test    cl, 1
0x6DCFF9: jz      loc_6DD0CB
0x6DCFFF: test    byte ptr ds:0B3DD9Ch, 1
0x6DD006: jnz     short loc_6DD021
0x6DD008: fld     dword ptr ds:0B3F9A4h
0x6DD00E: or      dword ptr ds:0B3DD9Ch, 1
0x6DD015: fdivr   qword ptr ds:0A3C800h
0x6DD01B: fstp    dword ptr ds:0B3DD98h
0x6DD021: fild    dword ptr [ebx+68h]
0x6DD024: fmul    dword ptr [ebx+58h]
0x6DD027: fstp    [esp+0F8h+var_D0]
0x6DD02B: fld     [esp+0F8h+var_D4]
0x6DD02F: fld     dword ptr [ebx+64h]
0x6DD032: fcomp   st(1)
0x6DD034: fnstsw  ax
0x6DD036: test    ah, 41h
0x6DD039: jnz     loc_6DD0C7
0x6DD03F: fstp    st(3)
0x6DD041: fstp    st(1)
0x6DD043: fstp    st
0x6DD045: fdiv    dword ptr [ebx+64h]
0x6DD048: fstp    [esp+0F8h+var_D8]
0x6DD04C: fld     [esp+0F8h+var_D8]
0x6DD050: call    __CIatan
0x6DD055: fstp    [esp+0F8h+var_D8]
0x6DD059: fld     [esp+0F8h+var_D8]
0x6DD05D: fmul    dword ptr ds:0B3DD98h
0x6DD063: fmul    [esp+0F8h+var_D0]
0x6DD067: fstp    [esp+0F8h+var_D0]
0x6DD06B: fld     [esp+0F8h+var_84]
0x6DD06F: fld     [esp+0F8h+var_88]
0x6DD073: fld     [esp+0F8h+var_80]
0x6DD077: fxch    st(1)
0x6DD079: fxch    st(2)
0x6DD07B: fxch    st(1)
0x6DD07D: sub     esp, 10h
0x6DD080: fstp    [esp+108h+var_FC]; float
0x6DD084: lea     ecx, [esp+108h+var_48]
0x6DD08B: fstp    [esp+108h+var_100]; float
0x6DD08F: fstp    [esp+108h+var_104]; float
0x6DD093: fld     [esp+108h+var_D0]
0x6DD097: fstp    [esp+108h+var_108]; float
0x6DD09A: call    sub_70FE20
0x6DD09F: lea     eax, [esp+0F8h+var_AC]
0x6DD0A3: push    eax
0x6DD0A4: lea     ecx, [esp+0FCh+var_24]
0x6DD0AB: push    ecx
0x6DD0AC: lea     ecx, [esp+100h+var_48]
0x6DD0B3: call    NiMAtrix33_Multiply
0x6DD0B8: mov     ecx, 9
0x6DD0BD: mov     esi, eax
0x6DD0BF: lea     edi, [esp+0F8h+var_AC]
0x6DD0C3: rep movsd
0x6DD0C5: jmp     short loc_6DD0D1
0x6DD0C7: fstp    st
0x6DD0C9: jmp     short loc_6DD07D
0x6DD0CB: fstp    st(2)
0x6DD0CD: fstp    st
0x6DD0CF: fstp    st
0x6DD0D1: mov     edi, [esp+0F8h+arg_C]
0x6DD0D8: mov     ecx, 9
0x6DD0DD: lea     esi, [esp+0F8h+var_AC]
0x6DD0E1: rep movsd
0x6DD0E3: pop     edi
0x6DD0E4: pop     esi
0x6DD0E5: pop     ebp
0x6DD0E6: pop     ebx
0x6DD0E7: add     esp, 0E8h
0x6DD0ED: retn    10h
