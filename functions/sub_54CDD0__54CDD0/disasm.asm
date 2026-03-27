0x54CDD0: push    0FFFFFFFFh
0x54CDD2: push    offset SEH_54CDD0
0x54CDD7: mov     eax, large fs:0
0x54CDDD: push    eax
0x54CDDE: sub     esp, 13Ch
0x54CDE4: mov     eax, ds:0B30AACh
0x54CDE9: xor     eax, esp
0x54CDEB: mov     [esp+148h+var_10], eax
0x54CDF2: push    ebx
0x54CDF3: push    ebp
0x54CDF4: push    esi
0x54CDF5: push    edi
0x54CDF6: mov     eax, ds:0B30AACh
0x54CDFB: xor     eax, esp
0x54CDFD: push    eax
0x54CDFE: lea     eax, [esp+15Ch+var_C]
0x54CE05: mov     large fs:0, eax
0x54CE0B: push    0
0x54CE0D: mov     esi, ecx
0x54CE0F: or      ebx, 0FFFFFFFFh
0x54CE12: push    ebx
0x54CE13: lea     ecx, [esp+164h+var_13C]
0x54CE17: call    sub_54EA00
0x54CE1C: mov     eax, [esp+15Ch+arg_0]
0x54CE23: test    eax, eax
0x54CE25: mov     [esp+15Ch+var_4], 0
0x54CE30: jz      def_54CFCE
0x54CE36: lea     edx, [esp+15Ch+Str]
0x54CE3A: sub     edx, eax
0x54CE3C: lea     esp, [esp+0]
0x54CE40: mov     cl, [eax]
0x54CE42: mov     [edx+eax], cl
0x54CE45: add     eax, 1
0x54CE48: test    cl, cl
0x54CE4A: jnz     short loc_54CE40
0x54CE4C: cmp     [esp+15Ch+Str], 20h ; ' '
0x54CE51: lea     edi, [esp+15Ch+Str]
0x54CE55: jnz     short loc_54CE5F
0x54CE57: add     edi, 1
0x54CE5A: cmp     byte ptr [edi], 20h ; ' '
0x54CE5D: jz      short loc_54CE57
0x54CE5F: push    20h ; ' '; Val
0x54CE61: push    edi; Str
0x54CE62: call    _strchr
0x54CE67: mov     ebp, eax
0x54CE69: add     esp, 8
0x54CE6C: test    ebp, ebp
0x54CE6E: jz      def_54CFCE
0x54CE74: push    offset aClear; "Clear"
0x54CE79: push    edi; Str1
0x54CE7A: mov     byte ptr [ebp+0], 0
0x54CE7E: call    __strcmp
0x54CE83: add     esp, 8
0x54CE86: test    eax, eax
0x54CE88: jnz     loc_54CFAB
0x54CE8E: cmp     byte ptr [ebp+1], 20h ; ' '
0x54CE92: lea     edi, [ebp+1]
0x54CE95: jnz     short loc_54CE9F
0x54CE97: add     edi, 1
0x54CE9A: cmp     byte ptr [edi], 20h ; ' '
0x54CE9D: jz      short loc_54CE97
0x54CE9F: push    20h ; ' '; Val
0x54CEA1: push    edi; Str
0x54CEA2: call    _strchr
0x54CEA7: mov     ebp, eax
0x54CEA9: add     esp, 8
0x54CEAC: test    ebp, ebp
0x54CEAE: jz      def_54CFCE
0x54CEB4: push    edi
0x54CEB5: mov     byte ptr [ebp+0], 0
0x54CEB9: call    sub_54F440
0x54CEBE: lea     edi, [ebp+1]
0x54CEC1: add     esp, 4
0x54CEC4: mov     [esp+15Ch+var_124], eax
0x54CEC8: cmp     byte ptr [edi], 20h ; ' '
0x54CECB: jnz     short loc_54CED8
0x54CECD: lea     ecx, [ecx+0]
0x54CED0: add     edi, 1
0x54CED3: cmp     byte ptr [edi], 20h ; ' '
0x54CED6: jz      short loc_54CED0
0x54CED8: push    20h ; ' '; Val
0x54CEDA: push    edi; Str
0x54CEDB: call    _strchr
0x54CEE0: add     esp, 8
0x54CEE3: test    eax, eax
0x54CEE5: jz      short loc_54CF0F
0x54CEE7: push    edi; String
0x54CEE8: call    _atof
0x54CEED: fstp    [esp+160h+var_148]
0x54CEF1: fldz
0x54CEF3: add     esp, 4
0x54CEF6: fld     [esp+15Ch+var_148]
0x54CEFA: fcom    st(1)
0x54CEFC: fnstsw  ax
0x54CEFE: test    ah, 5
0x54CF01: jp      short loc_54CF1F
0x54CF03: fstp    st
0x54CF05: fstp    [esp+15Ch+var_148]
0x54CF09: fld     [esp+15Ch+var_148]
0x54CF0D: jmp     short loc_54CF21
0x54CF0F: fld     dword ptr ds:0A3D65Ch
0x54CF15: fstp    [esp+15Ch+var_148]
0x54CF19: fld     [esp+15Ch+var_148]
0x54CF1D: jmp     short loc_54CF21
0x54CF1F: fstp    st(1)
0x54CF21: mov     eax, [esp+15Ch+var_124]
0x54CF25: cmp     eax, 3; switch 4 cases
0x54CF28: ja      short def_54CF2A
0x54CF2A: jmp     ds:jpt_54CF2A[eax*4]; switch jump
0x54CF31: mov     eax, [esi]; jumptable 0054CF2A case 1
0x54CF33: push    0
0x54CF35: push    0
0x54CF37: push    0
0x54CF39: push    1
0x54CF3B: mov     edx, [eax+80h]
0x54CF41: push    ecx
0x54CF42: mov     ecx, esi
0x54CF44: fstp    [esp+170h+var_170]
0x54CF47: call    edx
