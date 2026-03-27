0x78CCA0: push    ebp
0x78CCA1: lea     ebp, [esp-3Ch]
0x78CCA5: sub     esp, 3Ch
0x78CCA8: push    0FFFFFFFFh
0x78CCAA: push    offset SEH_78CCA0
0x78CCAF: mov     eax, large fs:0
0x78CCB5: push    eax
0x78CCB6: sub     esp, 60h
0x78CCB9: push    ebx
0x78CCBA: push    esi
0x78CCBB: push    edi
0x78CCBC: mov     eax, ds:0B30AACh
0x78CCC1: xor     eax, ebp
0x78CCC3: push    eax
0x78CCC4: lea     eax, [ebp+3Ch+var_48]
0x78CCC7: mov     large fs:0, eax
0x78CCCD: mov     [ebp+3Ch+var_4C], esp
0x78CCD0: mov     ebx, ecx
0x78CCD2: mov     [ebp+3Ch+var_4], ebx
0x78CCD5: cmp     byte ptr [ebx+45h], 0
0x78CCD9: mov     [ebp+3Ch+var_40], 0
0x78CCE0: jnz     loc_78D07F
0x78CCE6: mov     eax, [ebx+5Ch]
0x78CCE9: mov     ecx, [ebp+3Ch+arg_4]
0x78CCEC: mov     ds:0B429C4h, eax
0x78CCF1: push    ecx
0x78CCF2: mov     ecx, [ebx]
0x78CCF4: call    sub_7A24F0
0x78CCF9: fld     dword ptr [ebx+24h]
0x78CCFC: push    ecx
0x78CCFD: mov     ecx, [ebx]
0x78CCFF: fstp    [esp+0BCh+var_BC]; float
0x78CD02: call    sub_7A45F0
0x78CD07: mov     edx, [ebx+0Ch]
0x78CD0A: mov     eax, [ebx+60h]
0x78CD0D: mov     ecx, [ebx+5Ch]
0x78CD10: push    edx
0x78CD11: push    eax
0x78CD12: call    sub_7A1CD0
0x78CD17: mov     ecx, [ebx+60h]
0x78CD1A: movzx   eax, word ptr [ecx+20h]
0x78CD1E: mov     esi, [ebx]
0x78CD20: mov     [ebx+64h], ax
0x78CD24: mov     eax, [esi+98h]
0x78CD2A: test    eax, eax
0x78CD2C: jz      short loc_78CD47
0x78CD2E: mov     ecx, [esi+9Ch]
0x78CD34: sub     ecx, eax
0x78CD36: mov     eax, 30C30C31h
0x78CD3B: imul    ecx
0x78CD3D: sar     edx, 4
0x78CD40: mov     eax, edx
0x78CD42: shr     eax, 1Fh
0x78CD45: add     eax, edx
0x78CD47: push    eax
0x78CD48: lea     ecx, [esi+84h]
0x78CD4E: call    sub_7A5740
0x78CD53: mov     edx, [ebx+0Ch]
0x78CD56: mov     eax, [edx+38h]
0x78CD59: cmp     eax, 1
0x78CD5C: jnz     short loc_78CD65
0x78CD5E: mov     ecx, ebx
0x78CD60: call    sub_78C370
0x78CD65: mov     eax, [ebx]
0x78CD67: mov     ecx, [ebx+10h]
0x78CD6A: add     eax, 0F4h ; 'ô'
0x78CD6F: push    eax
0x78CD70: call    sub_793C00
0x78CD75: mov     eax, [ebx]
0x78CD77: mov     ecx, [eax+0D4h]
0x78CD7D: mov     edx, [eax+0C0h]
0x78CD83: add     eax, 84h ; '„'
0x78CD88: push    eax
0x78CD89: push    ecx
0x78CD8A: mov     ecx, [ebx+8]
0x78CD8D: push    edx
0x78CD8E: call    sub_799320
0x78CD93: cmp     dword ptr [ebx+4Ch], 0
0x78CD97: jz      short loc_78CDEB
0x78CD99: xor     esi, esi
0x78CD9B: jmp     short loc_78CDA0
0x78CD9D: align 10h
0x78CDA0: mov     eax, [ebx+4Ch]
0x78CDA3: cmp     esi, [eax]
0x78CDA5: jge     short loc_78CDBE
0x78CDA7: mov     ecx, esi
0x78CDA9: shl     ecx, 5
0x78CDAC: add     ecx, [eax+4]
0x78CDAF: push    ecx
0x78CDB0: mov     ecx, [ebx+8]
0x78CDB3: push    esi
0x78CDB4: call    sub_798550
0x78CDB9: add     esi, 1
0x78CDBC: jmp     short loc_78CDA0
0x78CDBE: xor     esi, esi
0x78CDC0: mov     eax, [ebx+4Ch]
0x78CDC3: cmp     esi, [eax+10h]
0x78CDC6: jge     short loc_78CDEB
0x78CDC8: movzx   edx, byte ptr ds:0B4297Dh
0x78CDCF: mov     ecx, esi
0x78CDD1: shl     ecx, 5
0x78CDD4: add     ecx, [eax+14h]
0x78CDD7: push    edx; char
0x78CDD8: mov     edx, [ebx+60h]
0x78CDDB: push    ecx; int
0x78CDDC: mov     ecx, [ebx+5Ch]
0x78CDDF: push    esi; float
0x78CDE0: push    edx; int
0x78CDE1: call    sub_79A810
0x78CDE6: add     esi, 1
0x78CDE9: jmp     short loc_78CDC0
0x78CDEB: cmp     byte ptr [ebp+3Ch+arg_8], 0
0x78CDEF: jz      short loc_78CE05
0x78CDF1: mov     ecx, [ebx+4]
0x78CDF4: push    0
0x78CDF6: call    sub_7977D0
0x78CDFB: mov     ecx, [ebx+60h]
0x78CDFE: push    0
0x78CE00: call    sub_7977D0
0x78CE05: mov     esi, [ebp+3Ch+arg_0]
0x78CE08: test    esi, esi
0x78CE0A: jz      short loc_78CE52
0x78CE0C: lea     ecx, [ebp+3Ch+var_8C]
0x78CE0F: call    sub_7A66B0
0x78CE14: mov     ecx, 10h
0x78CE19: lea     edi, [ebp+3Ch+var_8C]
0x78CE1C: lea     eax, [ebp+3Ch+var_8C]
0x78CE1F: rep movsd
0x78CE21: mov     ecx, [ebx+4]
0x78CE24: push    eax
0x78CE25: call    sub_7948C0
0x78CE2A: lea     ecx, [ebp+3Ch+var_8C]
0x78CE2D: push    ecx
0x78CE2E: mov     ecx, [ebx+8]
0x78CE31: call    sub_798360
0x78CE36: mov     ecx, [ebx+60h]
0x78CE39: lea     edx, [ebp+3Ch+var_8C]
0x78CE3C: push    edx
0x78CE3D: call    sub_7948C0
0x78CE42: mov     ecx, [ebx+58h]
0x78CE45: test    ecx, ecx
0x78CE47: jz      short loc_78CE52
0x78CE49: lea     eax, [ebp+3Ch+var_8C]
0x78CE4C: push    eax
0x78CE4D: call    sub_788BE0
0x78CE52: lea     ecx, [ebp+3Ch+var_34]
0x78CE55: call    sub_7A6BB0
0x78CE5A: lea     ecx, [ebp+3Ch+var_34]
0x78CE5D: push    ecx
0x78CE5E: mov     ecx, [ebx+4]
0x78CE61: mov     byte ptr [ebp+3Ch+var_40], 1
0x78CE65: call    sub_7947A0
0x78CE6A: mov     ecx, [ebx+8]
0x78CE6D: lea     edx, [ebp+3Ch+var_34]
0x78CE70: push    edx
0x78CE71: call    sub_7997F0
0x78CE76: mov     ecx, [ebx+60h]
0x78CE79: lea     eax, [ebp+3Ch+var_34]
0x78CE7C: push    eax
0x78CE7D: call    sub_7947A0
0x78CE82: mov     eax, [ebx+40h]
0x78CE85: mov     ecx, [ebp+3Ch+var_34]
0x78CE88: mov     [eax], ecx
0x78CE8A: mov     edx, [ebp+3Ch+var_30]
0x78CE8D: mov     [eax+4], edx
0x78CE90: mov     ecx, [ebp+3Ch+var_2C]
0x78CE93: mov     [eax+8], ecx
0x78CE96: mov     eax, [ebx+40h]
0x78CE99: mov     edx, [ebp+3Ch+var_1C]
0x78CE9C: mov     [eax+0Ch], edx
0x78CE9F: mov     ecx, [ebp+3Ch+var_18]
0x78CEA2: add     eax, 0Ch
0x78CEA5: mov     [eax+4], ecx
0x78CEA8: mov     edx, [ebp+3Ch+var_14]
0x78CEAB: mov     [eax+8], edx
0x78CEAE: mov     ecx, [ebx+40h]
0x78CEB1: fld     dword ptr [ecx]
0x78CEB3: fstp    [ebp+3Ch+arg_8]
0x78CEB6: fld     dword ptr [ecx+4]
0x78CEB9: fstp    [ebp+3Ch+arg_4]
0x78CEBC: fld     [ebp+3Ch+arg_8]
0x78CEBF: fldz
0x78CEC1: fsub    st(1), st
0x78CEC3: fld     [ebp+3Ch+arg_4]
0x78CEC6: fsub    st, st(1)
0x78CEC8: fld     st(1)
0x78CECA: fsub    st, st(2)
0x78CECC: fmul    st, st
0x78CECE: fld     st(1)
0x78CED0: fmulp   st(2), st
0x78CED2: fld     st(3)
0x78CED4: fmulp   st(4), st
0x78CED6: fxch    st(1)
0x78CED8: faddp   st(3), st
0x78CEDA: fadd    st(2), st
0x78CEDC: fxch    st(2)
0x78CEDE: fstp    [ebp+3Ch+arg_8]
0x78CEE1: fld     dword ptr [ecx]
0x78CEE3: mov     eax, [ebp+3Ch+arg_8]
0x78CEE6: fstp    [ebp+3Ch+arg_4]
0x78CEE9: sar     eax, 1
0x78CEEB: fld     dword ptr [ecx+10h]
0x78CEEE: add     eax, 1FC00000h
0x78CEF3: fstp    [ebp+3Ch+arg_0]
0x78CEF6: mov     [ebp+3Ch+arg_8], eax
0x78CEF9: fld     [ebp+3Ch+arg_4]
0x78CEFC: fsub    st, st(1)
0x78CEFE: fld     [ebp+3Ch+arg_0]
0x78CF01: fsub    st, st(2)
0x78CF03: fmul    st, st
0x78CF05: fld     st(1)
0x78CF07: fmulp   st(2), st
0x78CF09: faddp   st(1), st
0x78CF0B: fadd    st, st(2)
0x78CF0D: fstp    [ebp+3Ch+arg_4]
0x78CF10: mov     edx, [ebp+3Ch+arg_4]
0x78CF13: fld     [ebp+3Ch+arg_8]
0x78CF16: sar     edx, 1
0x78CF18: add     edx, 1FC00000h
0x78CF1E: mov     [ebp+3Ch+arg_4], edx
0x78CF21: fld     [ebp+3Ch+arg_4]
0x78CF24: fcompp
0x78CF26: fnstsw  ax
0x78CF28: test    ah, 5
0x78CF2B: jnp     short loc_78CF5C
0x78CF2D: fld     dword ptr [ecx]
0x78CF2F: fstp    [ebp+3Ch+arg_4]
0x78CF32: fld     dword ptr [ecx+10h]
0x78CF35: fstp    [ebp+3Ch+arg_0]
0x78CF38: fld     [ebp+3Ch+arg_4]
0x78CF3B: fsub    st, st(1)
0x78CF3D: fld     [ebp+3Ch+arg_0]
0x78CF40: fsub    st, st(2)
0x78CF42: fld     st(1)
0x78CF44: fmulp   st(2), st
0x78CF46: fmul    st, st
0x78CF48: faddp   st(1), st
0x78CF4A: fadd    st, st(2)
0x78CF4C: fstp    [ebp+3Ch+arg_4]
0x78CF4F: mov     eax, [ebp+3Ch+arg_4]
0x78CF52: sar     eax, 1
0x78CF54: add     eax, 1FC00000h
0x78CF59: mov     [ebp+3Ch+arg_8], eax
0x78CF5C: fld     dword ptr [ecx+0Ch]
0x78CF5F: fstp    [ebp+3Ch+arg_4]
0x78CF62: fld     dword ptr [ecx+4]
0x78CF65: fstp    [ebp+3Ch+arg_0]
0x78CF68: fld     [ebp+3Ch+arg_4]
0x78CF6B: fsub    st, st(1)
0x78CF6D: fld     [ebp+3Ch+arg_0]
0x78CF70: fsub    st, st(2)
0x78CF72: fmul    st, st
0x78CF74: fld     st(1)
0x78CF76: fmulp   st(2), st
0x78CF78: faddp   st(1), st
0x78CF7A: fadd    st, st(2)
0x78CF7C: fstp    [ebp+3Ch+arg_4]
0x78CF7F: mov     edx, [ebp+3Ch+arg_4]
0x78CF82: fld     [ebp+3Ch+arg_8]
0x78CF85: sar     edx, 1
0x78CF87: add     edx, 1FC00000h
0x78CF8D: mov     [ebp+3Ch+arg_4], edx
0x78CF90: fld     [ebp+3Ch+arg_4]
0x78CF93: fcompp
0x78CF95: fnstsw  ax
0x78CF97: test    ah, 5
0x78CF9A: jnp     short loc_78CFCC
0x78CF9C: fld     dword ptr [ecx+0Ch]
0x78CF9F: fstp    [ebp+3Ch+arg_0]
0x78CFA2: fld     dword ptr [ecx+4]
0x78CFA5: fstp    [ebp+3Ch+arg_4]
0x78CFA8: fld     [ebp+3Ch+arg_4]
0x78CFAB: fsub    st, st(1)
0x78CFAD: fld     [ebp+3Ch+arg_0]
0x78CFB0: fsub    st, st(2)
0x78CFB2: fmul    st, st
0x78CFB4: fld     st(1)
0x78CFB6: fmulp   st(2), st
0x78CFB8: faddp   st(1), st
0x78CFBA: fadd    st, st(2)
0x78CFBC: fstp    [ebp+3Ch+arg_4]
0x78CFBF: mov     eax, [ebp+3Ch+arg_4]
0x78CFC2: sar     eax, 1
0x78CFC4: add     eax, 1FC00000h
0x78CFC9: mov     [ebp+3Ch+arg_8], eax
0x78CFCC: fld     dword ptr [ecx+0Ch]
0x78CFCF: fstp    [ebp+3Ch+arg_0]
0x78CFD2: fld     dword ptr [ecx+10h]
0x78CFD5: fstp    [ebp+3Ch+arg_4]
0x78CFD8: fld     [ebp+3Ch+arg_4]
0x78CFDB: fsub    st, st(1)
0x78CFDD: fld     [ebp+3Ch+arg_0]
0x78CFE0: fsub    st, st(2)
0x78CFE2: fmul    st, st
0x78CFE4: fld     st(1)
0x78CFE6: fmulp   st(2), st
0x78CFE8: faddp   st(1), st
0x78CFEA: fadd    st, st(2)
0x78CFEC: fstp    [ebp+3Ch+arg_4]
0x78CFEF: mov     edx, [ebp+3Ch+arg_4]
0x78CFF2: fld     [ebp+3Ch+arg_8]
0x78CFF5: sar     edx, 1
0x78CFF7: add     edx, 1FC00000h
0x78CFFD: mov     [ebp+3Ch+arg_4], edx
0x78D000: fld     [ebp+3Ch+arg_4]
0x78D003: fcompp
0x78D005: fnstsw  ax
0x78D007: test    ah, 5
0x78D00A: jnp     short loc_78D03E
0x78D00C: fld     dword ptr [ecx+0Ch]
0x78D00F: fstp    [ebp+3Ch+arg_0]
0x78D012: fld     dword ptr [ecx+10h]
0x78D015: fstp    [ebp+3Ch+arg_4]
0x78D018: fld     [ebp+3Ch+arg_4]
0x78D01B: fsub    st, st(1)
0x78D01D: fld     [ebp+3Ch+arg_0]
0x78D020: fsubrp  st(2), st
0x78D022: fld     st(1)
0x78D024: fmulp   st(2), st
0x78D026: fmul    st, st
0x78D028: faddp   st(1), st
0x78D02A: faddp   st(1), st
0x78D02C: fstp    [ebp+3Ch+arg_4]
0x78D02F: mov     eax, [ebp+3Ch+arg_4]
0x78D032: sar     eax, 1
0x78D034: add     eax, 1FC00000h
0x78D039: mov     [ebp+3Ch+arg_8], eax
0x78D03C: jmp     short loc_78D042
0x78D03E: fstp    st
0x78D040: fstp    st
0x78D042: fld     [ebp+3Ch+arg_8]
0x78D045: fadd    st, st
0x78D047: fstp    dword ptr [ecx+18h]
0x78D04A: cmp     dword ptr [ebx+50h], 0
0x78D04E: jz      short loc_78D057
0x78D050: mov     ecx, ebx
0x78D052: call    sub_787480
0x78D057: mov     ecx, ebx
0x78D059: call    sub_7875D0
0x78D05E: mov     byte ptr [ebx+45h], 1
0x78D062: lea     ecx, [ebp+3Ch+var_1C]; void *
0x78D065: mov     byte ptr [ebp+3Ch+var_40], 2
0x78D069: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x78D06E: lea     ecx, [ebp+3Ch+var_34]; void *
0x78D071: mov     byte ptr [ebp+3Ch+var_40], 0
0x78D075: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x78D07A: jmp     loc_78D11F
0x78D07F: push    3Fh ; '?'; MaxCount
0x78D081: push    offset aComputeCalledM; "Compute() called more than once for sin"...
0x78D086: mov     ecx, offset dword_B2B614
0x78D08B: call    sub_414500
0x78D090: jmp     loc_78D11F
0x78D095: mov     ecx, [ebp+3Ch+var_38]
0x78D098: mov     edx, [ecx]
0x78D09A: mov     eax, [edx+4]
0x78D09D: call    eax
0x78D09F: push    eax
0x78D0A0: push    offset aCspeedtreer_15; "CSpeedTreeRT::Compute"
0x78D0A5: push    offset aSFailedS; "%s - failed [%s]"
0x78D0AA: lea     esi, [ebp+3Ch+var_20]
0x78D0AD: call    sub_7A54A0
0x78D0B2: add     esp, 0Ch
0x78D0B5: cmp     dword ptr [eax+18h], 10h
0x78D0B9: mov     byte ptr [ebp+3Ch+var_40], 4
0x78D0BD: jb      short loc_78D0C4
0x78D0BF: mov     eax, [eax+4]
0x78D0C2: jmp     short loc_78D0C7
0x78D0C4: add     eax, 4
0x78D0C7: push    eax; Src
0x78D0C8: call    sub_7895E0
0x78D0CD: add     esp, 4
0x78D0D0: lea     ecx, [ebp+3Ch+var_20]
0x78D0D3: call    sub_79AB00
0x78D0D8: mov     eax, offset loc_78D11C
0x78D0DD: retn
0x78D0DE: push    offset aCspeedtreer_15; "CSpeedTreeRT::Compute"
0x78D0E3: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78D0E8: lea     esi, [ebp+3Ch+var_A8]
0x78D0EB: call    sub_7A54A0
0x78D0F0: add     esp, 8
0x78D0F3: cmp     dword ptr [eax+18h], 10h
0x78D0F7: mov     byte ptr [ebp+3Ch+var_40], 5
0x78D0FB: jb      short loc_78D102
0x78D0FD: mov     eax, [eax+4]
0x78D100: jmp     short loc_78D105
0x78D102: add     eax, 4
0x78D105: push    eax; Src
0x78D106: call    sub_7895E0
0x78D10B: add     esp, 4
0x78D10E: lea     ecx, [ebp+3Ch+var_A8]
0x78D111: call    sub_79AB00
0x78D116: mov     eax, offset loc_78D11C
0x78D11B: retn
0x78D11C: mov     ebx, [ebp+3Ch+var_4]
0x78D11F: mov     al, [ebx+45h]
0x78D122: mov     ecx, [ebp+3Ch+var_48]
0x78D125: mov     large fs:0, ecx
0x78D12C: pop     ecx
0x78D12D: pop     edi
0x78D12E: pop     esi
0x78D12F: pop     ebx
0x78D130: add     ebp, 3Ch ; '<'
0x78D133: mov     esp, ebp
0x78D135: pop     ebp
0x78D136: retn    0Ch
