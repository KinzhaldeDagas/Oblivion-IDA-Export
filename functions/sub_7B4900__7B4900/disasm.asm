0x7B4900: mov     eax, dword ptr [esp+a5]; MoonSugarEffect decode: thin wrapper around sub_803570; applies one BSShader through global imageSpaceShaderList fullscreen quad, used by menu/water/canopy/misc paths.
0x7B4904: mov     ecx, [esp+a4]
0x7B4908: mov     edx, [esp+a3]
0x7B490C: push    eax; a5
0x7B490D: mov     eax, [esp+4+a2]
0x7B4911: push    ecx; a4
0x7B4912: mov     ecx, ds:0B42D7Ch; this
0x7B4918: push    edx; a3
0x7B4919: push    eax; a2
0x7B491A: call    sub_803570; MoonSugarEffect decode: single image-space shader helper; ensures fullscreen quad, binds shader temporarily, renders it, then releases quad shader binding.
0x7B491F: retn
