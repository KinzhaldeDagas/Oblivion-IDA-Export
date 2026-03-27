0x70CC90: sub     esp, 58h
0x70CC93: fld     dword ptr [ecx+64h]
0x70CC96: mov     eax, [ecx+88h]
0x70CC9C: fstp    [esp+58h+var_C]
0x70CCA0: mov     edx, [ecx+8Ch]
0x70CCA6: fld     dword ptr [ecx+70h]
0x70CCA9: mov     [esp+58h+var_18], eax
0x70CCAD: fstp    [esp+58h+var_8]
0x70CCB1: mov     eax, [ecx+90h]
0x70CCB7: fld     dword ptr [ecx+7Ch]
0x70CCBA: mov     [esp+58h+var_14], edx
0x70CCBE: fstp    [esp+58h+var_4]
0x70CCC2: mov     [esp+58h+var_10], eax
0x70CCC6: fld     dword ptr [ecx+68h]
0x70CCC9: fstp    [esp+58h+var_30]
0x70CCCD: fld     dword ptr [ecx+74h]
0x70CCD0: fstp    [esp+58h+var_2C]
0x70CCD4: fld     dword ptr [ecx+80h]
0x70CCDA: fstp    [esp+58h+var_28]
0x70CCDE: fld     dword ptr [ecx+6Ch]
0x70CCE1: fstp    [esp+58h+var_24]
0x70CCE5: fld     dword ptr [ecx+78h]
0x70CCE8: fstp    [esp+58h+var_20]
0x70CCEC: fld     dword ptr [ecx+84h]
0x70CCF2: fstp    [esp+58h+var_1C]
0x70CCF6: fld     [esp+58h+var_18]
0x70CCFA: fld     st
0x70CCFC: fld     [esp+58h+var_24]
0x70CD00: fld     st
0x70CD02: fmulp   st(2), st
0x70CD04: fld     [esp+58h+var_14]
0x70CD08: fld     st
0x70CD0A: fmul    [esp+58h+var_20]
0x70CD0E: faddp   st(3), st
0x70CD10: fld     [esp+58h+var_10]
0x70CD14: fld     st
0x70CD16: fmul    [esp+58h+var_1C]
0x70CD1A: faddp   st(4), st
0x70CD1C: fxch    st(3)
0x70CD1E: fstp    [esp+58h+var_3C]
0x70CD22: fld     [esp+58h+var_3C]
0x70CD26: fchs
0x70CD28: fstp    [esp+58h+var_40]
0x70CD2C: fld     st(3)
0x70CD2E: fmul    [esp+58h+var_30]
0x70CD32: fld     st(1)
0x70CD34: fmul    [esp+58h+var_2C]
0x70CD38: faddp   st(1), st
0x70CD3A: fld     st(3)
0x70CD3C: fmul    [esp+58h+var_28]
0x70CD40: faddp   st(1), st
0x70CD42: fstp    [esp+58h+var_3C]
0x70CD46: fld     [esp+58h+var_3C]
0x70CD4A: fchs
0x70CD4C: fstp    [esp+58h+var_3C]
0x70CD50: fld     [esp+58h+var_8]
0x70CD54: fld     st
0x70CD56: fmulp   st(2), st
0x70CD58: fld     [esp+58h+var_C]
0x70CD5C: fld     st
0x70CD5E: fmulp   st(6), st
0x70CD60: fxch    st(2)
0x70CD62: faddp   st(5), st
0x70CD64: fld     [esp+58h+var_4]
0x70CD68: fld     st
0x70CD6A: fmulp   st(5), st
0x70CD6C: fxch    st(5)
0x70CD6E: faddp   st(4), st
0x70CD70: fxch    st(3)
0x70CD72: fstp    [esp+58h+var_44]
0x70CD76: fld     [esp+58h+var_44]
0x70CD7A: fchs
0x70CD7C: fstp    [esp+58h+var_44]
0x70CD80: fld     dword ptr [ecx+0F0h]
0x70CD86: fadd    dword ptr [ecx+0ECh]
0x70CD8C: fstp    [esp+58h+var_50]
0x70CD90: fld     dword ptr [ecx+0F8h]
0x70CD96: fadd    dword ptr [ecx+0F4h]
0x70CD9C: fstp    [esp+58h+var_4C]
0x70CDA0: fld     dword ptr [ecx+0F0h]
0x70CDA6: fsub    dword ptr [ecx+0ECh]
0x70CDAC: fld1
0x70CDAE: cmp     byte ptr [ecx+104h], 0
0x70CDB5: fld     st
0x70CDB7: fdivrp  st(2), st
0x70CDB9: fxch    st(1)
0x70CDBB: fstp    [esp+58h+var_54]
0x70CDBF: fld     dword ptr [ecx+0F4h]
0x70CDC5: fsub    dword ptr [ecx+0F8h]
0x70CDCB: fdivr   st, st(1)
0x70CDCD: fstp    [esp+58h+var_58]
0x70CDD0: fld     dword ptr [ecx+100h]
0x70CDD6: fsub    dword ptr [ecx+0FCh]
0x70CDDC: fdivr   st, st(1)
0x70CDDE: fstp    [esp+58h+var_48]
0x70CDE2: jz      loc_70CF00
0x70CDE8: fld     [esp+58h+var_54]
0x70CDEC: fld     st
0x70CDEE: fld     qword ptr ds:0A3D0C0h
0x70CDF4: fmul    st(1), st
0x70CDF6: fxch    st(1)
0x70CDF8: fstp    [esp+58h+var_54]
0x70CDFC: fmul    [esp+58h+var_58]
0x70CDFF: fstp    [esp+58h+var_38]
0x70CE03: fld     [esp+58h+var_48]
0x70CE07: fdivp   st(2), st
0x70CE09: fxch    st(1)
0x70CE0B: fstp    [esp+58h+var_34]
0x70CE0F: fld     [esp+58h+var_54]
0x70CE13: fld     st
0x70CE15: fmulp   st(4), st
0x70CE17: fxch    st(3)
0x70CE19: fstp    dword ptr [ecx+0ACh]
0x70CE1F: fld     [esp+58h+var_20]
0x70CE23: fmul    st, st(3)
0x70CE25: fstp    dword ptr [ecx+0B0h]
0x70CE2B: fld     [esp+58h+var_1C]
0x70CE2F: fmul    st, st(3)
0x70CE31: fstp    dword ptr [ecx+0B4h]
0x70CE37: fdivr   [esp+58h+var_50]
0x70CE3B: fstp    [esp+58h+var_48]
0x70CE3F: fld     [esp+58h+var_48]
0x70CE43: fld     [esp+58h+var_40]
0x70CE47: fmulp   st(3), st
0x70CE49: faddp   st(2), st
0x70CE4B: fxch    st(1)
0x70CE4D: fstp    dword ptr [ecx+0B8h]
0x70CE53: fld     [esp+58h+var_30]
0x70CE57: fld     [esp+58h+var_38]
0x70CE5B: fld     st
0x70CE5D: fmulp   st(2), st
0x70CE5F: fxch    st(1)
0x70CE61: fstp    dword ptr [ecx+0BCh]
0x70CE67: fld     [esp+58h+var_2C]
0x70CE6B: fmul    st, st(1)
0x70CE6D: fstp    dword ptr [ecx+0C0h]
0x70CE73: fld     [esp+58h+var_28]
0x70CE77: fmul    st, st(1)
0x70CE79: fstp    dword ptr [ecx+0C4h]
0x70CE7F: fld     [esp+58h+var_4C]
0x70CE83: fdiv    [esp+58h+var_58]
0x70CE86: fstp    [esp+58h+var_38]
0x70CE8A: fld     [esp+58h+var_3C]
0x70CE8E: fmulp   st(1), st
0x70CE90: fadd    [esp+58h+var_38]
0x70CE94: fstp    dword ptr [ecx+0C8h]
0x70CE9A: fld     [esp+58h+var_34]
0x70CE9E: fld     st
0x70CEA0: fmulp   st(2), st
0x70CEA2: fxch    st(1)
0x70CEA4: fstp    dword ptr [ecx+0CCh]
0x70CEAA: fld     st
0x70CEAC: fmulp   st(2), st
0x70CEAE: fxch    st(1)
0x70CEB0: fstp    dword ptr [ecx+0D0h]
0x70CEB6: fld     st
0x70CEB8: fmulp   st(2), st
0x70CEBA: fxch    st(1)
0x70CEBC: fstp    dword ptr [ecx+0D4h]
0x70CEC2: fld     dword ptr [ecx+0FCh]
0x70CEC8: fchs
0x70CECA: fmul    st, st(1)
0x70CECC: fstp    [esp+58h+var_34]
0x70CED0: fld     [esp+58h+var_44]
0x70CED4: fmulp   st(1), st
0x70CED6: fadd    [esp+58h+var_34]
0x70CEDA: fstp    dword ptr [ecx+0D8h]
0x70CEE0: fldz
0x70CEE2: fst     dword ptr [ecx+0DCh]
0x70CEE8: fst     dword ptr [ecx+0E0h]
0x70CEEE: fstp    dword ptr [ecx+0E4h]
0x70CEF4: fld1
0x70CEF6: fstp    dword ptr [ecx+0E8h]
0x70CEFC: add     esp, 58h
0x70CEFF: retn
0x70CF00: fstp    st
0x70CF02: fld     [esp+58h+var_54]
0x70CF06: fld     st
0x70CF08: fld     qword ptr ds:0A3D0C0h
0x70CF0E: fmul    st(1), st
0x70CF10: fxch    st(1)
0x70CF12: fstp    [esp+58h+var_38]
0x70CF16: fld     [esp+58h+var_50]
0x70CF1A: fchs
0x70CF1C: fmulp   st(2), st
0x70CF1E: fxch    st(1)
0x70CF20: fstp    [esp+58h+var_34]
0x70CF24: fld     [esp+58h+var_58]
0x70CF27: fld     st
0x70CF29: fmulp   st(2), st
0x70CF2B: fxch    st(1)
0x70CF2D: fstp    [esp+58h+var_58]
0x70CF30: fld     [esp+58h+var_4C]
0x70CF34: fchs
0x70CF36: fmulp   st(1), st
0x70CF38: fstp    [esp+58h+var_4C]
0x70CF3C: fld     dword ptr [ecx+100h]
0x70CF42: fmul    [esp+58h+var_48]
0x70CF46: fstp    [esp+58h+var_48]
0x70CF4A: fld     [esp+58h+var_34]
0x70CF4E: fld     st
0x70CF50: fmul    st, st(2)
0x70CF52: fld     [esp+58h+var_38]
0x70CF56: fld     st
0x70CF58: fmulp   st(5), st
0x70CF5A: fxch    st(1)
0x70CF5C: faddp   st(4), st
0x70CF5E: fxch    st(3)
0x70CF60: fstp    dword ptr [ecx+0ACh]
0x70CF66: fld     st
0x70CF68: fmul    st, st(4)
0x70CF6A: fld     st(3)
0x70CF6C: fmul    [esp+58h+var_20]
0x70CF70: faddp   st(1), st
0x70CF72: fstp    dword ptr [ecx+0B0h]
0x70CF78: fld     st
0x70CF7A: fmul    st, st(5)
0x70CF7C: fld     st(3)
0x70CF7E: fmul    [esp+58h+var_1C]
0x70CF82: faddp   st(1), st
0x70CF84: fstp    dword ptr [ecx+0B4h]
0x70CF8A: fld     [esp+58h+var_44]
0x70CF8E: fld     st
0x70CF90: fmulp   st(2), st
0x70CF92: fld     [esp+58h+var_40]
0x70CF96: fmulp   st(4), st
0x70CF98: fxch    st(1)
0x70CF9A: faddp   st(3), st
0x70CF9C: fxch    st(2)
0x70CF9E: fstp    dword ptr [ecx+0B8h]
0x70CFA4: fld     [esp+58h+var_4C]
0x70CFA8: fld     st
0x70CFAA: fmul    st, st(2)
0x70CFAC: fld     [esp+58h+var_58]
0x70CFAF: fmul    [esp+58h+var_30]
0x70CFB3: faddp   st(1), st
0x70CFB5: fstp    dword ptr [ecx+0BCh]
0x70CFBB: fld     st
0x70CFBD: fmul    st, st(4)
0x70CFBF: fld     [esp+58h+var_58]
0x70CFC2: fmul    [esp+58h+var_2C]
0x70CFC6: faddp   st(1), st
0x70CFC8: fstp    dword ptr [ecx+0C0h]
0x70CFCE: fld     st
0x70CFD0: fmul    st, st(5)
0x70CFD2: fld     [esp+58h+var_58]
0x70CFD5: fmul    [esp+58h+var_28]
0x70CFD9: faddp   st(1), st
0x70CFDB: fstp    dword ptr [ecx+0C4h]
0x70CFE1: fmul    st, st(2)
0x70CFE3: fld     [esp+58h+var_58]
0x70CFE6: fmul    [esp+58h+var_3C]
0x70CFEA: faddp   st(1), st
0x70CFEC: fstp    dword ptr [ecx+0C8h]
0x70CFF2: fld     [esp+58h+var_48]
0x70CFF6: fld     st
0x70CFF8: fmul    st, st(2)
0x70CFFA: fstp    dword ptr [ecx+0CCh]
0x70D000: fld     st
0x70D002: fmul    st, st(4)
0x70D004: fstp    dword ptr [ecx+0D0h]
0x70D00A: fld     st
0x70D00C: fmul    st, st(5)
0x70D00E: fstp    dword ptr [ecx+0D4h]
0x70D014: fld     dword ptr [ecx+0FCh]
0x70D01A: fchs
0x70D01C: fmul    st, st(1)
0x70D01E: fstp    [esp+58h+var_34]
0x70D022: fld     st(2)
0x70D024: fmulp   st(1), st
0x70D026: fadd    [esp+58h+var_34]
0x70D02A: fstp    dword ptr [ecx+0D8h]
0x70D030: fstp    dword ptr [ecx+0DCh]
0x70D036: fxch    st(1)
0x70D038: fstp    dword ptr [ecx+0E0h]
0x70D03E: fxch    st(1)
0x70D040: fstp    dword ptr [ecx+0E4h]
0x70D046: fstp    dword ptr [ecx+0E8h]
0x70D04C: add     esp, 58h
0x70D04F: retn
