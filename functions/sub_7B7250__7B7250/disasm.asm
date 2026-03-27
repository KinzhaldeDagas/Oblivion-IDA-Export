0x7B7250: push    ebx
0x7B7251: push    ebp
0x7B7252: push    esi
0x7B7253: push    edi
0x7B7254: mov     ebp, ecx
0x7B7256: xor     eax, eax
0x7B7258: xor     ebx, ebx
0x7B725A: mov     ds:0B42EC0h, eax
0x7B725F: mov     ds:0B42EC4h, eax
0x7B7264: mov     ds:0B42EC8h, eax
0x7B7269: mov     ds:0B42ECCh, eax
0x7B726E: mov     ds:0B42ED0h, eax
0x7B7273: mov     ds:0B42ED4h, eax
0x7B7278: mov     ds:0B42ED8h, eax
0x7B727D: mov     ds:0B42EDCh, eax
0x7B7282: mov     ds:0B42EE0h, eax
0x7B7287: mov     ds:0B42EE4h, eax
0x7B728C: mov     ds:0B42EE8h, eax
0x7B7291: mov     ds:0B42EECh, eax
0x7B7296: mov     ds:0B42EF0h, eax
0x7B729B: mov     ds:0B42EF4h, eax
0x7B72A0: mov     ds:0B42EF8h, eax
0x7B72A5: mov     ds:0B42EFCh, eax
0x7B72AA: mov     ds:0B42F00h, eax
0x7B72AF: mov     ds:0B42F04h, eax
0x7B72B4: mov     ds:0B42F08h, eax
0x7B72B9: mov     ds:0B42F0Ch, eax
0x7B72BE: mov     ds:0B42F10h, eax
0x7B72C3: mov     ds:0B42F14h, eax
0x7B72C8: mov     ds:0B42F18h, eax
0x7B72CD: mov     ds:0B42F1Ch, eax
0x7B72D2: mov     ds:0B42F20h, eax
0x7B72D7: mov     ds:0B42F24h, eax
0x7B72DC: mov     ds:0B42F28h, eax
0x7B72E1: mov     ds:0B42F2Ch, eax
0x7B72E6: mov     eax, ds:0B430ECh
0x7B72EB: cmp     eax, ebx
0x7B72ED: mov     edi, ds:0A2807Ch
0x7B72F3: mov     ds:0B42F68h, bl
0x7B72F9: mov     ds:0B42D80h, bl
0x7B72FF: mov     byte ptr ds:0B42F3Fh, 1
0x7B7306: mov     dword ptr ds:0B42E90h, 0FFFFFFFFh
0x7B7310: mov     ds:0B42EB8h, ebx
0x7B7316: mov     byte ptr ds:0B42EA7h, 1
0x7B731D: mov     ds:0B42E85h, bl
0x7B7323: mov     dword ptr ds:0B42F40h, 2Fh ; '/'
0x7B732D: mov     dword ptr ds:0B42D70h, offset j_j_NiFile_GetNiFile
0x7B7337: mov     ds:0B42D78h, ebx
0x7B733D: mov     ds:0B42EB4h, ebx
0x7B7343: mov     byte ptr ds:0B42E95h, 1
0x7B734A: mov     ds:0B42F31h, bl
0x7B7350: mov     ds:0B42E94h, bl
0x7B7356: mov     ds:0B42E86h, bl
0x7B735C: mov     ds:0B42EBCh, ebx
0x7B7362: mov     ds:0B42F48h, ebx
0x7B7368: mov     ds:0B42D74h, ebx
0x7B736E: mov     byte ptr ds:0B42E87h, 1
0x7B7375: mov     ds:0B42F33h, bl
0x7B737B: jz      short loc_7B739D
0x7B737D: mov     esi, eax
0x7B737F: add     eax, 4
0x7B7382: push    eax; lpAddend
0x7B7383: call    edi ; InterlockedDecrement
0x7B7385: test    eax, eax
0x7B7387: jnz     short loc_7B7397
0x7B7389: cmp     esi, ebx
0x7B738B: jz      short loc_7B7397
0x7B738D: mov     eax, [esi]
0x7B738F: mov     edx, [eax]
0x7B7391: push    1
0x7B7393: mov     ecx, esi
0x7B7395: call    edx
0x7B7397: mov     ds:0B430ECh, ebx
0x7B739D: mov     esi, ds:0B430DCh
0x7B73A3: cmp     esi, ebx
0x7B73A5: jz      short loc_7B73C5
0x7B73A7: lea     eax, [esi+4]
0x7B73AA: push    eax; lpAddend
0x7B73AB: call    edi ; InterlockedDecrement
0x7B73AD: test    eax, eax
0x7B73AF: jnz     short loc_7B73BF
0x7B73B1: cmp     esi, ebx
0x7B73B3: jz      short loc_7B73BF
0x7B73B5: mov     edx, [esi]
0x7B73B7: mov     eax, [edx]
0x7B73B9: push    1
0x7B73BB: mov     ecx, esi
0x7B73BD: call    eax
0x7B73BF: mov     ds:0B430DCh, ebx
0x7B73C5: mov     esi, ds:0B430F0h
0x7B73CB: cmp     esi, ebx
0x7B73CD: jz      short loc_7B73ED
0x7B73CF: lea     ecx, [esi+4]
0x7B73D2: push    ecx; lpAddend
0x7B73D3: call    edi ; InterlockedDecrement
0x7B73D5: test    eax, eax
0x7B73D7: jnz     short loc_7B73E7
0x7B73D9: cmp     esi, ebx
0x7B73DB: jz      short loc_7B73E7
0x7B73DD: mov     edx, [esi]
0x7B73DF: mov     eax, [edx]
0x7B73E1: push    1
0x7B73E3: mov     ecx, esi
0x7B73E5: call    eax
0x7B73E7: mov     ds:0B430F0h, ebx
0x7B73ED: mov     esi, ds:0B430E0h
0x7B73F3: cmp     esi, ebx
0x7B73F5: jz      short loc_7B7415
0x7B73F7: lea     ecx, [esi+4]
0x7B73FA: push    ecx; lpAddend
0x7B73FB: call    edi ; InterlockedDecrement
0x7B73FD: test    eax, eax
0x7B73FF: jnz     short loc_7B740F
0x7B7401: cmp     esi, ebx
0x7B7403: jz      short loc_7B740F
0x7B7405: mov     edx, [esi]
0x7B7407: mov     eax, [edx]
0x7B7409: push    1
0x7B740B: mov     ecx, esi
0x7B740D: call    eax
0x7B740F: mov     ds:0B430E0h, ebx
0x7B7415: mov     esi, ds:0B43100h
0x7B741B: cmp     esi, ebx
0x7B741D: jz      short loc_7B743D
0x7B741F: lea     ecx, [esi+4]
0x7B7422: push    ecx; lpAddend
0x7B7423: call    edi ; InterlockedDecrement
0x7B7425: test    eax, eax
0x7B7427: jnz     short loc_7B7437
0x7B7429: cmp     esi, ebx
0x7B742B: jz      short loc_7B7437
0x7B742D: mov     edx, [esi]
0x7B742F: mov     eax, [edx]
0x7B7431: push    1
0x7B7433: mov     ecx, esi
0x7B7435: call    eax
0x7B7437: mov     ds:0B43100h, ebx
0x7B743D: mov     esi, ds:0B430E4h
0x7B7443: cmp     esi, ebx
0x7B7445: jz      short loc_7B7465
0x7B7447: lea     ecx, [esi+4]
0x7B744A: push    ecx; lpAddend
0x7B744B: call    edi ; InterlockedDecrement
0x7B744D: test    eax, eax
0x7B744F: jnz     short loc_7B745F
0x7B7451: cmp     esi, ebx
0x7B7453: jz      short loc_7B745F
0x7B7455: mov     edx, [esi]
0x7B7457: mov     eax, [edx]
0x7B7459: push    1
0x7B745B: mov     ecx, esi
0x7B745D: call    eax
0x7B745F: mov     ds:0B430E4h, ebx
0x7B7465: mov     esi, ds:0B4311Ch
0x7B746B: cmp     esi, ebx
0x7B746D: jz      short loc_7B748D
0x7B746F: lea     ecx, [esi+4]
0x7B7472: push    ecx; lpAddend
0x7B7473: call    edi ; InterlockedDecrement
0x7B7475: test    eax, eax
0x7B7477: jnz     short loc_7B7487
0x7B7479: cmp     esi, ebx
0x7B747B: jz      short loc_7B7487
0x7B747D: mov     edx, [esi]
0x7B747F: mov     eax, [edx]
0x7B7481: push    1
0x7B7483: mov     ecx, esi
0x7B7485: call    eax
0x7B7487: mov     ds:0B4311Ch, ebx
0x7B748D: mov     esi, ds:0B43120h
0x7B7493: cmp     esi, ebx
0x7B7495: jz      short loc_7B74B5
0x7B7497: lea     ecx, [esi+4]
0x7B749A: push    ecx; lpAddend
0x7B749B: call    edi ; InterlockedDecrement
0x7B749D: test    eax, eax
0x7B749F: jnz     short loc_7B74AF
0x7B74A1: cmp     esi, ebx
0x7B74A3: jz      short loc_7B74AF
0x7B74A5: mov     edx, [esi]
0x7B74A7: mov     eax, [edx]
0x7B74A9: push    1
0x7B74AB: mov     ecx, esi
0x7B74AD: call    eax
0x7B74AF: mov     ds:0B43120h, ebx
0x7B74B5: mov     esi, ds:0B430F8h
0x7B74BB: cmp     esi, ebx
0x7B74BD: jz      short loc_7B74DD
0x7B74BF: lea     ecx, [esi+4]
0x7B74C2: push    ecx; lpAddend
0x7B74C3: call    edi ; InterlockedDecrement
0x7B74C5: test    eax, eax
0x7B74C7: jnz     short loc_7B74D7
0x7B74C9: cmp     esi, ebx
0x7B74CB: jz      short loc_7B74D7
0x7B74CD: mov     edx, [esi]
0x7B74CF: mov     eax, [edx]
0x7B74D1: push    1
0x7B74D3: mov     ecx, esi
0x7B74D5: call    eax
0x7B74D7: mov     ds:0B430F8h, ebx
0x7B74DD: mov     esi, ds:0B43110h
0x7B74E3: cmp     esi, ebx
0x7B74E5: jz      short loc_7B7505
0x7B74E7: lea     ecx, [esi+4]
0x7B74EA: push    ecx; lpAddend
0x7B74EB: call    edi ; InterlockedDecrement
0x7B74ED: test    eax, eax
0x7B74EF: jnz     short loc_7B74FF
0x7B74F1: cmp     esi, ebx
0x7B74F3: jz      short loc_7B74FF
0x7B74F5: mov     edx, [esi]
0x7B74F7: mov     eax, [edx]
0x7B74F9: push    1
0x7B74FB: mov     ecx, esi
0x7B74FD: call    eax
0x7B74FF: mov     ds:0B43110h, ebx
0x7B7505: mov     esi, ds:0B430D4h
0x7B750B: cmp     esi, ebx
0x7B750D: jz      short loc_7B752D
0x7B750F: lea     ecx, [esi+4]
0x7B7512: push    ecx; lpAddend
0x7B7513: call    edi ; InterlockedDecrement
0x7B7515: test    eax, eax
0x7B7517: jnz     short loc_7B7527
0x7B7519: cmp     esi, ebx
0x7B751B: jz      short loc_7B7527
0x7B751D: mov     edx, [esi]
0x7B751F: mov     eax, [edx]
0x7B7521: push    1
0x7B7523: mov     ecx, esi
0x7B7525: call    eax
0x7B7527: mov     ds:0B430D4h, ebx
0x7B752D: mov     esi, ds:0B43114h
0x7B7533: cmp     esi, ebx
0x7B7535: jz      short loc_7B7555
0x7B7537: lea     ecx, [esi+4]
0x7B753A: push    ecx; lpAddend
0x7B753B: call    edi ; InterlockedDecrement
0x7B753D: test    eax, eax
0x7B753F: jnz     short loc_7B754F
0x7B7541: cmp     esi, ebx
0x7B7543: jz      short loc_7B754F
0x7B7545: mov     edx, [esi]
0x7B7547: mov     eax, [edx]
0x7B7549: push    1
0x7B754B: mov     ecx, esi
0x7B754D: call    eax
0x7B754F: mov     ds:0B43114h, ebx
0x7B7555: mov     esi, ds:0B430F4h
0x7B755B: cmp     esi, ebx
0x7B755D: jz      short loc_7B757D
0x7B755F: lea     ecx, [esi+4]
0x7B7562: push    ecx; lpAddend
0x7B7563: call    edi ; InterlockedDecrement
0x7B7565: test    eax, eax
0x7B7567: jnz     short loc_7B7577
0x7B7569: cmp     esi, ebx
0x7B756B: jz      short loc_7B7577
0x7B756D: mov     edx, [esi]
0x7B756F: mov     eax, [edx]
0x7B7571: push    1
0x7B7573: mov     ecx, esi
0x7B7575: call    eax
0x7B7577: mov     ds:0B430F4h, ebx
0x7B757D: mov     esi, ds:0B430FCh
0x7B7583: cmp     esi, ebx
0x7B7585: mov     ds:0B42F38h, ebx
0x7B758B: mov     ds:0B42F34h, ebx
0x7B7591: mov     ds:0B42F30h, bl
0x7B7597: mov     ds:0B42F3Ch, bl
0x7B759D: mov     ds:0B42F3Eh, bl
0x7B75A3: mov     ds:0B42F60h, ebx
0x7B75A9: jz      short loc_7B75C9
0x7B75AB: lea     ecx, [esi+4]
0x7B75AE: push    ecx; lpAddend
0x7B75AF: call    edi ; InterlockedDecrement
0x7B75B1: test    eax, eax
0x7B75B3: jnz     short loc_7B75C3
0x7B75B5: cmp     esi, ebx
0x7B75B7: jz      short loc_7B75C3
0x7B75B9: mov     edx, [esi]
0x7B75BB: mov     eax, [edx]
0x7B75BD: push    1
0x7B75BF: mov     ecx, esi
0x7B75C1: call    eax
0x7B75C3: mov     ds:0B430FCh, ebx
0x7B75C9: fld     dword ptr ds:0A46B24h
0x7B75CF: push    ecx
0x7B75D0: fstp    [esp+14h+var_14]
0x7B75D3: mov     ds:0B42E97h, bl
0x7B75D9: call    UpdateParticleShaderFOVData
0x7B75DE: mov     esi, ds:0B43128h
0x7B75E4: add     esp, 4
0x7B75E7: cmp     esi, ebx
0x7B75E9: mov     ds:0B42F32h, bl
0x7B75EF: mov     ds:0B42EA6h, bl
0x7B75F5: jz      short loc_7B7615
0x7B75F7: lea     ecx, [esi+4]
0x7B75FA: push    ecx; lpAddend
0x7B75FB: call    edi ; InterlockedDecrement
0x7B75FD: test    eax, eax
0x7B75FF: jnz     short loc_7B760F
0x7B7601: cmp     esi, ebx
0x7B7603: jz      short loc_7B760F
0x7B7605: mov     edx, [esi]
0x7B7607: mov     eax, [edx]
0x7B7609: push    1
0x7B760B: mov     ecx, esi
0x7B760D: call    eax
0x7B760F: mov     ds:0B43128h, ebx
0x7B7615: mov     esi, ds:0B43124h
0x7B761B: cmp     esi, ebx
0x7B761D: mov     ds:0B42E84h, bl
0x7B7623: jz      short loc_7B7643
0x7B7625: lea     ecx, [esi+4]
0x7B7628: push    ecx; lpAddend
0x7B7629: call    edi ; InterlockedDecrement
0x7B762B: test    eax, eax
0x7B762D: jnz     short loc_7B763D
0x7B762F: cmp     esi, ebx
0x7B7631: jz      short loc_7B763D
0x7B7633: mov     edx, [esi]
0x7B7635: mov     eax, [edx]
0x7B7637: push    1
0x7B7639: mov     ecx, esi
0x7B763B: call    eax
0x7B763D: mov     ds:0B43124h, ebx
0x7B7643: pop     edi
0x7B7644: pop     esi
0x7B7645: mov     eax, ebp
0x7B7647: pop     ebp
0x7B7648: mov     ds:0B42EA5h, bl
0x7B764E: pop     ebx
0x7B764F: retn
