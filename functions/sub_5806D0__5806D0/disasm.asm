0x5806D0: push    0FFFFFFFFh
0x5806D2: push    offset SEH_5806D0
0x5806D7: mov     eax, large fs:0
0x5806DD: push    eax
0x5806DE: sub     esp, 0C0h
0x5806E4: push    ebx
0x5806E5: push    ebp
0x5806E6: push    esi
0x5806E7: push    edi
0x5806E8: mov     eax, ds:0B30AACh
0x5806ED: xor     eax, esp
0x5806EF: push    eax
0x5806F0: lea     eax, [esp+0E0h+var_C]
0x5806F7: mov     large fs:0, eax
0x5806FD: mov     ebx, ecx
0x5806FF: push    3EDh
0x580704: call    Menu_GetOpenMenuTile
0x580709: mov     ebp, eax
0x58070B: xor     esi, esi
0x58070D: add     esp, 4
0x580710: cmp     ebp, esi
0x580712: jnz     short loc_58071B
0x580714: call    sub_5A4840
0x580719: mov     ebp, eax
0x58071B: mov     eax, ds:0B3BB0Ch
0x580720: cmp     eax, esi
0x580722: mov     [esp+0E0h+var_B4], esi
0x580726: mov     [esp+0E0h+var_C4], esi
0x58072A: jz      short loc_58074C
0x58072C: mov     ecx, [eax+88h]
0x580732: mov     [esp+0E0h+var_C0], ecx
0x580736: mov     edx, [eax+8Ch]
0x58073C: mov     [esp+0E0h+var_BC], edx
0x580740: mov     eax, [eax+90h]
0x580746: mov     [esp+0E0h+var_B8], eax
0x58074A: jmp     short loc_580796
0x58074C: mov     ecx, ds:0B333C4h
0x580752: mov     edx, [ecx]
0x580754: mov     eax, [edx+174h]
0x58075A: call    eax
0x58075C: mov     ecx, [eax]
0x58075E: mov     [esp+0E0h+var_C0], ecx
0x580762: mov     edx, [eax+4]
0x580765: mov     ecx, ds:0B333C4h
0x58076B: mov     [esp+0E0h+var_BC], edx
0x58076F: mov     eax, [eax+8]
0x580772: mov     [esp+0E0h+var_B8], eax
0x580776: fld     dword ptr [ecx+5D4h]
0x58077C: mov     edx, [ecx]
0x58077E: fstp    [esp+0E0h+var_C8]
0x580782: mov     eax, [edx+0ECh]
0x580788: call    eax
0x58078A: fmul    [esp+0E0h+var_C8]
0x58078E: fadd    [esp+0E0h+var_B8]
0x580792: fstp    [esp+0E0h+var_B8]
0x580796: mov     ecx, ds:0B333C4h
0x58079C: mov     edx, [ecx]
0x58079E: mov     eax, [edx+1E0h]
0x5807A4: call    eax
0x5807A6: push    ecx
0x5807A7: lea     ecx, [esp+0E4h+var_84]
0x5807AB: fstp    [esp+0E4h+var_E4]; float
0x5807AE: call    NiMatrix33_InitRotationTransform
0x5807B3: mov     ecx, ds:0B333C4h
0x5807B9: call    sub_4A9720
0x5807BE: push    ecx
0x5807BF: lea     ecx, [esp+0E4h+var_30]
0x5807C6: fstp    [esp+0E4h+var_E4]; float
0x5807C9: call    NiMatrix33_InitRotationTransposedTransform???
0x5807CE: lea     ecx, [esp+0E0h+var_30]
0x5807D5: push    ecx
0x5807D6: lea     edx, [esp+0E4h+var_60]
0x5807DD: push    edx
0x5807DE: lea     ecx, [esp+0E8h+var_84]
0x5807E2: call    NiMAtrix33_Multiply
0x5807E7: mov     ecx, 9
0x5807EC: mov     esi, eax
0x5807EE: lea     edi, [esp+0E0h+var_84]
0x5807F2: rep movsd
0x5807F4: fld     [esp+0E0h+var_80]
0x5807F8: fstp    [esp+0E0h+var_AC]
0x5807FC: fld     [esp+0E0h+var_74]
0x580800: fstp    [esp+0E0h+var_A8]
0x580804: fld     [esp+0E0h+var_68]
0x580808: fstp    [esp+0E0h+var_A4]
0x58080C: fild    dword ptr [ebx+10h]
0x58080F: fstp    [esp+0E0h+var_C8]
0x580813: mov     ecx, ds:0B333C4h
0x580819: cmp     byte ptr [ecx+6E6h], 0
0x580820: jz      short loc_58083E
0x580822: mov     eax, [ecx]
0x580824: mov     edx, [eax+284h]
0x58082A: push    3Ch ; '<'
0x58082C: call    edx
0x58082E: mov     [esp+0E0h+var_CC], eax
0x580832: fild    [esp+0E0h+var_CC]
0x580836: fadd    [esp+0E0h+var_C8]
0x58083A: fstp    [esp+0E0h+var_C8]
0x58083E: xor     edi, edi
0x580840: cmp     ebp, edi
0x580842: jz      loc_580B7D
0x580848: fldz
0x58084A: xor     esi, esi
0x58084C: cmp     byte ptr ds:0B135A8h, 0
0x580853: fstp    [esp+0E0h+var_CC]
0x580857: mov     dword ptr ds:0B3A6E4h, 1
0x580861: jnz     loc_5809BC
0x580867: cmp     byte ptr ds:0B09868h, 0
0x58086E: jnz     loc_5809BC
0x580874: cmp     byte ptr ds:0B09870h, 0
0x58087B: jnz     loc_5809BC
0x580881: mov     dword ptr ds:0B3A6E4h, 2
0x58088B: mov     ecx, [ebx+108h]
0x580891: call    TESAIForm_GetAggression
0x580896: test    al, al
0x580898: jnz     short loc_5808DC
0x58089A: mov     ecx, ds:0B333C4h; this
0x5808A0: cmp     ecx, edi
0x5808A2: jz      short loc_5808DC
0x5808A4: call    MobileObject_GetCharProxy
0x5808A9: cmp     eax, edi
0x5808AB: jz      short loc_5808DC
0x5808AD: lea     ecx, [esp+0E0h+var_B0]
0x5808B1: push    ecx
0x5808B2: mov     ecx, eax
0x5808B4: call    sub_57E270
0x5808B9: mov     ecx, offset dword_B135A0
0x5808BE: call    GameSetting_GetSafeFloatPointer
0x5808C3: fld     dword ptr [eax]
0x5808C5: mov     edx, [esp+0E0h+var_B0]
0x5808C9: shr     edx, 10h
0x5808CC: push    edx; int
0x5808CD: push    ecx
0x5808CE: mov     ecx, [ebx+108h]
0x5808D4: fstp    [esp+0E8h+var_E8]; float
0x5808D7: call    sub_538D10
0x5808DC: mov     dword ptr ds:0B3A6E4h, 3
0x5808E6: mov     ecx, [ebx+108h]
0x5808EC: call    TESAIForm_GetAggression
0x5808F1: test    al, al
0x5808F3: jz      loc_580A7C
0x5808F9: mov     ecx, ds:0B333C4h; this
0x5808FF: mov     dword ptr ds:0B3A6E4h, 21h ; '!'
0x580909: call    TESObjectREFR_GetParentCell
0x58090E: test    eax, eax
0x580910: jz      short loc_580953
0x580912: mov     ecx, ds:0B333C4h; this
0x580918: call    TESObjectREFR_GetParentCell
0x58091D: mov     ecx, eax
0x58091F: call    sub_4440C0
0x580924: mov     ecx, [ebx+108h]
0x58092A: mov     esi, eax
0x58092C: call    sub_531F10
0x580931: cmp     eax, esi
0x580933: jz      short loc_580953
0x580935: mov     ecx, ds:0B333C4h; this
0x58093B: call    TESObjectREFR_GetParentCell
0x580940: mov     ecx, eax
0x580942: call    sub_4440C0
0x580947: mov     ecx, [ebx+108h]
0x58094D: push    eax
0x58094E: call    sub_538AE0
0x580953: mov     ecx, ds:0B333C4h
0x580959: lea     eax, [esp+0E0h+var_88]
0x58095D: push    eax
0x58095E: mov     dword ptr ds:0B3A6E4h, 22h ; '"'
0x580968: call    sub_65ABE0
0x58096D: movzx   eax, word ptr [eax+2]
0x580971: mov     ecx, [ebx+108h]
0x580977: cmp     [ecx+8], eax
0x58097A: jz      short loc_580982
0x58097C: push    eax
0x58097D: call    sub_538A90
0x580982: fld     [esp+0E0h+var_C8]
0x580986: lea     ecx, [ebx+0DCh]
0x58098C: push    ecx; int
0x58098D: lea     edx, [esp+0E4h+var_CC]
0x580991: push    edx; int
0x580992: push    ecx
0x580993: fstp    [esp+0ECh+var_EC]; float
0x580996: lea     eax, [esp+0ECh+var_AC]
0x58099A: push    eax; int
0x58099B: lea     ecx, [esp+0F0h+var_C0]
0x58099F: mov     dword ptr ds:0B3A6E4h, 23h ; '#'
0x5809A9: push    ecx; int
0x5809AA: mov     ecx, [ebx+108h]
0x5809B0: call    sub_538EC0
0x5809B5: mov     esi, eax
0x5809B7: jmp     loc_580A7C
0x5809BC: lea     ecx, [esp+0E0h+var_60]
0x5809C3: call    sub_959BC0
0x5809C8: mov     ecx, ds:0B333C4h
0x5809CE: lea     edx, [esp+0E0h+var_B0]
0x5809D2: push    edx
0x5809D3: mov     [esp+0E4h+var_4], edi
0x5809DA: call    sub_65ABE0
0x5809DF: fld     [esp+0E0h+var_C8]
0x5809E3: push    1Fh; int
0x5809E5: push    ecx
0x5809E6: fstp    [esp+0E8h+var_E8]; int
0x5809E9: lea     eax, [esp+0E8h+var_AC]
0x5809ED: push    eax; float
0x5809EE: lea     ecx, [esp+0ECh+var_C0]
0x5809F2: push    ecx; int
0x5809F3: mov     ecx, ds:0B333A0h
0x5809F9: lea     edx, [esp+0F0h+var_60]
0x580A00: push    edx; int
0x580A01: call    sub_442E70
0x580A06: test    al, al
0x580A08: jz      short loc_580A63
0x580A0A: cmp     [esp+0E0h+var_3E], 0
0x580A13: jbe     short loc_580A63
0x580A15: jmp     short loc_580A20
0x580A17: align 10h
0x580A20: mov     eax, [esp+0E0h+var_44]
0x580A27: mov     eax, [eax+edi*4]
0x580A2A: mov     eax, [eax]
0x580A2C: push    eax
0x580A2D: call    sub_4DC270
0x580A32: mov     esi, eax
0x580A34: add     esp, 4
0x580A37: cmp     esi, ds:0B333C4h
0x580A3D: jnz     short loc_580A52
0x580A3F: movzx   ecx, [esp+0E0h+var_3E]
0x580A47: add     edi, 1
0x580A4A: xor     esi, esi
0x580A4C: cmp     edi, ecx
0x580A4E: jb      short loc_580A20
0x580A50: jmp     short loc_580A63
0x580A52: mov     edx, [esp+0E0h+var_44]
0x580A59: mov     eax, [edx+edi*4]
0x580A5C: fld     dword ptr [eax+14h]
0x580A5F: fstp    [esp+0E0h+var_CC]
0x580A63: lea     ecx, [esp+0E0h+var_60]
0x580A6A: mov     [esp+0E0h+var_4], 0FFFFFFFFh
0x580A75: call    sub_959EC0
0x580A7A: xor     edi, edi
0x580A7C: cmp     esi, edi
0x580A7E: mov     dword ptr ds:0B3A6E4h, 4
0x580A88: jz      short loc_580ACC
0x580A8A: mov     edx, [esi]
0x580A8C: mov     eax, [edx+190h]
0x580A92: mov     ecx, esi
0x580A94: call    eax
0x580A96: test    al, al
0x580A98: jz      short loc_580AA3
0x580A9A: push    esi
0x580A9B: call    Player_UpdateHUDHealthBarTarget?
0x580AA0: add     esp, 4
0x580AA3: mov     ecx, ds:0B333C4h
0x580AA9: fld     [esp+0E0h+var_CC]
0x580AAD: cmp     byte ptr [ecx+6E6h], 0
0x580AB4: jz      short loc_580AC6
0x580AB6: fild    dword ptr [ebx+10h]
0x580AB9: mov     [esp+0E0h+var_B4], esi
0x580ABD: fcomp   st(1)
0x580ABF: fnstsw  ax
0x580AC1: test    ah, 1
0x580AC4: jnz     short loc_580AD8
0x580AC6: mov     [esp+0E0h+var_C4], esi
0x580ACA: jmp     short loc_580AD8
0x580ACC: fld     [esp+0E0h+var_CC]
0x580AD0: mov     [esp+0E0h+var_C4], edi
0x580AD4: mov     [esp+0E0h+var_B4], edi
0x580AD8: fld     [esp+0E0h+var_AC]
0x580ADC: mov     edx, [esp+0E0h+var_B4]
0x580AE0: fmul    st, st(1)
0x580AE2: mov     eax, [esp+0E0h+var_C4]
0x580AE6: mov     [ebx+0CCh], edx
0x580AEC: mov     [ebx+0C8h], eax
0x580AF2: fstp    [esp+0E0h+var_A0]
0x580AF6: push    edi
0x580AF7: fld     [esp+0E4h+var_A8]
0x580AFB: fmul    st, st(1)
0x580AFD: fstp    [esp+0E4h+var_9C]
0x580B01: fmul    [esp+0E4h+var_A4]
0x580B05: fstp    [esp+0E4h+var_98]
0x580B09: fld     [esp+0E4h+var_C0]
0x580B0D: fadd    [esp+0E4h+var_A0]
0x580B11: fstp    [esp+0E4h+var_94]
0x580B15: mov     ecx, [esp+0E4h+var_94]
0x580B19: fld     [esp+0E4h+var_BC]
0x580B1D: mov     [ebx+0D0h], ecx
0x580B23: fadd    [esp+0E4h+var_9C]
0x580B27: fstp    [esp+0E4h+var_90]
0x580B2B: mov     edx, [esp+0E4h+var_90]
0x580B2F: fld     [esp+0E4h+var_98]
0x580B33: mov     [ebx+0D4h], edx
0x580B39: fadd    [esp+0E4h+var_B8]
0x580B3D: fstp    [esp+0E4h+var_8C]
0x580B41: mov     eax, [esp+0E4h+var_8C]
0x580B45: mov     [ebx+0D8h], eax
0x580B4B: mov     dword ptr ds:0B3A6E4h, 5
0x580B55: cmp     [ebx+0C8h], edi
0x580B5B: setz    cl
0x580B5E: push    ecx
0x580B5F: push    esi
0x580B60: call    sub_5A4980
0x580B65: add     esp, 0Ch
0x580B68: test    al, al
0x580B6A: jz      short loc_580B74
0x580B6C: push    esi
0x580B6D: call    sub_578D50
0x580B72: jmp     short loc_580B7A
0x580B74: push    edi
0x580B75: call    sub_578D30
0x580B7A: add     esp, 4
0x580B7D: mov     ecx, dword ptr [esp+0E0h+var_C]
0x580B84: mov     large fs:0, ecx
0x580B8B: pop     ecx
0x580B8C: pop     edi
0x580B8D: pop     esi
0x580B8E: pop     ebp
0x580B8F: pop     ebx
0x580B90: add     esp, 0CCh
0x580B96: retn
