0x40FA20: sub     esp, 0Ch
0x40FA23: push    ebx
0x40FA24: push    ebp
0x40FA25: push    esi
0x40FA26: push    edi
0x40FA27: mov     edi, [esp+1Ch+arg_0]
0x40FA2B: mov     esi, [edi]
0x40FA2D: call    sub_40F970
0x40FA32: mov     eax, [edi]
0x40FA34: mov     ecx, [eax]
0x40FA36: mov     edx, [ecx+0E4h]
0x40FA3C: push    0
0x40FA3E: push    7
0x40FA40: push    eax
0x40FA41: call    edx
0x40FA43: mov     eax, [edi]
0x40FA45: mov     ecx, [eax]
0x40FA47: mov     edx, [ecx+0E4h]
0x40FA4D: push    0
0x40FA4F: push    0Eh
0x40FA51: push    eax
0x40FA52: call    edx
0x40FA54: mov     eax, [edi]
0x40FA56: mov     ecx, [eax]
0x40FA58: mov     edx, [ecx+0E4h]
0x40FA5E: push    0Fh
0x40FA60: push    0A8h ; '¨'
0x40FA65: push    eax
0x40FA66: call    edx
0x40FA68: fild    dword ptr [edi+3Ch]
0x40FA6B: mov     eax, [edi+3Ch]
0x40FA6E: test    eax, eax
0x40FA70: mov     ebx, [edi+40h]
0x40FA73: jge     short loc_40FA7B
0x40FA75: fadd    ds:flt_A2FC78
0x40FA7B: cmp     dword ptr [edi+28h], 0
0x40FA7F: fstp    [esp+1Ch+arg_0]
0x40FA83: fld     [esp+1Ch+arg_0]
0x40FA87: mov     [esp+1Ch+var_C], 0
0x40FA8F: fld     st
0x40FA91: fmul    [esp+1Ch+arg_C]
0x40FA95: fstp    [esp+1Ch+var_8]
0x40FA99: fmul    [esp+1Ch+arg_10]
0x40FA9D: fstp    [esp+1Ch+var_4]
0x40FAA1: fld     [esp+1Ch+arg_8]
0x40FAA5: fstp    [esp+1Ch+arg_8]
0x40FAA9: jbe     loc_40FB89
0x40FAAF: nop
0x40FAB0: fld     [esp+1Ch+arg_4]
0x40FAB4: xor     ebp, ebp
0x40FAB6: cmp     [edi+24h], ebp
0x40FAB9: fstp    [esp+1Ch+arg_0]
0x40FABD: jbe     short loc_40FB1A
0x40FABF: nop
0x40FAC0: mov     edx, [ebx]
0x40FAC2: mov     eax, [edi]
0x40FAC4: mov     ecx, [eax]
0x40FAC6: push    edx
0x40FAC7: push    0
0x40FAC9: push    eax
0x40FACA: mov     eax, [ecx+104h]
0x40FAD0: call    eax
0x40FAD2: fld     [esp+1Ch+arg_10]
0x40FAD6: mov     eax, [edi+3Ch]
0x40FAD9: mov     esi, [edi]
0x40FADB: push    eax; int
0x40FADC: push    eax; int
0x40FADD: sub     esp, 10h
0x40FAE0: fstp    [esp+34h+var_28]; float
0x40FAE4: add     ebx, 4
0x40FAE7: fld     [esp+34h+arg_C]
0x40FAEB: fstp    [esp+34h+var_2C]; float
0x40FAEF: fld     [esp+34h+arg_8]
0x40FAF3: fstp    [esp+34h+var_30]; float
0x40FAF7: fld     [esp+34h+arg_0]
0x40FAFB: fstp    [esp+34h+var_34]; float
0x40FAFE: call    sub_40F760
0x40FB03: fld     [esp+34h+arg_0]
0x40FB07: add     ebp, 1
0x40FB0A: fadd    [esp+34h+var_8]
0x40FB0E: add     esp, 18h
0x40FB11: cmp     ebp, [edi+24h]
0x40FB14: fstp    [esp+1Ch+arg_0]
0x40FB18: jb      short loc_40FAC0
0x40FB1A: cmp     dword ptr [edi+2Ch], 0
0x40FB1E: jz      short loc_40FB69
0x40FB20: mov     edx, [ebx]
0x40FB22: mov     eax, [edi]
0x40FB24: mov     ecx, [eax]
0x40FB26: push    edx
0x40FB27: push    0
0x40FB29: push    eax
0x40FB2A: mov     eax, [ecx+104h]
0x40FB30: call    eax
0x40FB32: fld     [esp+1Ch+arg_10]
0x40FB36: mov     ecx, [edi+3Ch]
0x40FB39: mov     edx, [edi+2Ch]
0x40FB3C: mov     esi, [edi]
0x40FB3E: push    ecx; int
0x40FB3F: push    edx; int
0x40FB40: sub     esp, 10h
0x40FB43: fstp    [esp+34h+var_28]; float
0x40FB47: add     ebx, 4
0x40FB4A: fld     [esp+34h+arg_C]
0x40FB4E: fstp    [esp+34h+var_2C]; float
0x40FB52: fld     [esp+34h+arg_8]
0x40FB56: fstp    [esp+34h+var_30]; float
0x40FB5A: fld     [esp+34h+arg_0]
0x40FB5E: fstp    [esp+34h+var_34]; float
0x40FB61: call    sub_40F760
0x40FB66: add     esp, 18h
0x40FB69: fld     [esp+1Ch+arg_8]
0x40FB6D: mov     eax, [esp+1Ch+var_C]
0x40FB71: fadd    [esp+1Ch+var_4]
0x40FB75: add     eax, 1
0x40FB78: cmp     eax, [edi+28h]
0x40FB7B: mov     [esp+1Ch+var_C], eax
0x40FB7F: fstp    [esp+1Ch+arg_8]
0x40FB83: jb      loc_40FAB0
0x40FB89: cmp     dword ptr [edi+30h], 0
0x40FB8D: jz      loc_40FC4B
0x40FB93: fld     [esp+1Ch+arg_4]
0x40FB97: xor     ebp, ebp
0x40FB99: cmp     [edi+24h], ebp
0x40FB9C: fstp    [esp+1Ch+arg_0]
0x40FBA0: jbe     short loc_40FBFF
0x40FBA2: mov     edx, [ebx]
0x40FBA4: mov     eax, [edi]
0x40FBA6: mov     ecx, [eax]
0x40FBA8: push    edx
0x40FBA9: push    0
0x40FBAB: push    eax
0x40FBAC: mov     eax, [ecx+104h]
0x40FBB2: call    eax
0x40FBB4: fld     [esp+1Ch+arg_10]
0x40FBB8: mov     ecx, [edi+30h]
0x40FBBB: mov     edx, [edi+3Ch]
0x40FBBE: mov     esi, [edi]
0x40FBC0: push    ecx; int
0x40FBC1: push    edx; int
0x40FBC2: sub     esp, 10h
0x40FBC5: fstp    [esp+34h+var_28]; float
0x40FBC9: add     ebx, 4
0x40FBCC: fld     [esp+34h+arg_C]
0x40FBD0: fstp    [esp+34h+var_2C]; float
0x40FBD4: fld     [esp+34h+arg_8]
0x40FBD8: fstp    [esp+34h+var_30]; float
0x40FBDC: fld     [esp+34h+arg_0]
0x40FBE0: fstp    [esp+34h+var_34]; float
0x40FBE3: call    sub_40F760
0x40FBE8: fld     [esp+34h+arg_0]
0x40FBEC: add     ebp, 1
0x40FBEF: fadd    [esp+34h+var_8]
0x40FBF3: add     esp, 18h
0x40FBF6: cmp     ebp, [edi+24h]
0x40FBF9: fstp    [esp+1Ch+arg_0]
0x40FBFD: jb      short loc_40FBA2
0x40FBFF: cmp     dword ptr [edi+2Ch], 0
0x40FC03: jz      short loc_40FC4B
0x40FC05: mov     edx, [ebx]
0x40FC07: mov     eax, [edi]
0x40FC09: mov     ecx, [eax]
0x40FC0B: push    edx
0x40FC0C: push    0
0x40FC0E: push    eax
0x40FC0F: mov     eax, [ecx+104h]
0x40FC15: call    eax
0x40FC17: fld     [esp+1Ch+arg_10]
0x40FC1B: mov     ecx, [edi+30h]
0x40FC1E: mov     edx, [edi+2Ch]
0x40FC21: mov     esi, [edi]
0x40FC23: push    ecx; int
0x40FC24: push    edx; int
0x40FC25: sub     esp, 10h
0x40FC28: fstp    [esp+34h+var_28]; float
0x40FC2C: fld     [esp+34h+arg_C]
0x40FC30: fstp    [esp+34h+var_2C]; float
0x40FC34: fld     [esp+34h+arg_8]
0x40FC38: fstp    [esp+34h+var_30]; float
0x40FC3C: fld     [esp+34h+arg_0]
0x40FC40: fstp    [esp+34h+var_34]; float
0x40FC43: call    sub_40F760
0x40FC48: add     esp, 18h
0x40FC4B: mov     eax, [edi]
0x40FC4D: mov     ecx, [eax]
0x40FC4F: mov     edx, [ecx+0E4h]
0x40FC55: push    1
0x40FC57: push    7
0x40FC59: push    eax
0x40FC5A: call    edx
0x40FC5C: mov     eax, [edi]
0x40FC5E: mov     ecx, [eax]
0x40FC60: mov     edx, [ecx+0E4h]
0x40FC66: push    1
0x40FC68: push    0Eh
0x40FC6A: push    eax
0x40FC6B: call    edx
0x40FC6D: mov     eax, [edi]
0x40FC6F: mov     ecx, [eax]
0x40FC71: mov     edx, [ecx+0E4h]
0x40FC77: push    1
0x40FC79: push    1Bh
0x40FC7B: push    eax
0x40FC7C: call    edx
0x40FC7E: mov     edi, [edi]
0x40FC80: mov     eax, [edi]
0x40FC82: mov     ecx, [eax+104h]
0x40FC88: push    0
0x40FC8A: push    0
0x40FC8C: push    edi
0x40FC8D: call    ecx
0x40FC8F: pop     edi
0x40FC90: pop     esi
0x40FC91: pop     ebp
0x40FC92: pop     ebx
0x40FC93: add     esp, 0Ch
0x40FC96: retn
