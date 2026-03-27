0x68CEA0: push    0FFFFFFFFh
0x68CEA2: push    offset ??1AbsorbEffect@@UAE@XZ_SEH
0x68CEA7: mov     eax, large fs:0
0x68CEAD: push    eax
0x68CEAE: sub     esp, 8
0x68CEB1: push    ebp
0x68CEB2: push    esi
0x68CEB3: push    edi
0x68CEB4: mov     eax, ds:0B30AACh
0x68CEB9: xor     eax, esp
0x68CEBB: push    eax
0x68CEBC: lea     eax, [esp+24h+var_C]
0x68CEC0: mov     large fs:0, eax
0x68CEC6: mov     esi, ecx
0x68CEC8: mov     [esp+24h+var_10], esi
0x68CECC: mov     dword ptr [esi], offset ??_7AbsorbEffect@@6B@; const AbsorbEffect::`vftable'
0x68CED2: mov     eax, [esi+48h]
0x68CED5: mov     ecx, [esi+3Ch]
0x68CED8: push    eax
0x68CED9: push    ecx
0x68CEDA: mov     [esp+2Ch+var_4], 4
0x68CEE2: call    sub_7F4420
0x68CEE7: mov     edi, [esi+48h]
0x68CEEA: mov     ebp, ds:0A2807Ch
0x68CEF0: add     esp, 8
0x68CEF3: test    edi, edi
0x68CEF5: jz      short loc_68CF16
0x68CEF7: lea     eax, [edi+4]
0x68CEFA: push    eax; lpAddend
0x68CEFB: call    ebp ; InterlockedDecrement
0x68CEFD: test    eax, eax
0x68CEFF: jnz     short loc_68CF0F
0x68CF01: test    edi, edi
0x68CF03: jz      short loc_68CF0F
0x68CF05: mov     edx, [edi]
0x68CF07: mov     eax, [edx]
0x68CF09: push    1
0x68CF0B: mov     ecx, edi
0x68CF0D: call    eax
0x68CF0F: mov     dword ptr [esi+48h], 0
0x68CF16: mov     eax, [esi+3Ch]
0x68CF19: test    eax, eax
0x68CF1B: jz      short loc_68CF7C
0x68CF1D: mov     ecx, [eax+1Ch]
0x68CF20: test    ecx, ecx
0x68CF22: jz      short loc_68CF56
0x68CF24: mov     edx, [ecx]
0x68CF26: mov     edx, [edx+88h]
0x68CF2C: push    eax
0x68CF2D: lea     eax, [esp+28h+var_14]
0x68CF31: push    eax
0x68CF32: call    edx
0x68CF34: mov     eax, [esp+24h+var_14]
0x68CF38: test    eax, eax
0x68CF3A: jz      short loc_68CF56
0x68CF3C: mov     edi, eax
0x68CF3E: add     eax, 4
0x68CF41: push    eax; lpAddend
0x68CF42: call    ebp ; InterlockedDecrement
0x68CF44: test    eax, eax
0x68CF46: jnz     short loc_68CF56
0x68CF48: test    edi, edi
0x68CF4A: jz      short loc_68CF56
0x68CF4C: mov     eax, [edi]
0x68CF4E: mov     edx, [eax]
0x68CF50: push    1
0x68CF52: mov     ecx, edi
0x68CF54: call    edx
0x68CF56: mov     edi, [esi+3Ch]
0x68CF59: test    edi, edi
0x68CF5B: jz      short loc_68CF7C
0x68CF5D: lea     eax, [edi+4]
0x68CF60: push    eax; lpAddend
0x68CF61: call    ebp ; InterlockedDecrement
0x68CF63: test    eax, eax
0x68CF65: jnz     short loc_68CF75
0x68CF67: test    edi, edi
0x68CF69: jz      short loc_68CF75
0x68CF6B: mov     edx, [edi]
0x68CF6D: mov     eax, [edx]
0x68CF6F: push    1
0x68CF71: mov     ecx, edi
0x68CF73: call    eax
0x68CF75: mov     dword ptr [esi+3Ch], 0
0x68CF7C: mov     edi, [esi+48h]
0x68CF7F: test    edi, edi
0x68CF81: mov     byte ptr [esp+24h+var_4], 3
0x68CF86: jz      short loc_68CFA0
0x68CF88: lea     ecx, [edi+4]
0x68CF8B: push    ecx; lpAddend
0x68CF8C: call    ebp ; InterlockedDecrement
0x68CF8E: test    eax, eax
0x68CF90: jnz     short loc_68CFA0
0x68CF92: test    edi, edi
0x68CF94: jz      short loc_68CFA0
0x68CF96: mov     edx, [edi]
0x68CF98: mov     eax, [edx]
0x68CF9A: push    1
0x68CF9C: mov     ecx, edi
0x68CF9E: call    eax
0x68CFA0: mov     edi, [esi+44h]
0x68CFA3: test    edi, edi
0x68CFA5: mov     byte ptr [esp+24h+var_4], 2
0x68CFAA: jz      short loc_68CFC4
0x68CFAC: lea     ecx, [edi+4]
0x68CFAF: push    ecx; lpAddend
0x68CFB0: call    ebp ; InterlockedDecrement
0x68CFB2: test    eax, eax
0x68CFB4: jnz     short loc_68CFC4
0x68CFB6: test    edi, edi
0x68CFB8: jz      short loc_68CFC4
0x68CFBA: mov     edx, [edi]
0x68CFBC: mov     eax, [edx]
0x68CFBE: push    1
0x68CFC0: mov     ecx, edi
0x68CFC2: call    eax
0x68CFC4: mov     edi, [esi+40h]
0x68CFC7: test    edi, edi
0x68CFC9: mov     byte ptr [esp+24h+var_4], 1
0x68CFCE: jz      short loc_68CFE8
0x68CFD0: lea     ecx, [edi+4]
0x68CFD3: push    ecx; lpAddend
0x68CFD4: call    ebp ; InterlockedDecrement
0x68CFD6: test    eax, eax
0x68CFD8: jnz     short loc_68CFE8
0x68CFDA: test    edi, edi
0x68CFDC: jz      short loc_68CFE8
0x68CFDE: mov     edx, [edi]
0x68CFE0: mov     eax, [edx]
0x68CFE2: push    1
0x68CFE4: mov     ecx, edi
0x68CFE6: call    eax
0x68CFE8: mov     edi, [esi+3Ch]
0x68CFEB: test    edi, edi
0x68CFED: mov     byte ptr [esp+24h+var_4], 0
0x68CFF2: jz      short loc_68D00C
0x68CFF4: lea     ecx, [edi+4]
0x68CFF7: push    ecx; lpAddend
0x68CFF8: call    ebp ; InterlockedDecrement
0x68CFFA: test    eax, eax
0x68CFFC: jnz     short loc_68D00C
0x68CFFE: test    edi, edi
0x68D000: jz      short loc_68D00C
0x68D002: mov     edx, [edi]
0x68D004: mov     eax, [edx]
0x68D006: push    1
0x68D008: mov     ecx, edi
0x68D00A: call    eax
0x68D00C: mov     ecx, esi; this
0x68D00E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x68D016: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x68D01B: mov     ecx, dword ptr [esp+24h+var_C]
0x68D01F: mov     large fs:0, ecx
0x68D026: pop     ecx
0x68D027: pop     edi
0x68D028: pop     esi
0x68D029: pop     ebp
0x68D02A: add     esp, 14h
0x68D02D: retn
