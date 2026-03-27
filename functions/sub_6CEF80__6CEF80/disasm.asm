0x6CEF80: sub     esp, 0E0h
0x6CEF86: push    ebx
0x6CEF87: push    ebp
0x6CEF88: movzx   ebp, [esp+0E8h+arg_0]
0x6CEF90: lea     eax, [ebp+ebp*2+0]
0x6CEF94: imul    ebp, 68h ; 'h'
0x6CEF97: push    esi
0x6CEF98: push    edi
0x6CEF99: mov     edi, ecx
0x6CEF9B: mov     ecx, [edi+14h]
0x6CEF9E: mov     esi, [ecx+eax*8]
0x6CEFA1: add     ebp, [edi+50h]
0x6CEFA4: test    esi, esi
0x6CEFA6: mov     [esp+0F0h+var_98], edi
0x6CEFAA: jz      loc_6CF424
0x6CEFB0: fld     dword ptr [ebp+0]
0x6CEFB3: fld     [esp+0F0h+arg_4]
0x6CEFBA: fucompp
0x6CEFBC: fnstsw  ax
0x6CEFBE: test    ah, 44h
0x6CEFC1: jnp     loc_6CF424
0x6CEFC7: cmp     byte ptr [edi+54h], 0
0x6CEFCB: jnz     short loc_6CEFDF
0x6CEFCD: lea     ebx, [ebp+4]
0x6CEFD0: mov     ecx, ebx
0x6CEFD2: call    sub_6CBC10
0x6CEFD7: test    al, al
0x6CEFD9: jz      loc_6CF0DC
0x6CEFDF: mov     eax, [esp+0F0h+arg_8]
0x6CEFE6: fld     [esp+0F0h+arg_4]
0x6CEFED: lea     ebx, [ebp+4]
0x6CEFF0: push    ebx
0x6CEFF1: mov     byte ptr [edi+54h], 0
0x6CEFF5: mov     edx, [esi]
0x6CEFF7: mov     edx, [edx+4Ch]
0x6CEFFA: push    eax
0x6CEFFB: push    ecx
0x6CEFFC: mov     ecx, esi
0x6CEFFE: fstp    [esp+0FCh+var_FC]
0x6CF001: call    edx
0x6CF003: fld     dword ptr ds:0A7DEB4h
0x6CF009: mov     eax, ds:0B27118h
0x6CF00E: fchs
0x6CF010: mov     ecx, ds:0B27110h
0x6CF016: fstp    [esp+0F0h+var_D0]
0x6CF01A: fld     dword ptr [edi+40h]
0x6CF01D: mov     edx, ds:0B27114h
0x6CF023: fld     [esp+0F0h+var_D0]
0x6CF027: mov     [esp+0F0h+var_D8], eax
0x6CF02B: mov     eax, ds:0B2711Ch
0x6CF030: fld     st
0x6CF032: fucomp  st(2)
0x6CF034: mov     [esp+0F0h+var_D4], eax
0x6CF038: mov     [esp+0F0h+var_E0], ecx
0x6CF03C: mov     [esp+0F0h+var_DC], edx
0x6CF040: fnstsw  ax
0x6CF042: fstp    st(1)
0x6CF044: test    ah, 44h
0x6CF047: jnp     short loc_6CF065
0x6CF049: mov     eax, [edi+3Ch]
0x6CF04C: mov     [esp+0F0h+var_E0], eax
0x6CF050: mov     eax, [edi+40h]
0x6CF053: mov     [esp+0F0h+var_DC], eax
0x6CF057: mov     eax, [edi+44h]
0x6CF05A: mov     [esp+0F0h+var_D8], eax
0x6CF05E: mov     eax, [edi+48h]
0x6CF061: mov     [esp+0F0h+var_D4], eax
0x6CF065: fld     dword ptr [ebp+14h]
0x6CF068: mov     [esp+0F0h+var_B8], ecx
0x6CF06C: mov     ecx, ds:0B27118h
0x6CF072: fucompp
0x6CF074: mov     [esp+0F0h+var_B4], edx
0x6CF078: mov     edx, ds:0B2711Ch
0x6CF07E: mov     [esp+0F0h+var_B0], ecx
0x6CF082: fnstsw  ax
0x6CF084: mov     [esp+0F0h+var_AC], edx
0x6CF088: test    ah, 44h
0x6CF08B: jnp     short loc_6CF0BC
0x6CF08D: lea     eax, [ebp+10h]
0x6CF090: push    eax
0x6CF091: lea     ecx, [esp+0F4h+var_70]
0x6CF098: push    ecx
0x6CF099: call    sub_714D80
0x6CF09E: mov     edx, [eax]
0x6CF0A0: mov     [esp+0F8h+var_B8], edx
0x6CF0A4: mov     ecx, [eax+4]
0x6CF0A7: mov     [esp+0F8h+var_B4], ecx
0x6CF0AB: mov     edx, [eax+8]
0x6CF0AE: mov     [esp+0F8h+var_B0], edx
0x6CF0B2: mov     eax, [eax+0Ch]
0x6CF0B5: add     esp, 8
0x6CF0B8: mov     [esp+0F0h+var_AC], eax
0x6CF0BC: lea     ecx, [esp+0F0h+var_B8]
0x6CF0C0: push    ecx
0x6CF0C1: lea     edx, [esp+0F4h+var_CC]
0x6CF0C5: push    edx
0x6CF0C6: lea     ecx, [esp+0F8h+var_E0]
0x6CF0CA: call    sub_714CF0
0x6CF0CF: lea     eax, [ebp+44h]
0x6CF0D2: push    eax
0x6CF0D3: lea     ecx, [esp+0F4h+var_CC]
0x6CF0D7: call    sub_47C600
0x6CF0DC: fld     [esp+0F0h+arg_4]
0x6CF0E3: fld     dword ptr [ebp+0]
0x6CF0E6: fcompp
0x6CF0E8: fnstsw  ax
0x6CF0EA: test    ah, 41h
0x6CF0ED: jnz     loc_6CF36A
0x6CF0F3: mov     edx, [esi]
0x6CF0F5: mov     edx, [edx+80h]
0x6CF0FB: lea     eax, [esp+0F0h+var_94]
0x6CF0FF: push    eax
0x6CF100: lea     ecx, [esp+0F4h+var_BC]
0x6CF104: push    ecx
0x6CF105: mov     ecx, esi
0x6CF107: call    edx
0x6CF109: lea     ecx, [esp+0F0h+var_60]
0x6CF110: call    sub_470AB0
0x6CF115: fld     [esp+0F0h+var_94]
0x6CF119: mov     edi, [esp+0F0h+arg_8]
0x6CF120: mov     eax, [esi]
0x6CF122: mov     edx, [eax+4Ch]
0x6CF125: lea     ecx, [esp+0F0h+var_60]
0x6CF12C: push    ecx
0x6CF12D: push    edi
0x6CF12E: push    ecx
0x6CF12F: mov     ecx, esi
0x6CF131: fstp    [esp+0FCh+var_FC]
0x6CF134: call    edx
0x6CF136: lea     ecx, [esp+0F0h+var_20]
0x6CF13D: call    sub_470AB0
0x6CF142: fld     [esp+0F0h+var_BC]
0x6CF146: mov     eax, [esi]
0x6CF148: mov     edx, [eax+4Ch]
0x6CF14B: lea     ecx, [esp+0F0h+var_20]
0x6CF152: push    ecx
0x6CF153: push    edi
0x6CF154: push    ecx
0x6CF155: mov     ecx, esi
0x6CF157: fstp    [esp+0FCh+var_FC]
0x6CF15A: call    edx
0x6CF15C: lea     ecx, [esp+0F0h+var_90]
0x6CF160: call    sub_470AB0
0x6CF165: fld     [esp+0F0h+arg_4]
0x6CF16C: mov     eax, [esi]
0x6CF16E: mov     edx, [eax+4Ch]
0x6CF171: lea     ecx, [esp+0F0h+var_90]
0x6CF175: push    ecx
0x6CF176: push    edi
0x6CF177: push    ecx
0x6CF178: mov     ecx, esi
0x6CF17A: fstp    [esp+0FCh+var_FC]
0x6CF17D: call    edx
0x6CF17F: lea     ecx, [esp+0F0h+var_40]
0x6CF186: call    sub_470AB0
0x6CF18B: lea     eax, [esp+0F0h+var_40]
0x6CF192: push    eax
0x6CF193: mov     ecx, ebx
0x6CF195: call    sub_6CB3C0
0x6CF19A: lea     ecx, [esp+0F0h+var_60]
0x6CF1A1: push    ecx
0x6CF1A2: lea     edx, [esp+0F4h+var_B8]
0x6CF1A6: push    edx
0x6CF1A7: lea     ecx, [esp+0F8h+var_40]
0x6CF1AE: call    sub_6CB820
0x6CF1B3: lea     edx, [ebp+24h]
0x6CF1B6: mov     esi, eax
0x6CF1B8: mov     ecx, 8
0x6CF1BD: mov     edi, edx
0x6CF1BF: rep movsd
0x6CF1C1: fld     dword ptr [edx]
0x6CF1C3: fld     dword ptr ds:0A7DEB4h
0x6CF1C9: fchs
0x6CF1CB: fucompp
0x6CF1CD: fnstsw  ax
0x6CF1CF: test    ah, 44h
0x6CF1D2: jnp     short loc_6CF1EB
0x6CF1D4: push    edx
0x6CF1D5: lea     eax, [esp+0F4h+var_B8]
0x6CF1D9: push    eax
0x6CF1DA: lea     ecx, [ebp+44h]
0x6CF1DD: call    sub_7101F0
0x6CF1E2: push    eax
0x6CF1E3: lea     ecx, [ebp+24h]
0x6CF1E6: call    sub_471390
0x6CF1EB: mov     ecx, ds:0B2711Ch
0x6CF1F1: fld     dword ptr ds:0A7DEB4h
0x6CF1F7: mov     edx, ds:0B27110h
0x6CF1FD: fchs
0x6CF1FF: mov     esi, ds:0B27114h
0x6CF205: fstp    [esp+0F0h+var_D0]
0x6CF209: mov     edi, ds:0B27118h
0x6CF20F: mov     [esp+0F0h+var_C0], ecx
0x6CF213: mov     ecx, [esp+0F0h+var_98]
0x6CF217: fld     dword ptr [ecx+40h]
0x6CF21A: mov     [esp+0F0h+var_CC], edx
0x6CF21E: fld     [esp+0F0h+var_D0]
0x6CF222: mov     [esp+0F0h+var_C8], esi
0x6CF226: fld     st
0x6CF228: mov     [esp+0F0h+var_C4], edi
0x6CF22C: fucomp  st(2)
0x6CF22E: fnstsw  ax
0x6CF230: fstp    st(1)
0x6CF232: test    ah, 44h
0x6CF235: jnp     short loc_6CF253
0x6CF237: mov     eax, [ecx+3Ch]
0x6CF23A: mov     [esp+0F0h+var_CC], eax
0x6CF23E: mov     eax, [ecx+40h]
0x6CF241: mov     [esp+0F0h+var_C8], eax
0x6CF245: mov     eax, [ecx+44h]
0x6CF248: mov     ecx, [ecx+48h]
0x6CF24B: mov     [esp+0F0h+var_C4], eax
0x6CF24F: mov     [esp+0F0h+var_C0], ecx
0x6CF253: fld     [esp+0F0h+var_10]
0x6CF25A: mov     [esp+0F0h+var_E0], edx
0x6CF25E: mov     edx, ds:0B2711Ch
0x6CF264: fucompp
0x6CF266: mov     [esp+0F0h+var_DC], esi
0x6CF26A: mov     [esp+0F0h+var_D8], edi
0x6CF26E: mov     [esp+0F0h+var_D4], edx
0x6CF272: fnstsw  ax
0x6CF274: test    ah, 44h
0x6CF277: jnp     short loc_6CF2A9
0x6CF279: lea     eax, [esp+0F0h+var_14]
0x6CF280: push    eax
0x6CF281: lea     ecx, [esp+0F4h+var_B8]
0x6CF285: push    ecx
0x6CF286: call    sub_714D80
0x6CF28B: mov     edx, [eax]
0x6CF28D: mov     [esp+0F8h+var_E0], edx
0x6CF291: mov     ecx, [eax+4]
0x6CF294: mov     [esp+0F8h+var_DC], ecx
0x6CF298: mov     edx, [eax+8]
0x6CF29B: mov     [esp+0F8h+var_D8], edx
0x6CF29F: mov     eax, [eax+0Ch]
0x6CF2A2: add     esp, 8
0x6CF2A5: mov     [esp+0F0h+var_D4], eax
0x6CF2A9: lea     ecx, [esp+0F0h+var_E0]
0x6CF2AD: push    ecx
0x6CF2AE: lea     edx, [esp+0F4h+var_70]
0x6CF2B5: push    edx
0x6CF2B6: lea     ecx, [esp+0F8h+var_CC]
0x6CF2BA: call    sub_714CF0
0x6CF2BF: lea     eax, [ebp+44h]
0x6CF2C2: push    eax
0x6CF2C3: lea     ecx, [esp+0F4h+var_70]
0x6CF2CA: call    sub_47C600
0x6CF2CF: lea     eax, [esp+0F0h+var_40]
0x6CF2D6: push    eax
0x6CF2D7: lea     ecx, [esp+0F4h+var_20]
0x6CF2DE: call    sub_6CB3C0
0x6CF2E3: lea     ecx, [esp+0F0h+var_90]
0x6CF2E7: push    ecx
0x6CF2E8: lea     edx, [esp+0F4h+var_B8]
0x6CF2EC: push    edx
0x6CF2ED: lea     ecx, [esp+0F8h+var_40]
0x6CF2F4: call    sub_6CB820
0x6CF2F9: mov     esi, eax
0x6CF2FB: mov     ecx, 8
0x6CF300: mov     edi, ebx
0x6CF302: rep movsd
0x6CF304: fld     dword ptr [ebx]
0x6CF306: fld     dword ptr ds:0A7DEB4h
0x6CF30C: fchs
0x6CF30E: fucompp
0x6CF310: fnstsw  ax
0x6CF312: test    ah, 44h
0x6CF315: jnp     short loc_6CF32D
0x6CF317: push    ebx
0x6CF318: lea     eax, [esp+0F4h+var_B8]
0x6CF31C: push    eax
0x6CF31D: lea     ecx, [ebp+44h]
0x6CF320: call    sub_7101F0
0x6CF325: push    eax
0x6CF326: mov     ecx, ebx
0x6CF328: call    sub_471390
0x6CF32D: push    ebx
0x6CF32E: lea     ecx, [esp+0F4h+var_B8]
0x6CF332: push    ecx
0x6CF333: lea     edi, [ebp+24h]
0x6CF336: mov     ecx, edi
0x6CF338: call    sub_6CB820
0x6CF33D: fld     [esp+0F0h+arg_4]
0x6CF344: mov     ecx, 8
0x6CF349: mov     esi, eax
0x6CF34B: rep movsd
0x6CF34D: fstp    dword ptr [ebp+0]
0x6CF350: mov     edi, ebx
0x6CF352: mov     ecx, 8
0x6CF357: lea     esi, [esp+0F0h+var_90]
0x6CF35B: rep movsd
0x6CF35D: pop     edi
0x6CF35E: pop     esi
0x6CF35F: pop     ebp
0x6CF360: pop     ebx
0x6CF361: add     esp, 0E0h
0x6CF367: retn    0Ch
0x6CF36A: lea     ecx, [esp+0F0h+var_90]
0x6CF36E: call    sub_470AB0
0x6CF373: fld     [esp+0F0h+arg_4]
0x6CF37A: mov     ecx, [esp+0F0h+arg_8]
0x6CF381: mov     edx, [esi]
0x6CF383: mov     edx, [edx+4Ch]
0x6CF386: lea     eax, [esp+0F0h+var_90]
0x6CF38A: push    eax
0x6CF38B: push    ecx
0x6CF38C: push    ecx
0x6CF38D: mov     ecx, esi
0x6CF38F: fstp    [esp+0FCh+var_FC]
0x6CF392: call    edx
0x6CF394: lea     ecx, [esp+0F0h+var_60]
0x6CF39B: call    sub_470AB0
0x6CF3A0: lea     eax, [esp+0F0h+var_60]
0x6CF3A7: push    eax
0x6CF3A8: mov     ecx, ebx
0x6CF3AA: call    sub_6CB3C0
0x6CF3AF: lea     ecx, [esp+0F0h+var_90]
0x6CF3B3: push    ecx
0x6CF3B4: lea     edx, [esp+0F4h+var_40]
0x6CF3BB: push    edx
0x6CF3BC: lea     ecx, [esp+0F8h+var_60]
0x6CF3C3: call    sub_6CB820
0x6CF3C8: lea     edx, [ebp+24h]
0x6CF3CB: mov     esi, eax
0x6CF3CD: mov     ecx, 8
0x6CF3D2: mov     edi, edx
0x6CF3D4: rep movsd
0x6CF3D6: fld     dword ptr [edx]
0x6CF3D8: fld     dword ptr ds:0A7DEB4h
0x6CF3DE: fchs
0x6CF3E0: fucompp
0x6CF3E2: fnstsw  ax
0x6CF3E4: test    ah, 44h
0x6CF3E7: jnp     short loc_6CF400
0x6CF3E9: push    edx
0x6CF3EA: lea     eax, [esp+0F4h+var_B8]
0x6CF3EE: push    eax
0x6CF3EF: lea     ecx, [ebp+44h]
0x6CF3F2: call    sub_7101F0
0x6CF3F7: push    eax
0x6CF3F8: lea     ecx, [ebp+24h]
0x6CF3FB: call    sub_471390
0x6CF400: fld     [esp+0F0h+arg_4]
0x6CF407: mov     edi, ebx
0x6CF409: mov     ecx, 8
0x6CF40E: fstp    dword ptr [ebp+0]
0x6CF411: lea     esi, [esp+0F0h+var_90]
0x6CF415: rep movsd
0x6CF417: pop     edi
0x6CF418: pop     esi
0x6CF419: pop     ebp
0x6CF41A: pop     ebx
0x6CF41B: add     esp, 0E0h
0x6CF421: retn    0Ch
0x6CF424: lea     esi, [ebp+24h]
0x6CF427: push    offset Vector3_InitValue?
0x6CF42C: mov     ecx, esi
0x6CF42E: call    sub_471390
0x6CF433: push    offset dword_B27110
0x6CF438: mov     ecx, esi
0x6CF43A: call    sub_471430
0x6CF43F: fld1
0x6CF441: sub     esp, 8
0x6CF444: fstp    [esp+0F8h+X]; X
0x6CF447: call    __isnan
0x6CF44C: add     esp, 8
0x6CF44F: test    eax, eax
0x6CF451: jnz     short loc_6CF46C
0x6CF453: fld1
0x6CF455: sub     esp, 8
0x6CF458: fstp    [esp+0F8h+X]; X
0x6CF45B: call    __finite
0x6CF460: add     esp, 8
0x6CF463: test    eax, eax
0x6CF465: jz      short loc_6CF46C
0x6CF467: fld1
0x6CF469: fstp    dword ptr [ebp+40h]
0x6CF46C: fld     [esp+0F0h+arg_4]
0x6CF473: pop     edi
0x6CF474: pop     esi
0x6CF475: fstp    dword ptr [ebp+0]
0x6CF478: pop     ebp
0x6CF479: pop     ebx
0x6CF47A: add     esp, 0E0h
0x6CF480: retn    0Ch
