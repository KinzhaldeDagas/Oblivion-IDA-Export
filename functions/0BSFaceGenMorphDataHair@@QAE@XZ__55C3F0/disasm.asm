0x55C3F0: push    0FFFFFFFFh
0x55C3F2: push    offset ??0BSFaceGenMorphDataHair@@QAE@XZ_SEH
0x55C3F7: mov     eax, large fs:0
0x55C3FD: push    eax
0x55C3FE: sub     esp, 20h
0x55C401: push    ebx
0x55C402: push    ebp
0x55C403: push    esi
0x55C404: push    edi
0x55C405: mov     eax, ds:0B30AACh
0x55C40A: xor     eax, esp
0x55C40C: push    eax
0x55C40D: lea     eax, [esp+40h+var_C]
0x55C411: mov     large fs:0, eax
0x55C417: mov     ebx, ecx
0x55C419: mov     [esp+40h+var_20], ebx
0x55C41D: xor     ebp, ebp
0x55C41F: push    offset NiRefObject_objcount; lpAddend
0x55C424: mov     dword ptr [ebx], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x55C42A: mov     [ebx+4], ebp
0x55C42D: call    dword ptr ds:0A28078h
0x55C433: mov     esi, [esp+40h+arg_0]
0x55C437: cmp     esi, ebp
0x55C439: mov     [esp+40h+var_4], ebp
0x55C43D: mov     dword ptr [ebx], offset ??_7BSFaceGenMorphDataHair@@6B@; const BSFaceGenMorphDataHair::`vftable'
0x55C443: mov     [ebx+8], ebp
0x55C446: jz      loc_55C69F
0x55C44C: mov     eax, [esi+84h]
0x55C452: cmp     eax, ebp
0x55C454: jz      short loc_55C471
0x55C456: mov     ecx, [esi+88h]
0x55C45C: sub     ecx, eax
0x55C45E: mov     eax, 2E8BA2E9h
0x55C463: imul    ecx
0x55C465: sar     edx, 3
0x55C468: mov     eax, edx
0x55C46A: shr     eax, 1Fh
0x55C46D: add     eax, edx
0x55C46F: jnz     short loc_55C476
0x55C471: call    __invalid_parameter_noinfo
0x55C476: mov     eax, [esi+84h]
0x55C47C: cmp     dword ptr [eax+18h], 10h
0x55C480: jb      short loc_55C487
0x55C482: mov     eax, [eax+4]
0x55C485: jmp     short loc_55C48A
0x55C487: add     eax, 4
0x55C48A: push    eax; Str2
0x55C48B: push    offset aHairmorph; "HairMorph"
0x55C490: call    __strcmp
0x55C495: add     esp, 8
0x55C498: test    eax, eax
0x55C49A: jnz     loc_55C69F
0x55C4A0: mov     eax, [esi+84h]
0x55C4A6: cmp     eax, ebp
0x55C4A8: jz      short loc_55C4C5
0x55C4AA: mov     ecx, [esi+88h]
0x55C4B0: sub     ecx, eax
0x55C4B2: mov     eax, 2E8BA2E9h
0x55C4B7: imul    ecx
0x55C4B9: sar     edx, 3
0x55C4BC: mov     ecx, edx
0x55C4BE: shr     ecx, 1Fh
0x55C4C1: add     ecx, edx
0x55C4C3: jnz     short loc_55C4CA
0x55C4C5: call    __invalid_parameter_noinfo
0x55C4CA: mov     eax, [esi+84h]
0x55C4D0: mov     edx, [eax+20h]
0x55C4D3: add     eax, 1Ch
0x55C4D6: cmp     edx, ebp
0x55C4D8: jnz     short loc_55C4E2
0x55C4DA: xor     edi, edi
0x55C4DC: mov     [esp+40h+arg_0], edi
0x55C4E0: jmp     short loc_55C4FD
0x55C4E2: mov     ecx, [eax+8]
0x55C4E5: sub     ecx, edx
0x55C4E7: mov     eax, 2AAAAAABh
0x55C4EC: imul    ecx
0x55C4EE: sar     edx, 1
0x55C4F0: mov     eax, edx
0x55C4F2: shr     eax, 1Fh
0x55C4F5: add     eax, edx
0x55C4F7: mov     [esp+40h+arg_0], eax
0x55C4FB: mov     edi, eax
0x55C4FD: push    0Ch; Size
0x55C4FF: call    FormHeapAlloc
0x55C504: add     esp, 4
0x55C507: mov     [esp+40h+var_24], eax
0x55C50B: cmp     eax, ebp
0x55C50D: mov     byte ptr [esp+40h+var_4], 1
0x55C512: jz      short loc_55C51E
0x55C514: push    edi
0x55C515: mov     ecx, eax
0x55C517: call    sub_55A0C0
0x55C51C: jmp     short loc_55C520
0x55C51E: xor     eax, eax
0x55C520: cmp     edi, ebp
0x55C522: mov     [ebx+8], eax
0x55C525: mov     edx, [eax+4]
0x55C528: mov     [esp+40h+var_24], edx
0x55C52C: jbe     loc_55C69F
0x55C532: xor     ebx, ebx
0x55C534: mov     eax, [esi+84h]
0x55C53A: test    eax, eax
0x55C53C: jz      short loc_55C559
0x55C53E: mov     ecx, [esi+88h]
0x55C544: sub     ecx, eax
0x55C546: mov     eax, 2E8BA2E9h
0x55C54B: imul    ecx
0x55C54D: sar     edx, 3
0x55C550: mov     eax, edx
0x55C552: shr     eax, 1Fh
0x55C555: add     eax, edx
0x55C557: jnz     short loc_55C55E
0x55C559: call    __invalid_parameter_noinfo
0x55C55E: mov     edi, [esi+84h]
0x55C564: mov     eax, [edi+20h]
0x55C567: add     edi, 1Ch
0x55C56A: test    eax, eax
0x55C56C: jz      short loc_55C587
0x55C56E: mov     ecx, [edi+8]
0x55C571: sub     ecx, eax
0x55C573: mov     eax, 2AAAAAABh
0x55C578: imul    ecx
0x55C57A: sar     edx, 1
0x55C57C: mov     eax, edx
0x55C57E: shr     eax, 1Fh
0x55C581: add     eax, edx
0x55C583: cmp     ebp, eax
0x55C585: jb      short loc_55C58C
0x55C587: call    __invalid_parameter_noinfo
0x55C58C: mov     edi, [edi+4]
0x55C58F: mov     eax, [esi+84h]
0x55C595: add     edi, ebx
0x55C597: test    eax, eax
0x55C599: mov     [esp+40h+var_28], edi
0x55C59D: jz      short loc_55C5BA
0x55C59F: mov     ecx, [esi+88h]
0x55C5A5: sub     ecx, eax
0x55C5A7: mov     eax, 2E8BA2E9h
0x55C5AC: imul    ecx
0x55C5AE: sar     edx, 3
0x55C5B1: mov     ecx, edx
0x55C5B3: shr     ecx, 1Fh
0x55C5B6: add     ecx, edx
0x55C5B8: jnz     short loc_55C5BF
0x55C5BA: call    __invalid_parameter_noinfo
0x55C5BF: mov     edi, [esi+84h]
0x55C5C5: mov     eax, [edi+20h]
0x55C5C8: add     edi, 1Ch
0x55C5CB: test    eax, eax
0x55C5CD: jz      short loc_55C5E8
0x55C5CF: mov     ecx, [edi+8]
0x55C5D2: sub     ecx, eax
0x55C5D4: mov     eax, 2AAAAAABh
0x55C5D9: imul    ecx
0x55C5DB: sar     edx, 1
0x55C5DD: mov     eax, edx
0x55C5DF: shr     eax, 1Fh
0x55C5E2: add     eax, edx
0x55C5E4: cmp     ebp, eax
0x55C5E6: jb      short loc_55C5ED
0x55C5E8: call    __invalid_parameter_noinfo
0x55C5ED: mov     edi, [edi+4]
0x55C5F0: mov     eax, [esi+84h]
0x55C5F6: add     edi, ebx
0x55C5F8: test    eax, eax
0x55C5FA: mov     [esp+40h+var_2C], edi
0x55C5FE: jz      short loc_55C61B
0x55C600: mov     ecx, [esi+88h]
0x55C606: sub     ecx, eax
0x55C608: mov     eax, 2E8BA2E9h
0x55C60D: imul    ecx
0x55C60F: sar     edx, 3
0x55C612: mov     eax, edx
0x55C614: shr     eax, 1Fh
0x55C617: add     eax, edx
0x55C619: jnz     short loc_55C620
0x55C61B: call    __invalid_parameter_noinfo
0x55C620: mov     edi, [esi+84h]
0x55C626: mov     eax, [edi+20h]
0x55C629: add     edi, 1Ch
0x55C62C: test    eax, eax
0x55C62E: jz      short loc_55C649
0x55C630: mov     ecx, [edi+8]
0x55C633: sub     ecx, eax
0x55C635: mov     eax, 2AAAAAABh
0x55C63A: imul    ecx
0x55C63C: sar     edx, 1
0x55C63E: mov     eax, edx
0x55C640: shr     eax, 1Fh
0x55C643: add     eax, edx
0x55C645: cmp     ebp, eax
0x55C647: jb      short loc_55C64E
0x55C649: call    __invalid_parameter_noinfo
0x55C64E: mov     ecx, [edi+4]
0x55C651: fld     dword ptr [ebx+ecx]
0x55C654: mov     edx, [esp+40h+var_2C]
0x55C658: mov     eax, [esp+40h+var_28]
0x55C65C: fstp    [esp+40h+var_18]
0x55C660: fld     dword ptr [edx+4]
0x55C663: mov     ecx, [esp+40h+var_18]
0x55C667: fstp    [esp+40h+var_14]
0x55C66B: mov     edx, [esp+40h+var_14]
0x55C66F: fld     dword ptr [eax+8]
0x55C672: mov     eax, [esp+40h+var_24]
0x55C676: mov     [ebx+eax], ecx
0x55C679: fstp    [esp+40h+var_10]
0x55C67D: mov     ecx, [esp+40h+var_10]
0x55C681: mov     [ebx+eax+4], edx
0x55C685: mov     [ebx+eax+8], ecx
0x55C689: add     ebp, 1
0x55C68C: add     ebx, 0Ch
0x55C68F: cmp     ebp, [esp+40h+arg_0]
0x55C693: jb      loc_55C534
0x55C699: mov     eax, [esp+40h+var_20]
0x55C69D: jmp     short loc_55C6A1
0x55C69F: mov     eax, ebx
0x55C6A1: mov     ecx, [esp+40h+var_C]
0x55C6A5: mov     large fs:0, ecx
0x55C6AC: pop     ecx
0x55C6AD: pop     edi
0x55C6AE: pop     esi
0x55C6AF: pop     ebp
0x55C6B0: pop     ebx
0x55C6B1: add     esp, 2Ch
0x55C6B4: retn    4
