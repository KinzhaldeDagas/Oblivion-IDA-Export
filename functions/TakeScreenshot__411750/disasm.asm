0x411750: push    0FFFFFFFFh
0x411752: push    offset TakeScreenshot_SEH
0x411757: mov     eax, large fs:0
0x41175D: push    eax
0x41175E: sub     esp, 2D8h
0x411764: mov     eax, ___security_cookie
0x411769: xor     eax, esp
0x41176B: mov     [esp+2E4h+var_10], eax
0x411772: push    ebx
0x411773: push    ebp
0x411774: push    esi
0x411775: push    edi
0x411776: mov     eax, ___security_cookie
0x41177B: xor     eax, esp
0x41177D: push    eax; ArgList
0x41177E: lea     eax, [esp+2F8h+var_C]
0x411785: mov     large fs:0, eax
0x41178B: mov     esi, dword_B350D8
0x411791: lea     ecx, [esp+2F8h+var_27C]
0x411795: call    InitSurfacEData
0x41179A: mov     eax, [esi]
0x41179C: mov     edx, [eax+8Ch]
0x4117A2: mov     ebx, [esi+280h]
0x4117A8: mov     ecx, esi
0x4117AA: call    edx
0x4117AC: mov     ecx, [eax+10h]
0x4117AF: test    ecx, ecx
0x4117B1: jz      short loc_4117BC
0x4117B3: mov     eax, [ecx]
0x4117B5: mov     edx, [eax+0Ch]
0x4117B8: call    edx
0x4117BA: jmp     short loc_4117BE
0x4117BC: xor     eax, eax
0x4117BE: mov     esi, eax
0x4117C0: lea     eax, [esp+2F8h+var_27C]
0x4117C4: mov     ecx, 11h
0x4117C9: lea     edi, [esp+2F8h+var_27C]
0x4117CD: push    eax
0x4117CE: rep movsd
0x4117D0: call    sub_76BEF0
0x4117D5: mov     ecx, [ebx]
0x4117D7: mov     eax, [ecx+48h]
0x4117DA: add     esp, 4
0x4117DD: lea     edx, [esp+2F8h+var_2E4]
0x4117E1: push    edx
0x4117E2: push    0
0x4117E4: push    0
0x4117E6: push    0
0x4117E8: push    ebx
0x4117E9: call    eax
0x4117EB: test    eax, eax
0x4117ED: jz      short loc_411801
0x4117EF: push    offset aScreenshotUnab; "ScreenShot: Unable to get back buffer."
0x4117F4: call    PrintError
0x4117F9: add     esp, 4
0x4117FC: jmp     loc_411B48
0x411801: mov     eax, [esp+2F8h+var_2E4]
0x411805: mov     ecx, [eax]
0x411807: lea     edx, [esp+2F8h+var_238]
0x41180E: push    edx
0x41180F: push    eax
0x411810: mov     eax, [ecx+30h]
0x411813: call    eax
0x411815: test    eax, eax
0x411817: jz      short loc_411837
0x411819: push    offset aScreenshotUn_0; "ScreenShot: Unable to aquire BackBuffer"...
0x41181E: call    PrintError
0x411823: mov     eax, [esp+2FCh+var_2E4]
0x411827: mov     ecx, [eax]
0x411829: mov     edx, [ecx+8]
0x41182C: add     esp, 4
0x41182F: push    eax
0x411830: call    edx
0x411832: jmp     loc_411B48
0x411837: mov     eax, [esp+2F8h+var_2E4]
0x41183B: mov     ecx, [eax]
0x41183D: push    800h
0x411842: push    0
0x411844: lea     edx, [esp+44h]
0x411848: push    edx
0x411849: push    eax
0x41184A: mov     eax, [ecx+34h]
0x41184D: call    eax
0x41184F: test    eax, eax
0x411851: jz      short loc_41186A
0x411853: cmp     iMultisample, 2
0x41185A: jl      short loc_411863
0x41185C: push    offset aScreenshotNotE; "ScreenShot: Not enabled. Can't lock the"...
0x411861: jmp     short loc_41181E
0x411863: push    offset aScreenshotNo_0; "ScreenShot: Not enabled. Add 'bAllowScr"...
0x411868: jmp     short loc_41181E
0x41186A: push    70h ; 'p'; Size
0x41186C: call    FormHeapAlloc
0x411871: add     esp, 4
0x411874: mov     [esp+2F8h+anonymous_3], eax
0x411878: test    eax, eax
0x41187A: mov     [esp+2F8h+var_4], 0
0x411885: jz      short loc_4118B0
0x411887: mov     edx, nHeight
0x41188D: push    1
0x41188F: push    1
0x411891: lea     ecx, [esp+300h+var_27C]
0x411898: push    ecx
0x411899: mov     ecx, nWidth
0x41189F: push    edx
0x4118A0: push    ecx
0x4118A1: mov     ecx, eax
0x4118A3: call    NiPixelData__NiPixelData
0x4118A8: mov     edi, eax
0x4118AA: mov     [esp+2F8h+anonymous_0], eax
0x4118AE: jmp     short loc_4118B6
0x4118B0: xor     edi, edi
0x4118B2: mov     [esp+2F8h+anonymous_0], edi
0x4118B6: mov     edx, [edi+54h]
0x4118B9: mov     eax, [edi+5Ch]
0x4118BC: mov     ebx, [edx]
0x4118BE: mov     esi, [eax]
0x4118C0: imul    ebx, [edi+64h]
0x4118C4: add     esi, [edi+50h]
0x4118C7: cmp     nHeight, 0
0x4118CE: mov     ebp, dword ptr [esp+2F8h+Src+2]
0x4118D2: mov     [esp+2F8h+var_4], 0FFFFFFFFh
0x4118DD: mov     [esp+2F8h+var_2E0], 0
0x4118E5: jle     short loc_41190B
0x4118E7: push    ebx; Size
0x4118E8: push    ebp; Src
0x4118E9: push    esi; Dst
0x4118EA: call    _memcpy
0x4118EF: mov     eax, [esp+304h+var_2E0]
0x4118F3: add     ebp, [esp+48h]
0x4118F7: add     eax, 1
0x4118FA: add     esp, 0Ch
0x4118FD: add     esi, ebx
0x4118FF: cmp     eax, nHeight
0x411905: mov     [esp+2F8h+var_2E0], eax
0x411909: jl      short loc_4118E7
0x41190B: mov     eax, [esp+2F8h+var_2E4]
0x41190F: mov     ecx, [eax]
0x411911: mov     edx, [ecx+38h]
0x411914: push    eax
0x411915: call    edx
0x411917: mov     eax, [esp+2F8h+var_2E4]
0x41191B: mov     ecx, [eax]
0x41191D: mov     edx, [ecx+8]
0x411920: push    eax
0x411921: call    edx
0x411923: mov     eax, [esp+2F8h+arg_0]
0x41192A: test    eax, eax
0x41192C: lea     edx, [esp+2F8h+var_218]
0x411933: jz      short loc_411945
0x411935: sub     edx, eax
0x411937: mov     cl, [eax]
0x411939: mov     [edx+eax], cl
0x41193C: add     eax, 1
0x41193F: test    cl, cl
0x411941: jnz     short loc_411937
0x411943: jmp     short loc_411960
0x411945: mov     eax, dword_B0316C
0x41194A: mov     ecx, off_B03164; "ScreenShot"
0x411950: push    eax
0x411951: push    ecx
0x411952: push    offset aSD_bmp; "%s%d.bmp"
0x411957: push    edx
0x411958: call    __sprintf
0x41195D: add     esp, 10h
0x411960: push    180h
0x411965: lea     eax, [esp+2FCh+var_218]
0x41196C: push    8301h; int
0x411971: push    eax; wchar_t *
0x411972: call    __wopen
0x411977: add     esp, 0Ch
0x41197A: cmp     eax, 0FFFFFFFFh
0x41197D: mov     [esp+2F8h+anonymous_3], eax
0x411981: jz      loc_411B29
0x411987: mov     ecx, [edi+54h]
0x41198A: mov     ebx, [ecx]
0x41198C: mov     eax, nHeight
0x411991: mov     edx, [edi+64h]
0x411994: mov     ecx, [edi+5Ch]
0x411997: mov     ebp, [ecx]
0x411999: add     ebp, [edi+50h]
0x41199C: mov     [esp+2F8h+anonymous_1], eax
0x4119A0: imul    eax, ebx
0x4119A3: mov     [esp+2F8h+anonymous_2], edx
0x4119A7: push    1
0x4119A9: lea     edx, [eax+eax*2]
0x4119AC: push    edx
0x4119AD: mov     ecx, offset FormHeap
0x4119B2: mov     [esp+300h+var_2CC], ebx
0x4119B6: call    j_MemoryHeap_Alloc
0x4119BB: mov     esi, eax
0x4119BD: mov     eax, [esp+2F8h+anonymous_1]
0x4119C1: add     eax, 0FFFFFFFFh
0x4119C4: xor     ecx, ecx
0x4119C6: cmp     eax, ecx
0x4119C8: mov     [esp+2F8h+var_2E0], eax
0x4119CC: jl      loc_411A4D
0x4119D2: mov     edx, [esp+2F8h+anonymous_2]
0x4119D6: imul    eax, edx
0x4119D9: imul    edx, ebx
0x4119DC: imul    eax, ebx
0x4119DF: neg     edx
0x4119E1: mov     [esp+2F8h+var_2D8], eax
0x4119E5: mov     [esp+2F8h+anonymous_5], edx
0x4119E9: test    ebx, ebx
0x4119EB: jbe     short loc_411A37
0x4119ED: lea     edx, [ebp+1]
0x4119F0: mov     ebx, ebp
0x4119F2: mov     edi, ebp
0x4119F4: sub     ebx, edx
0x4119F6: add     eax, edx
0x4119F8: sub     edi, edx
0x4119FA: mov     edx, [esp+2F8h+var_2CC]
0x4119FE: add     ebx, 2
0x411A01: mov     [esp+2F8h+anonymous_4], ebx
0x411A05: movzx   ebx, byte ptr [edi+eax]
0x411A09: mov     [esi+ecx], bl
0x411A0C: movzx   ebx, byte ptr [eax]
0x411A0F: mov     [esi+ecx+1], bl
0x411A13: mov     ebx, [esp+2F8h+anonymous_4]
0x411A17: movzx   ebx, byte ptr [ebx+eax]
0x411A1B: add     eax, [esp+2F8h+anonymous_2]
0x411A1F: mov     [esi+ecx+2], bl
0x411A23: add     ecx, 3
0x411A26: sub     edx, 1
0x411A29: jnz     short loc_411A05
0x411A2B: mov     edi, [esp+2F8h+anonymous_0]
0x411A2F: mov     eax, [esp+2F8h+var_2D8]
0x411A33: mov     ebx, [esp+2F8h+var_2CC]
0x411A37: add     eax, [esp+2F8h+anonymous_5]
0x411A3B: sub     [esp+2F8h+var_2E0], 1
0x411A40: cmp     [esp+2F8h+var_2E0], 0
0x411A45: mov     [esp+2F8h+var_2D8], eax
0x411A49: jge     short loc_4119E9
0x411A4B: xor     ecx, ecx
0x411A4D: mov     edx, [esp+2F8h+anonymous_1]
0x411A51: mov     eax, edx
0x411A53: imul    eax, ebx
0x411A56: mov     [esp+2F8h+var_2AE], cx
0x411A5B: mov     [esp+2F8h+var_2AC], cx
0x411A60: mov     [esp+2F8h+var_296], ecx
0x411A64: mov     [esp+2F8h+var_28E], ecx
0x411A68: mov     [esp+2F8h+var_28A], ecx
0x411A6C: mov     [esp+2F8h+var_286], ecx
0x411A70: mov     [esp+2F8h+var_282], ecx
0x411A74: lea     ebp, [eax+eax*2]
0x411A77: push    36h ; '6'; unsigned int
0x411A79: lea     ecx, [esp+2FCh+anonymous_6]
0x411A7D: mov     [esp+2FCh+var_2A2], ebx
0x411A81: mov     ebx, [esp+2FCh+anonymous_3]
0x411A85: push    ecx; void *
0x411A86: lea     eax, [ebp+36h]
0x411A89: push    ebx; int
0x411A8A: mov     [esp+304h+anonymous_6], 4D42h
0x411A91: mov     [esp+304h+var_2B2], eax
0x411A95: mov     [esp+304h+var_2AA], 36h ; '6'
0x411A9D: mov     [esp+304h+var_2A6], 28h ; '('
0x411AA5: mov     [esp+304h+var_29E], edx
0x411AA9: mov     [esp+304h+var_29A], 1
0x411AB0: mov     [esp+304h+var_298], 18h
0x411AB7: mov     [esp+304h+var_292], ebp
0x411ABB: call    __write
0x411AC0: push    ebp; unsigned int
0x411AC1: push    esi; void *
0x411AC2: push    ebx; int
0x411AC3: call    __write
0x411AC8: push    ebx; int
0x411AC9: call    __close
0x411ACE: add     esp, 1Ch
0x411AD1: push    esi; void *
0x411AD2: mov     ecx, offset FormHeap
0x411AD7: call    MemoryHeap_Free_checked
0x411ADC: cmp     [esp+2F8h+arg_0], 0
0x411AE4: jnz     short loc_411B3E
0x411AE6: lea     edx, [esp+2F8h+var_218]
0x411AED: push    edx
0x411AEE: lea     eax, [esp+2FCh+var_114]
0x411AF5: push    offset aScreenshotFile; "ScreenShot: File '%s' created."
0x411AFA: push    eax
0x411AFB: call    __sprintf
0x411B00: fld     ds:flt_A31E2C
0x411B06: add     esp, 8
0x411B09: fstp    [esp+2FCh+duration]; duration
0x411B0C: push    1; unk2
0x411B0E: lea     ecx, [esp+300h+var_114]
0x411B15: push    0; unk1
0x411B17: push    ecx; string
0x411B18: call    GameUI_QueueMessage
0x411B1D: add     esp, 10h
0x411B20: add     dword_B0316C, 1
0x411B27: jmp     short loc_411B3E
0x411B29: lea     edx, [esp+2F8h+var_218]
0x411B30: push    edx; ArgList
0x411B31: push    offset aScreenshotUn_1; "ScreenShot: Unable to create file '%s'."
0x411B36: call    PrintError
0x411B3B: add     esp, 8
0x411B3E: mov     eax, [edi]
0x411B40: mov     edx, [eax]
0x411B42: push    1
0x411B44: mov     ecx, edi
0x411B46: call    edx
0x411B48: mov     ecx, dword ptr [esp+2F8h+var_C]
0x411B4F: mov     large fs:0, ecx
0x411B56: pop     ecx
0x411B57: pop     edi
0x411B58: pop     esi
0x411B59: pop     ebp
0x411B5A: pop     ebx
0x411B5B: mov     ecx, [esp+2E4h+var_10]
0x411B62: xor     ecx, esp
0x411B64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x411B69: add     esp, 2E4h
0x411B6F: retn
