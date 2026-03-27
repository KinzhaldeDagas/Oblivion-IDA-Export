0x6B67F0: mov     eax, [esp+arg_0]
0x6B67F4: test    eax, eax
0x6B67F6: push    ebx
0x6B67F7: mov     ebx, ecx
0x6B67F9: jz      loc_6B6999
0x6B67FF: mov     ecx, [eax]
0x6B6801: mov     edx, [ecx]
0x6B6803: push    esi
0x6B6804: push    edi
0x6B6805: lea     edi, [ebx+50h]
0x6B6808: push    edi
0x6B6809: push    offset CLSID_IDirectSoundBuffer8
0x6B680E: push    eax
0x6B680F: call    edx
0x6B6811: cmp     dword ptr [edi], 0
0x6B6814: mov     esi, eax
0x6B6816: jz      short loc_6B6831
0x6B6818: test    byte ptr [ebx], 2
0x6B681B: jz      short loc_6B6831
0x6B681D: mov     eax, [edi]
0x6B681F: mov     ecx, [eax]
0x6B6821: lea     edx, [ebx+54h]
0x6B6824: push    edx
0x6B6825: push    offset CLSID_IDirectSound3DBuffer
0x6B682A: push    eax
0x6B682B: mov     eax, [ecx]
0x6B682D: call    eax
0x6B682F: mov     esi, eax
0x6B6831: test    esi, esi
0x6B6833: jge     loc_6B6983
0x6B6839: cmp     esi, 8878001Eh
0x6B683F: jg      loc_6B68FB
0x6B6845: jz      loc_6B68E6
0x6B684B: cmp     esi, 8007000Eh
0x6B6851: jg      short loc_6B68A8
0x6B6853: jz      short loc_6B6893
0x6B6855: cmp     esi, 80004001h
0x6B685B: jz      short loc_6B687E
0x6B685D: cmp     esi, 80040110h
0x6B6863: jnz     def_6B6913; jumptable 006B6913 default case, cases -2005401549--2005401501,-2005401499--2005401431,-2005401429--2005401421,-2005401419--2005401411
0x6B6869: push    offset aDserr_noaggreg; "DSERR_NOAGGREGATION"
0x6B686E: call    _printf
0x6B6873: add     esp, 4
0x6B6876: pop     edi
0x6B6877: mov     eax, esi
0x6B6879: pop     esi
0x6B687A: pop     ebx
0x6B687B: retn    4
0x6B687E: push    offset aDserr_unsuppor; "DSERR_UNSUPPORTED"
0x6B6883: call    _printf
0x6B6888: add     esp, 4
0x6B688B: pop     edi
0x6B688C: mov     eax, esi
0x6B688E: pop     esi
0x6B688F: pop     ebx
0x6B6890: retn    4
0x6B6893: push    offset aDserr_outofmem; "DSERR_OUTOFMEMORY"
0x6B6898: call    _printf
0x6B689D: add     esp, 4
0x6B68A0: pop     edi
0x6B68A1: mov     eax, esi
0x6B68A3: pop     esi
0x6B68A4: pop     ebx
0x6B68A5: retn    4
0x6B68A8: cmp     esi, 80070057h
0x6B68AE: jz      short loc_6B68D1
0x6B68B0: cmp     esi, 8878000Ah
0x6B68B6: jnz     def_6B6913; jumptable 006B6913 default case, cases -2005401549--2005401501,-2005401499--2005401431,-2005401429--2005401421,-2005401419--2005401411
0x6B68BC: push    offset aDserr_allocate; "DSERR_ALLOCATED"
0x6B68C1: call    _printf
0x6B68C6: add     esp, 4
0x6B68C9: pop     edi
0x6B68CA: mov     eax, esi
0x6B68CC: pop     esi
0x6B68CD: pop     ebx
0x6B68CE: retn    4
0x6B68D1: push    offset aDserr_invalidp; "DSERR_INVALIDPARAM"
0x6B68D6: call    _printf
0x6B68DB: add     esp, 4
0x6B68DE: pop     edi
0x6B68DF: mov     eax, esi
0x6B68E1: pop     esi
0x6B68E2: pop     ebx
0x6B68E3: retn    4
0x6B68E6: push    offset aDserr_controlu; "DSERR_CONTROLUNAVAIL"
0x6B68EB: call    _printf
0x6B68F0: add     esp, 4
0x6B68F3: pop     edi
0x6B68F4: mov     eax, esi
0x6B68F6: pop     esi
0x6B68F7: pop     ebx
0x6B68F8: retn    4
0x6B68FB: lea     eax, [esi+7787FFCEh]; switch 141 cases
0x6B6901: cmp     eax, 8Ch
0x6B6906: ja      def_6B6913; jumptable 006B6913 default case, cases -2005401549--2005401501,-2005401499--2005401431,-2005401429--2005401421,-2005401419--2005401411
0x6B690C: movzx   ecx, ds:byte_6B69BC[eax]
0x6B6913: jmp     ds:jpt_6B6913[ecx*4]; switch jump
0x6B691A: push    offset aDserr_badforma; jumptable 006B6913 case -2005401500
0x6B691F: call    _printf
0x6B6924: add     esp, 4
0x6B6927: pop     edi
0x6B6928: mov     eax, esi
0x6B692A: pop     esi
0x6B692B: pop     ebx
0x6B692C: retn    4
0x6B692F: push    offset aDserr_bufferto; jumptable 006B6913 case -2005401420
0x6B6934: call    _printf
0x6B6939: add     esp, 4
0x6B693C: pop     edi
0x6B693D: mov     eax, esi
0x6B693F: pop     esi
0x6B6940: pop     ebx
0x6B6941: retn    4
0x6B6944: push    offset aDserr_ds8_requ; jumptable 006B6913 case -2005401410
0x6B6949: call    _printf
0x6B694E: add     esp, 4
0x6B6951: pop     edi
0x6B6952: mov     eax, esi
0x6B6954: pop     esi
0x6B6955: pop     ebx
0x6B6956: retn    4
0x6B6959: push    offset aDserr_invalidc; jumptable 006B6913 case -2005401550
0x6B695E: call    _printf
0x6B6963: add     esp, 4
0x6B6966: pop     edi
0x6B6967: mov     eax, esi
0x6B6969: pop     esi
0x6B696A: pop     ebx
0x6B696B: retn    4
0x6B696E: push    offset aDserr_uninitia; jumptable 006B6913 case -2005401430
0x6B6973: call    _printf
0x6B6978: add     esp, 4
0x6B697B: pop     edi
0x6B697C: mov     eax, esi
0x6B697E: pop     esi
0x6B697F: pop     ebx
0x6B6980: retn    4
0x6B6983: mov     edi, [edi]
0x6B6985: mov     edx, [edi]
0x6B6987: mov     eax, [edx+20h]
0x6B698A: add     ebx, 40h ; '@'
0x6B698D: push    ebx
0x6B698E: push    edi
0x6B698F: call    eax
0x6B6991: pop     edi; jumptable 006B6913 default case, cases -2005401549--2005401501,-2005401499--2005401431,-2005401429--2005401421,-2005401419--2005401411
0x6B6992: mov     eax, esi
0x6B6994: pop     esi
0x6B6995: pop     ebx
0x6B6996: retn    4
0x6B6999: mov     eax, 80004005h
0x6B699E: pop     ebx
0x6B699F: retn    4
