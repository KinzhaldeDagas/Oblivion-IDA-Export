0x909560: sub     esp, 18h
0x909563: push    ebx
0x909564: push    esi
0x909565: mov     esi, [esp+20h+arg_0]
0x909569: push    0FFFFFFFFh
0x90956B: push    3
0x90956D: lea     eax, [esp+28h+var_18]
0x909571: mov     bl, 1
0x909573: push    eax
0x909574: mov     ecx, esi
0x909576: mov     [esp+2Ch+var_18], offset sub_9068E0
0x90957E: mov     [esp+2Ch+var_14], offset sub_8F6410
0x909586: mov     [esp+2Ch+var_10], offset sub_8F6450
0x90958E: mov     [esp+2Ch+var_C], offset sub_8F6490
0x909596: mov     [esp+2Ch+var_8], bl
0x90959A: mov     [esp+2Ch+var_7], bl
0x90959E: call    sub_8DADD0
0x9095A3: push    3
0x9095A5: push    0FFFFFFFFh
0x9095A7: lea     ecx, [esp+28h+var_18]
0x9095AB: push    ecx
0x9095AC: mov     ecx, esi
0x9095AE: mov     [esp+2Ch+var_18], offset sub_906780
0x9095B6: mov     [esp+2Ch+var_14], offset sub_9091D0
0x9095BE: mov     [esp+2Ch+var_10], offset sub_908DE0
0x9095C6: mov     [esp+2Ch+var_C], offset sub_908A40
0x9095CE: mov     [esp+2Ch+var_8], 0
0x9095D3: mov     [esp+2Ch+var_7], bl
0x9095D7: call    sub_8DADD0
0x9095DC: push    3
0x9095DE: push    3
0x9095E0: lea     edx, [esp+28h+var_18]
0x9095E4: push    edx
0x9095E5: mov     ecx, esi
0x9095E7: mov     [esp+2Ch+var_18], offset sub_906940
0x9095EF: mov     [esp+2Ch+var_14], offset sub_9091D0
0x9095F7: mov     [esp+2Ch+var_10], offset sub_908DE0
0x9095FF: mov     [esp+2Ch+var_C], offset sub_908A40
0x909607: mov     [esp+2Ch+var_8], 0
0x90960C: mov     [esp+2Ch+var_7], bl
0x909610: call    sub_8DADD0
0x909615: pop     esi
0x909616: pop     ebx
0x909617: add     esp, 18h
0x90961A: retn
