0x78BBF0: push    ebp
0x78BBF1: mov     ebp, esp
0x78BBF3: push    0FFFFFFFFh
0x78BBF5: push    offset SEH_78BBF0
0x78BBFA: mov     eax, large fs:0
0x78BC00: push    eax
0x78BC01: sub     esp, 44h
0x78BC04: push    ebx
0x78BC05: push    esi
0x78BC06: push    edi
0x78BC07: mov     eax, ds:0B30AACh
0x78BC0C: xor     eax, ebp
0x78BC0E: push    eax
0x78BC0F: lea     eax, [ebp+var_C]
0x78BC12: mov     large fs:0, eax
0x78BC18: mov     [ebp+var_10], esp
0x78BC1B: mov     esi, ecx
0x78BC1D: fldz
0x78BC1F: xor     ebx, ebx
0x78BC21: fst     [ebp+var_14]
0x78BC24: mov     [ebp+var_4], ebx
0x78BC27: fld     [ebp+arg_0]
0x78BC2A: fcom    st(1)
0x78BC2C: fnstsw  ax
0x78BC2E: fstp    st(1)
0x78BC30: test    ah, 1
0x78BC33: jnz     loc_78BCDE
0x78BC39: fld     dword ptr ds:0A30634h
0x78BC3F: fcom    [ebp+arg_4]
0x78BC42: fnstsw  ax
0x78BC44: test    ah, 44h
0x78BC47: jp      short loc_78BC52
0x78BC49: mov     eax, [esi+10h]
0x78BC4C: fld     dword ptr [eax+4]
0x78BC4F: fstp    [ebp+arg_4]
0x78BC52: fcomp   [ebp+arg_8]
0x78BC55: fnstsw  ax
0x78BC57: test    ah, 44h
0x78BC5A: jp      short loc_78BC64
0x78BC5C: mov     eax, [esi+10h]
0x78BC5F: fld     dword ptr [eax]
0x78BC61: fstp    [ebp+arg_8]
0x78BC64: fld     [ebp+arg_8]
0x78BC67: mov     ecx, [esi+10h]
0x78BC6A: sub     esp, 0Ch
0x78BC6D: fstp    [esp+6Ch+var_64]; float
0x78BC71: fld     [ebp+arg_4]
0x78BC74: fstp    [esp+6Ch+var_68]; float
0x78BC78: fstp    [esp+6Ch+var_6C]; float
0x78BC7B: call    sub_793B90
0x78BC80: mov     ecx, [esi+10h]
0x78BC83: fstp    [ebp+arg_8]
0x78BC86: mov     eax, [ecx+8]
0x78BC89: fld     [ebp+arg_8]
0x78BC8C: cmp     eax, 1
0x78BC8F: fstp    [ebp+var_14]
0x78BC92: jnz     short loc_78BC9E
0x78BC94: mov     eax, [esi+4]
0x78BC97: cmp     eax, ebx
0x78BC99: jz      short loc_78BC9E
0x78BC9B: mov     [eax+12h], bl
0x78BC9E: mov     edx, [esi+10h]
0x78BCA1: cmp     dword ptr [edx+0Ch], 1
0x78BCA5: jnz     short loc_78BCB1
0x78BCA7: mov     eax, [esi+60h]
0x78BCAA: cmp     eax, ebx
0x78BCAC: jz      short loc_78BCB1
0x78BCAE: mov     [eax+12h], bl
0x78BCB1: mov     eax, [esi+10h]
0x78BCB4: cmp     dword ptr [eax+10h], 1
0x78BCB8: jz      short loc_78BCBF
0x78BCBA: cmp     [eax+14h], bl
0x78BCBD: jz      short loc_78BCC7
0x78BCBF: mov     ecx, [esi+8]
0x78BCC2: call    sub_7982D0
0x78BCC7: fld     [ebp+var_14]
0x78BCCA: mov     ecx, [ebp+var_C]
0x78BCCD: mov     large fs:0, ecx
0x78BCD4: pop     ecx
0x78BCD5: pop     edi
0x78BCD6: pop     esi
0x78BCD7: pop     ebx
0x78BCD8: mov     esp, ebp
0x78BCDA: pop     ebp
0x78BCDB: retn    0Ch
0x78BCDE: push    32h ; '2'; MaxCount
0x78BCE0: fstp    st
0x78BCE2: push    offset aSetwindstrengt; "SetWindStrength() expects new wind stre"...
0x78BCE7: mov     ecx, offset dword_B2B614
0x78BCEC: call    sub_414500
0x78BCF1: jmp     short loc_78BCC7
0x78BCF3: mov     ecx, [ebp+var_18]
0x78BCF6: mov     eax, [ecx]
0x78BCF8: mov     edx, [eax+4]
0x78BCFB: call    edx
0x78BCFD: push    eax
0x78BCFE: push    offset aCspeedtreert_8; "CSpeedTreeRT::SetWindStrength"
0x78BD03: push    offset aSFailedS; "%s - failed [%s]"
0x78BD08: lea     esi, [ebp+var_34]
0x78BD0B: call    sub_7A54A0
0x78BD10: add     esp, 0Ch
0x78BD13: cmp     dword ptr [eax+18h], 10h
0x78BD17: mov     byte ptr [ebp+var_4], 2
0x78BD1B: jb      short loc_78BD22
0x78BD1D: mov     eax, [eax+4]
0x78BD20: jmp     short loc_78BD25
0x78BD22: add     eax, 4
0x78BD25: push    eax; Src
0x78BD26: call    sub_7895E0
0x78BD2B: add     esp, 4
0x78BD2E: lea     ecx, [ebp+var_34]
0x78BD31: call    sub_79AB00
0x78BD36: mov     eax, offset loc_78BD3C
0x78BD3B: retn
0x78BD3C: jmp     short loc_78BCC7
0x78BD3E: push    offset aCspeedtreert_8; "CSpeedTreeRT::SetWindStrength"
0x78BD43: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78BD48: lea     esi, [ebp+var_50]
0x78BD4B: call    sub_7A54A0
0x78BD50: add     esp, 8
0x78BD53: cmp     dword ptr [eax+18h], 10h
0x78BD57: mov     byte ptr [ebp+var_4], 3
0x78BD5B: jb      short loc_78BD62
0x78BD5D: mov     eax, [eax+4]
0x78BD60: jmp     short loc_78BD65
0x78BD62: add     eax, 4
0x78BD65: push    eax; Src
0x78BD66: call    sub_7895E0
0x78BD6B: add     esp, 4
0x78BD6E: lea     ecx, [ebp+var_50]
0x78BD71: call    sub_79AB00
0x78BD76: mov     eax, offset loc_78BCC7
0x78BD7B: retn
