0x50B210: push    ebp
0x50B211: mov     ebp, esp
0x50B213: and     esp, 0FFFFFFC0h
0x50B216: sub     esp, 40h
0x50B219: push    offset aCurrentHdrPara; "Current HDR Params:"
0x50B21E: call    Interface_ConsolePrint
0x50B223: push    offset aSisg; "SISG:"
0x50B228: call    Interface_ConsolePrint
0x50B22D: add     esp, 8
0x50B230: cmp     byte ptr ds:0B43074h, 0
0x50B237: jz      short loc_50B24A
0x50B239: fld     dword ptr ds:0B431FCh
0x50B23F: mov     eax, ds:0B43224h
0x50B244: fstp    [esp+40h+var_8]
0x50B248: jmp     short loc_50B259
0x50B24A: fld     dword ptr ds:0B431F8h
0x50B250: mov     eax, ds:0B43220h
0x50B255: fstp    [esp+40h+var_8]
0x50B259: fld     [esp+40h+var_8]
0x50B25D: sub     esp, 8
0x50B260: fstp    [esp+48h+var_48]
0x50B263: push    eax
0x50B264: push    offset aInumblurpasses; "    iNumBlurpasses: %d fBlurRadius: %f"
0x50B269: call    Interface_ConsolePrint
0x50B26E: add     esp, 10h
0x50B271: cmp     byte ptr ds:0B43074h, 0
0x50B278: jz      short loc_50B28C
0x50B27A: fld     dword ptr ds:0B431F4h
0x50B280: fstp    [esp+40h+var_8]
0x50B284: fld     dword ptr ds:0B431ECh
0x50B28A: jmp     short loc_50B29C
0x50B28C: fld     dword ptr ds:0B431F0h
0x50B292: fstp    [esp+40h+var_8]
0x50B296: fld     dword ptr ds:0B431E8h
0x50B29C: fstp    [esp+40h+var_4]
0x50B2A0: sub     esp, 10h
0x50B2A3: fld     [esp+50h+var_8]
0x50B2A7: fld     dword ptr ds:0B2C7A4h
0x50B2AD: fld     st
0x50B2AF: fmulp   st(2), st
0x50B2B1: fxch    st(1)
0x50B2B3: fstp    [esp+50h+var_8]
0x50B2B7: fld     [esp+50h+var_8]
0x50B2BB: fstp    [esp+50h+var_48]
0x50B2BF: fdivr   [esp+50h+var_4]
0x50B2C3: fstp    [esp+50h+var_4]
0x50B2C7: fld     [esp+50h+var_4]
0x50B2CB: fstp    [esp+50h+var_50]
0x50B2CE: push    offset aFbrightclampFF; "    fBrightClamp: %f fBrightScale: %f"
0x50B2D3: call    Interface_ConsolePrint
0x50B2D8: push    offset aSsp; "SSP:"
0x50B2DD: call    Interface_ConsolePrint
0x50B2E2: fld     dword ptr ds:0B2C73Ch
0x50B2E8: add     esp, 8
0x50B2EB: fstp    [esp+50h+var_48]
0x50B2EF: fld     dword ptr ds:0B42F4Ch
0x50B2F5: fstp    [esp+50h+var_50]
0x50B2F8: push    offset aFsunlightdimme; "    fSunlightDimmer: %f Lum Ramp: %f"
0x50B2FD: call    Interface_ConsolePrint
0x50B302: push    offset aShp; "SHP:"
0x50B307: call    Interface_ConsolePrint
0x50B30C: add     esp, 18h
0x50B30F: cmp     byte ptr ds:0B43074h, 0
0x50B316: jz      short loc_50B32A
0x50B318: fld     dword ptr ds:0B4320Ch
0x50B31E: fstp    [esp+40h+var_4]
0x50B322: fld     dword ptr ds:0B43204h
0x50B328: jmp     short loc_50B33A
0x50B32A: fld     dword ptr ds:0B43208h
0x50B330: fstp    [esp+40h+var_4]
0x50B334: fld     dword ptr ds:0B43200h
0x50B33A: fstp    [esp+40h+var_8]
0x50B33E: sub     esp, 10h
0x50B341: fld     [esp+50h+var_4]
0x50B345: fstp    [esp+50h+var_48]
0x50B349: fld     [esp+50h+var_8]
0x50B34D: fstp    [esp+50h+var_50]
0x50B350: push    offset aFeyeadaptspeed; "    fEyeAdaptSpeed: %f fEmissiveHDRMult"...
0x50B355: call    Interface_ConsolePrint
0x50B35A: fld     dword ptr ds:0B42F44h
0x50B360: add     esp, 4
0x50B363: fstp    [esp+50h+var_48]
0x50B367: fld     dword ptr ds:0B42EA8h
0x50B36D: fstp    [esp+50h+var_50]
0x50B370: push    offset aFtreedimmerFFg; "    fTreeDimmer: %f fGrassDimmer: %f"
0x50B375: call    Interface_ConsolePrint
0x50B37A: add     esp, 14h
0x50B37D: cmp     byte ptr ds:0B43074h, 0
0x50B384: jz      short loc_50B398
0x50B386: fld     dword ptr ds:0B4321Ch
0x50B38C: fstp    [esp+40h+var_4]
0x50B390: fld     dword ptr ds:0B43214h
0x50B396: jmp     short loc_50B3A8
0x50B398: fld     dword ptr ds:0B43218h
0x50B39E: fstp    [esp+40h+var_4]
0x50B3A2: fld     dword ptr ds:0B43210h
0x50B3A8: fstp    [esp+40h+var_8]
0x50B3AC: sub     esp, 10h
0x50B3AF: fld     [esp+50h+var_4]
0x50B3B3: fstp    [esp+50h+var_48]
0x50B3B7: fld     [esp+50h+var_8]
0x50B3BB: fstp    [esp+50h+var_50]
0x50B3BE: push    offset aFupperlumclamp; "    fUpperLUMClamp: %f fTargetLUM: %f"
0x50B3C3: call    Interface_ConsolePrint
0x50B3C8: add     esp, 14h
0x50B3CB: mov     al, 1
0x50B3CD: mov     esp, ebp
0x50B3CF: pop     ebp
0x50B3D0: retn
