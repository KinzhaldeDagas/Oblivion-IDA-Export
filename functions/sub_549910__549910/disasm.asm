0x549910: push    0FFFFFFFFh
0x549912: push    offset SEH_787830
0x549917: mov     eax, large fs:0
0x54991D: push    eax
0x54991E: push    ebx
0x54991F: push    esi
0x549920: push    edi
0x549921: mov     eax, ds:0B30AACh
0x549926: xor     eax, esp
0x549928: push    eax
0x549929: lea     eax, [esp+1Ch+var_C]
0x54992D: mov     large fs:0, eax
0x549933: mov     edi, ecx
0x549935: cmp     byte ptr [edi+1DAh], 0
0x54993C: jnz     short loc_5499B6
0x54993E: mov     ebx, [esp+1Ch+arg_0]
0x549942: xor     esi, esi
0x549944: cmp     ebx, esi
0x549946: jz      short loc_5499B6
0x549948: mov     ecx, [edi+0Ch]
0x54994B: cmp     ecx, esi
0x54994D: jz      short loc_549957
0x54994F: mov     eax, [ecx]
0x549951: mov     edx, [eax]
0x549953: push    1
0x549955: call    edx
0x549957: push    14h; Size
0x549959: call    FormHeapAlloc
0x54995E: add     esp, 4
0x549961: mov     [esp+1Ch+arg_0], eax
0x549965: cmp     eax, esi
0x549967: mov     [esp+1Ch+var_4], esi
0x54996B: jz      short loc_54997A
0x54996D: push    0Dh
0x54996F: push    1
0x549971: mov     ecx, eax
0x549973: call    sub_54EA00
0x549978: jmp     short loc_54997C
0x54997A: xor     eax, eax
0x54997C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x549984: mov     [edi+0Ch], eax
0x549987: mov     ecx, [edi+0Ch]
0x54998A: fld     dword ptr [ebx+esi*4]
0x54998D: mov     eax, [ecx]
0x54998F: mov     edx, [eax+4Ch]
0x549992: push    ecx
0x549993: fstp    [esp+20h+var_20]
0x549996: push    esi
0x549997: call    edx
0x549999: add     esi, 1
0x54999C: cmp     esi, 0Dh
0x54999F: jb      short loc_549987
0x5499A1: mov     eax, [edi+10h]
0x5499A4: mov     edx, [edi+0Ch]
0x5499A7: mov     eax, [eax+2Ch]
0x5499AA: lea     ecx, [edi+10h]
0x5499AD: push    edx
0x5499AE: call    eax
0x5499B0: test    al, al
0x5499B2: jnz     short loc_5499C0
0x5499B4: mov     ecx, edi
0x5499B6: mov     edx, [edi]
0x5499B8: mov     eax, [edx+0D4h]
0x5499BE: call    eax
0x5499C0: mov     ecx, dword ptr [esp+1Ch+var_C]
0x5499C4: mov     large fs:0, ecx
0x5499CB: pop     ecx
0x5499CC: pop     edi
0x5499CD: pop     esi
0x5499CE: pop     ebx
0x5499CF: add     esp, 0Ch
0x5499D2: retn    4
