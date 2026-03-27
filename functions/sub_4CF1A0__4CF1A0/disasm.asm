0x4CF1A0: push    0FFFFFFFFh
0x4CF1A2: push    offset SEH_4CF1A0
0x4CF1A7: mov     eax, large fs:0
0x4CF1AD: push    eax
0x4CF1AE: sub     esp, 138h
0x4CF1B4: mov     eax, ds:0B30AACh
0x4CF1B9: xor     eax, esp
0x4CF1BB: mov     [esp+144h+var_10], eax
0x4CF1C2: push    ebx
0x4CF1C3: push    ebp
0x4CF1C4: push    esi
0x4CF1C5: push    edi
0x4CF1C6: mov     eax, ds:0B30AACh
0x4CF1CB: xor     eax, esp
0x4CF1CD: push    eax
0x4CF1CE: lea     eax, [esp+158h+var_C]
0x4CF1D5: mov     large fs:0, eax
0x4CF1DB: fldz
0x4CF1DD: mov     eax, [esp+158h+arg_20]
0x4CF1E4: fcomp   dword ptr ds:0B097C8h
0x4CF1EA: mov     esi, [esp+158h+arg_18]
0x4CF1F1: mov     ebp, [esp+158h+arg_1C]
0x4CF1F8: mov     [esp+158h+var_128], eax
0x4CF1FC: mov     [esp+158h+var_130], ecx
0x4CF200: mov     ecx, [esp+158h+arg_24]
0x4CF207: fnstsw  ax
0x4CF209: mov     [esp+158h+var_140], esi
0x4CF20D: mov     [esp+158h+var_12C], ebp
0x4CF211: test    ah, 1
0x4CF214: mov     [esp+158h+var_13C], ecx
0x4CF218: jz      loc_4CF96C
0x4CF21E: mov     edx, ds:0B35C04h
0x4CF224: cmp     edx, ds:0B097D0h
0x4CF22A: jg      loc_4CF96C
0x4CF230: xor     ebx, ebx
0x4CF232: cmp     ebp, ebx
0x4CF234: jz      short loc_4CF24B
0x4CF236: mov     eax, [ebp+0]
0x4CF239: mov     edx, [eax+10h]
0x4CF23C: mov     ecx, ebp
0x4CF23E: call    edx
0x4CF240: test    eax, eax
0x4CF242: jz      short loc_4CF24B
0x4CF244: add     dword ptr ds:0B35C04h, 1
0x4CF24B: mov     [esp+158h+var_138], ebx
0x4CF24F: cmp     esi, ebx
0x4CF251: mov     [esp+158h+var_4], ebx
0x4CF258: jz      loc_4CF96C
0x4CF25E: mov     eax, ds:0A375C8h
0x4CF263: mov     ecx, ds:0A375CCh
0x4CF269: mov     dl, ds:0A375D0h
0x4CF26F: lea     edi, [esp+158h+ArgList]
0x4CF273: mov     dword ptr [esp+158h+ArgList], eax
0x4CF277: mov     [esp+158h+var_110], ecx
0x4CF27B: mov     [esp+158h+var_10C], dl
0x4CF27F: add     edi, 0FFFFFFFFh
0x4CF282: mov     al, [edi+1]
0x4CF285: add     edi, 1
0x4CF288: test    al, al
0x4CF28A: jnz     short loc_4CF282
0x4CF28C: mov     ax, ds:0A3207Ch
0x4CF292: mov     [edi], ax
0x4CF295: mov     eax, esi
0x4CF297: mov     ecx, esi
0x4CF299: lea     esp, [esp+0]
0x4CF2A0: mov     dl, [eax]
0x4CF2A2: add     eax, 1
0x4CF2A5: test    dl, dl
0x4CF2A7: jnz     short loc_4CF2A0
0x4CF2A9: lea     edi, [esp+158h+ArgList]
0x4CF2AD: sub     eax, ecx
0x4CF2AF: mov     esi, ecx
0x4CF2B1: add     edi, 0FFFFFFFFh
0x4CF2B4: mov     cl, [edi+1]
0x4CF2B7: add     edi, 1
0x4CF2BA: test    cl, cl
0x4CF2BC: jnz     short loc_4CF2B4
0x4CF2BE: mov     ecx, eax
0x4CF2C0: shr     ecx, 2
0x4CF2C3: rep movsd
0x4CF2C5: mov     ecx, eax
0x4CF2C7: and     ecx, 3
0x4CF2CA: push    ebx; char
0x4CF2CB: rep movsb
0x4CF2CD: push    ebx; char
0x4CF2CE: lea     ecx, [esp+160h+ArgList]
0x4CF2D2: push    ecx; ArgList
0x4CF2D3: mov     ecx, ds:0B333A0h
0x4CF2D9: lea     edx, [esp+164h+var_144]
0x4CF2DD: push    edx; int
0x4CF2DE: call    sub_442890
0x4CF2E3: push    eax
0x4CF2E4: lea     ecx, [esp+15Ch+var_138]
0x4CF2E8: mov     byte ptr [esp+15Ch+var_4], 1
0x4CF2F0: call    sub_55E2A0
0x4CF2F5: mov     eax, [esp+158h+var_144]
0x4CF2F9: cmp     eax, ebx
0x4CF2FB: mov     byte ptr [esp+158h+var_4], 0
0x4CF303: jz      short loc_4CF323
0x4CF305: mov     esi, eax
0x4CF307: add     eax, 4
0x4CF30A: push    eax; lpAddend
0x4CF30B: call    dword ptr ds:0A2807Ch
0x4CF311: test    eax, eax
0x4CF313: jnz     short loc_4CF323
0x4CF315: cmp     esi, ebx
0x4CF317: jz      short loc_4CF323
0x4CF319: mov     eax, [esi]
0x4CF31B: mov     edx, [eax]
0x4CF31D: push    1
0x4CF31F: mov     ecx, esi
0x4CF321: call    edx
0x4CF323: cmp     [esp+158h+var_138], ebx
0x4CF327: jz      loc_4CF96C
0x4CF32D: cmp     ebp, ebx
0x4CF32F: jz      loc_4CF975
0x4CF335: mov     esi, [ebp+8]
0x4CF338: cmp     esi, ebx
0x4CF33A: jz      short loc_4CF384
0x4CF33C: push    5; MaxCount
0x4CF33E: push    offset aDecal; "Decal"
0x4CF343: push    esi; Str1
0x4CF344: call    _strncmp
0x4CF349: add     esp, 0Ch
0x4CF34C: test    eax, eax
0x4CF34E: jz      loc_4CF975
0x4CF354: push    6; MaxCount
0x4CF356: push    offset aFacegen; "FaceGen"
0x4CF35B: push    esi; Str1
0x4CF35C: call    _strncmp
0x4CF361: add     esp, 0Ch
0x4CF364: test    eax, eax
0x4CF366: jz      loc_4CF975
0x4CF36C: push    5; MaxCount
0x4CF36E: push    offset aBip01; "Bip01"
0x4CF373: push    esi; Str1
0x4CF374: call    _strncmp
0x4CF379: add     esp, 0Ch
0x4CF37C: test    eax, eax
0x4CF37E: jz      loc_4CF975
0x4CF384: mov     eax, [ebp+0]
0x4CF387: mov     edx, [eax+10h]
0x4CF38A: mov     ecx, ebp
0x4CF38C: call    edx
0x4CF38E: test    eax, eax
0x4CF390: jz      loc_4CF9B5
0x4CF396: mov     edi, [esp+158h+var_128]
0x4CF39A: mov     eax, [edi]
0x4CF39C: cmp     eax, ebx
0x4CF39E: jg      loc_4CF970
0x4CF3A4: push    4
0x4CF3A6: mov     ecx, ebp
0x4CF3A8: call    NiNode_GetNiPropertyByID
0x4CF3AD: mov     esi, eax
0x4CF3AF: cmp     esi, ebx
0x4CF3B1: mov     eax, [ebp+0BCh]
0x4CF3B7: jz      loc_4CF954
0x4CF3BD: cmp     eax, ebx
0x4CF3BF: jz      loc_4CF954
0x4CF3C5: mov     eax, [esi]
0x4CF3C7: mov     edx, [eax+54h]
0x4CF3CA: mov     ecx, esi
0x4CF3CC: call    edx
0x4CF3CE: cmp     eax, 1
0x4CF3D1: jl      short loc_4CF3E8
0x4CF3D3: mov     eax, [esi]
0x4CF3D5: mov     edx, [eax+54h]
0x4CF3D8: mov     ecx, esi
0x4CF3DA: call    edx
0x4CF3DC: cmp     eax, 0Ah
0x4CF3DF: jg      short loc_4CF3E8
0x4CF3E1: mov     eax, 1
0x4CF3E6: jmp     short loc_4CF3EA
0x4CF3E8: xor     eax, eax
0x4CF3EA: neg     eax
0x4CF3EC: sbb     eax, eax
0x4CF3EE: and     eax, esi
0x4CF3F0: mov     esi, eax
0x4CF3F2: jz      loc_4CF954
0x4CF3F8: push    4Ch ; 'L'; Size
0x4CF3FA: call    FormHeapAlloc
0x4CF3FF: add     esp, 4
0x4CF402: cmp     eax, ebx
0x4CF404: jz      short loc_4CF417
0x4CF406: mov     dword ptr [eax], 0
0x4CF40C: mov     dword ptr [eax+48h], 0
0x4CF413: mov     ebx, eax
0x4CF415: jmp     short loc_4CF419
0x4CF417: xor     ebx, ebx
0x4CF419: fldz
0x4CF41B: push    esi; a2
0x4CF41C: lea     ecx, [ebx+48h]; this
0x4CF41F: fstp    dword ptr [ebx+40h]
0x4CF422: mov     byte ptr [ebx+44h], 0
0x4CF426: mov     dword ptr [ebx+4], 0
0x4CF42D: call    NiSmartPointer_Set??
0x4CF432: lea     eax, [esp+158h+var_138]
0x4CF436: push    eax
0x4CF437: mov     ecx, ebx
0x4CF439: call    sub_55E2A0
0x4CF43E: push    ebp
0x4CF43F: call    sub_4DC270
0x4CF444: add     esp, 4
0x4CF447: test    eax, eax
0x4CF449: jz      short loc_4CF450
0x4CF44B: mov     eax, [eax+0Ch]
0x4CF44E: jmp     short loc_4CF452
0x4CF450: xor     eax, eax
0x4CF452: mov     [ebx+3Ch], eax
0x4CF455: mov     [esp+158h+var_134], 0
0x4CF45D: mov     eax, [ebp+0B8h]
0x4CF463: test    eax, eax
0x4CF465: mov     esi, [esp+158h+arg_14]
0x4CF46C: mov     edi, [esp+158h+arg_10]
0x4CF473: mov     byte ptr [esp+158h+var_4], 2
0x4CF47B: jz      loc_4CF535
0x4CF481: cmp     byte ptr ds:0B06F5Ch, 1
0x4CF488: jnz     loc_4CF5E1
0x4CF48E: push    54h ; 'T'; Size
0x4CF490: call    FormHeapAlloc
0x4CF495: add     esp, 4
0x4CF498: mov     [esp+158h+var_144], eax
0x4CF49C: test    eax, eax
0x4CF49E: mov     byte ptr [esp+158h+var_4], 3
0x4CF4A6: jz      short loc_4CF515
0x4CF4A8: fld     [esp+158h+arg_28]
0x4CF4AF: mov     ecx, [esp+158h+arg_C]
0x4CF4B6: mov     edx, [esp+158h+arg_0]
0x4CF4BD: sub     esp, 14h
0x4CF4C0: fstp    [esp+16Ch+var_15C]; float
0x4CF4C4: mov     eax, esp
0x4CF4C6: fld     dword ptr ds:0A468FCh
0x4CF4CC: sub     esp, 0Ch
0x4CF4CF: fstp    [esp+178h+var_160]; float
0x4CF4D3: mov     [eax], ecx
0x4CF4D5: mov     ecx, [esp+178h+arg_4]
0x4CF4DC: mov     [eax+4], edi
0x4CF4DF: mov     [eax+8], esi
0x4CF4E2: mov     eax, esp
0x4CF4E4: mov     [eax], edx
0x4CF4E6: mov     edx, [esp+178h+arg_8]
0x4CF4ED: mov     [eax+4], ecx
0x4CF4F0: push    ebp; int
0x4CF4F1: push    ebx; int
0x4CF4F2: mov     ecx, offset flt_B097C8
0x4CF4F7: mov     [eax+8], edx
0x4CF4FA: call    sub_404E30
0x4CF4FF: mov     eax, [esp+180h+var_130]
0x4CF503: push    ecx
0x4CF504: mov     ecx, [esp+184h+var_144]
0x4CF508: fstp    [esp+184h+var_184]; float
0x4CF50B: push    eax; int
0x4CF50C: call    sub_56CE90
0x4CF511: mov     esi, eax
0x4CF513: jmp     short loc_4CF517
0x4CF515: xor     esi, esi
0x4CF517: push    esi; a2
0x4CF518: lea     ecx, [esp+15Ch+var_134]; this
0x4CF51C: mov     byte ptr [esp+15Ch+var_4], 2
0x4CF524: call    NiSmartPointer_Set??
0x4CF529: mov     ecx, esi
0x4CF52B: call    sub_56CD60
0x4CF530: jmp     loc_4CF5CE
0x4CF535: push    1Ch; Size
0x4CF537: call    FormHeapAlloc
0x4CF53C: add     esp, 4
0x4CF53F: mov     [esp+158h+var_144], eax
0x4CF543: test    eax, eax
0x4CF545: mov     byte ptr [esp+158h+var_4], 4
0x4CF54D: jz      short loc_4CF5BA
0x4CF54F: fld     [esp+158h+arg_28]
0x4CF556: mov     ecx, [esp+158h+arg_C]
0x4CF55D: mov     edx, [esp+158h+arg_0]
0x4CF564: sub     esp, 14h
0x4CF567: fstp    [esp+16Ch+var_15C]; float
0x4CF56B: mov     eax, esp
0x4CF56D: fld     dword ptr ds:0A468FCh
0x4CF573: sub     esp, 0Ch
0x4CF576: fstp    [esp+178h+var_160]; int
0x4CF57A: mov     [eax], ecx
0x4CF57C: mov     ecx, [esp+178h+arg_4]
0x4CF583: mov     [eax+4], edi
0x4CF586: mov     [eax+8], esi
0x4CF589: mov     eax, esp
0x4CF58B: mov     [eax], edx
0x4CF58D: mov     edx, [esp+178h+arg_8]
0x4CF594: mov     [eax+4], ecx
0x4CF597: push    ebp; int
0x4CF598: push    ebx; int
0x4CF599: mov     ecx, offset flt_B097C8
0x4CF59E: mov     [eax+8], edx
0x4CF5A1: call    sub_404E30
0x4CF5A6: mov     eax, [esp+180h+var_130]
0x4CF5AA: push    ecx
0x4CF5AB: mov     ecx, [esp+184h+var_144]
0x4CF5AF: fstp    [esp+184h+var_184]; float
0x4CF5B2: push    eax; int
0x4CF5B3: call    sub_56BE50
0x4CF5B8: jmp     short loc_4CF5BC
0x4CF5BA: xor     eax, eax
0x4CF5BC: push    eax; a2
0x4CF5BD: lea     ecx, [esp+15Ch+var_134]; this
0x4CF5C1: mov     byte ptr [esp+15Ch+var_4], 2
0x4CF5C9: call    NiSmartPointer_Set??
0x4CF5CE: mov     eax, [esp+158h+var_134]
0x4CF5D2: test    eax, eax
0x4CF5D4: jz      short loc_4CF5E1
0x4CF5D6: push    eax
0x4CF5D7: mov     ecx, offset ActorProcessManager_ptr
0x4CF5DC: call    sub_678D30
0x4CF5E1: cmp     [esp+158h+var_13C], 0
0x4CF5E6: jz      loc_4CF93D
0x4CF5EC: mov     ecx, [esp+158h+var_13C]
0x4CF5F0: xor     eax, eax
0x4CF5F2: cmp     [ecx+0B6h], ax
0x4CF5F9: mov     [esp+158h+var_140], eax
0x4CF5FD: mov     [esp+158h+var_144], eax
0x4CF601: jbe     loc_4CF93D
0x4CF607: jmp     short loc_4CF610
0x4CF609: align 10h
0x4CF610: mov     ebp, [esp+158h+var_140]
0x4CF614: test    ebp, ebp
0x4CF616: jnz     loc_4CF6BC
0x4CF61C: mov     edx, [esp+158h+var_144]
0x4CF620: mov     ecx, [esp+158h+var_13C]
0x4CF624: push    edx
0x4CF625: call    sub_405790
0x4CF62A: mov     esi, eax
0x4CF62C: test    esi, esi
0x4CF62E: jz      short loc_4CF68F
0x4CF630: mov     eax, [esi]
0x4CF632: mov     edx, [eax+10h]
0x4CF635: mov     ecx, esi
0x4CF637: call    edx
0x4CF639: test    eax, eax
0x4CF63B: jz      short loc_4CF643
0x4CF63D: mov     [esp+158h+var_140], esi
0x4CF641: jmp     short loc_4CF68F
0x4CF643: mov     eax, [esi]
0x4CF645: mov     edx, [eax+8]
0x4CF648: mov     ecx, esi
0x4CF64A: call    edx
0x4CF64C: test    eax, eax
0x4CF64E: jz      short loc_4CF68F
0x4CF650: xor     ebp, ebp
0x4CF652: cmp     [esi+0B6h], bp
0x4CF659: jbe     short loc_4CF68F
0x4CF65B: cmp     [esp+158h+var_140], 0
0x4CF660: jnz     short loc_4CF68F
0x4CF662: push    ebp
0x4CF663: mov     ecx, esi
0x4CF665: call    sub_405790
0x4CF66A: mov     edi, eax
0x4CF66C: test    edi, edi
0x4CF66E: jz      short loc_4CF681
0x4CF670: mov     eax, [edi]
0x4CF672: mov     edx, [eax+10h]
0x4CF675: mov     ecx, edi
0x4CF677: call    edx
0x4CF679: test    eax, eax
0x4CF67B: jz      short loc_4CF681
0x4CF67D: mov     [esp+158h+var_140], edi
0x4CF681: movzx   eax, word ptr [esi+0B6h]
0x4CF688: add     ebp, 1
0x4CF68B: cmp     ebp, eax
0x4CF68D: jb      short loc_4CF65B
0x4CF68F: mov     ecx, [esp+158h+var_13C]
0x4CF693: mov     eax, [esp+158h+var_144]
0x4CF697: movzx   edx, word ptr [ecx+0B6h]
0x4CF69E: add     eax, 1
0x4CF6A1: cmp     eax, edx
0x4CF6A3: mov     [esp+158h+var_144], eax
0x4CF6A7: jb      loc_4CF610
0x4CF6AD: cmp     [esp+158h+var_140], 0
0x4CF6B2: jz      loc_4CF93D
0x4CF6B8: mov     ebp, [esp+158h+var_140]
0x4CF6BC: push    4
0x4CF6BE: mov     ecx, ebp
0x4CF6C0: call    NiNode_GetNiPropertyByID
0x4CF6C5: mov     esi, eax
0x4CF6C7: mov     eax, [ebp+0BCh]
0x4CF6CD: xor     edi, edi
0x4CF6CF: cmp     esi, edi
0x4CF6D1: jz      loc_4CF93D
0x4CF6D7: cmp     eax, edi
0x4CF6D9: jz      loc_4CF93D
0x4CF6DF: mov     eax, [esi]
0x4CF6E1: mov     edx, [eax+54h]
0x4CF6E4: mov     ecx, esi
0x4CF6E6: call    edx
0x4CF6E8: cmp     eax, 1
0x4CF6EB: jl      short loc_4CF702
0x4CF6ED: mov     eax, [esi]
0x4CF6EF: mov     edx, [eax+54h]
0x4CF6F2: mov     ecx, esi
0x4CF6F4: call    edx
0x4CF6F6: cmp     eax, 0Ah
0x4CF6F9: jg      short loc_4CF702
0x4CF6FB: mov     eax, 1
0x4CF700: jmp     short loc_4CF704
0x4CF702: xor     eax, eax
0x4CF704: neg     eax
0x4CF706: sbb     eax, eax
0x4CF708: and     eax, esi
0x4CF70A: mov     esi, eax
0x4CF70C: jz      loc_4CF93D
0x4CF712: push    4Ch ; 'L'; Size
0x4CF714: call    FormHeapAlloc
0x4CF719: add     esp, 4
0x4CF71C: cmp     eax, edi
0x4CF71E: jz      short loc_4CF727
0x4CF720: mov     [eax], edi
0x4CF722: mov     [eax+48h], edi
0x4CF725: mov     edi, eax
0x4CF727: mov     al, [ebx+44h]
0x4CF72A: mov     [edi+44h], al
0x4CF72D: fld     dword ptr [ebx+40h]
0x4CF730: fstp    dword ptr [edi+40h]
0x4CF733: mov     ecx, [ebx+4]
0x4CF736: mov     [edi+4], ecx
0x4CF739: push    esi; a2
0x4CF73A: lea     ecx, [edi+48h]; this
0x4CF73D: call    NiSmartPointer_Set??
0x4CF742: push    ebx
0x4CF743: mov     ecx, edi
0x4CF745: call    sub_55E2A0
0x4CF74A: mov     edx, [ebx+3Ch]
0x4CF74D: mov     [edi+3Ch], edx
0x4CF750: mov     [esp+158h+var_13C], 0
0x4CF758: mov     eax, [esp+158h+var_12C]
0x4CF75C: cmp     dword ptr [eax+0B8h], 0
0x4CF763: mov     byte ptr [esp+158h+var_4], 5
0x4CF76B: jz      loc_4CF869
0x4CF771: cmp     byte ptr ds:0B06F5Ch, 1
0x4CF778: jnz     loc_4CF92C
0x4CF77E: push    54h ; 'T'; Size
0x4CF780: call    FormHeapAlloc
0x4CF785: mov     esi, eax
0x4CF787: add     esp, 4
0x4CF78A: mov     [esp+158h+var_124], esi
0x4CF78E: test    esi, esi
0x4CF790: mov     byte ptr [esp+158h+var_4], 6
0x4CF798: jz      loc_4CF849
0x4CF79E: fld     [esp+158h+arg_C]
0x4CF7A5: sub     esp, 14h
0x4CF7A8: fchs
0x4CF7AA: mov     eax, esp
0x4CF7AC: fstp    [esp+16Ch+var_12C]
0x4CF7B0: sub     esp, 0Ch
0x4CF7B3: fld     [esp+178h+arg_10]
0x4CF7BA: fchs
0x4CF7BC: fstp    [esp+178h+var_144]
0x4CF7C0: fld     [esp+178h+arg_14]
0x4CF7C7: fchs
0x4CF7C9: fstp    [esp+178h+var_140]
0x4CF7CD: fld     [esp+178h+var_12C]
0x4CF7D1: fstp    [esp+178h+var_120]
0x4CF7D5: mov     ecx, [esp+178h+var_120]
0x4CF7D9: fld     [esp+178h+var_144]
0x4CF7DD: fstp    [esp+178h+var_11C]
0x4CF7E1: mov     edx, [esp+178h+var_11C]
0x4CF7E5: fld     [esp+178h+var_140]
0x4CF7E9: fstp    [esp+178h+var_118]
0x4CF7ED: fld     [esp+178h+arg_28]
0x4CF7F4: fstp    [esp+178h+var_15C]; float
0x4CF7F8: fld1
0x4CF7FA: fstp    [esp+178h+var_160]; float
0x4CF7FE: mov     [eax], ecx
0x4CF800: mov     ecx, [esp+178h+var_118]
0x4CF804: mov     [eax+4], edx
0x4CF807: mov     edx, [esp+178h+arg_0]
0x4CF80E: mov     [eax+8], ecx
0x4CF811: mov     ecx, [esp+178h+arg_4]
0x4CF818: mov     eax, esp
0x4CF81A: mov     [eax], edx
0x4CF81C: mov     edx, [esp+178h+arg_8]
0x4CF823: mov     [eax+4], ecx
0x4CF826: push    ebp; int
0x4CF827: push    edi; int
0x4CF828: mov     ecx, offset flt_B097C8
0x4CF82D: mov     [eax+8], edx
0x4CF830: call    sub_404E30
0x4CF835: mov     eax, [esp+180h+var_130]
0x4CF839: push    ecx
0x4CF83A: fstp    [esp+184h+var_184]; float
0x4CF83D: push    eax; int
0x4CF83E: mov     ecx, esi
0x4CF840: call    sub_56CE90
0x4CF845: mov     esi, eax
0x4CF847: jmp     short loc_4CF84B
0x4CF849: xor     esi, esi
0x4CF84B: push    esi; a2
0x4CF84C: lea     ecx, [esp+15Ch+var_13C]; this
0x4CF850: mov     byte ptr [esp+15Ch+var_4], 5
0x4CF858: call    NiSmartPointer_Set??
0x4CF85D: mov     ecx, esi
0x4CF85F: call    sub_56CD60
0x4CF864: jmp     loc_4CF919
0x4CF869: push    1Ch; Size
0x4CF86B: call    FormHeapAlloc
0x4CF870: mov     esi, eax
0x4CF872: add     esp, 4
0x4CF875: mov     [esp+158h+var_124], esi
0x4CF879: test    esi, esi
0x4CF87B: mov     byte ptr [esp+158h+var_4], 7
0x4CF883: jz      short loc_4CF8F8
0x4CF885: fld     [esp+158h+arg_28]
0x4CF88C: mov     ecx, [esp+158h+arg_C]
0x4CF893: mov     edx, [esp+158h+arg_10]
0x4CF89A: sub     esp, 14h
0x4CF89D: fstp    [esp+16Ch+var_15C]; float
0x4CF8A1: mov     eax, esp
0x4CF8A3: fld1
0x4CF8A5: sub     esp, 0Ch
0x4CF8A8: fstp    [esp+178h+var_160]; int
0x4CF8AC: mov     [eax], ecx
0x4CF8AE: mov     ecx, [esp+178h+arg_14]
0x4CF8B5: mov     [eax+4], edx
0x4CF8B8: mov     edx, [esp+178h+arg_0]
0x4CF8BF: mov     [eax+8], ecx
0x4CF8C2: mov     ecx, [esp+178h+arg_4]
0x4CF8C9: mov     eax, esp
0x4CF8CB: mov     [eax], edx
0x4CF8CD: mov     edx, [esp+178h+arg_8]
0x4CF8D4: mov     [eax+4], ecx
0x4CF8D7: push    ebp; int
0x4CF8D8: push    edi; int
0x4CF8D9: mov     ecx, offset flt_B097C8
0x4CF8DE: mov     [eax+8], edx
0x4CF8E1: call    sub_404E30
0x4CF8E6: mov     eax, [esp+180h+var_130]
0x4CF8EA: push    ecx
0x4CF8EB: fstp    [esp+184h+var_184]; float
0x4CF8EE: push    eax; int
0x4CF8EF: mov     ecx, esi
0x4CF8F1: call    sub_56BE50
0x4CF8F6: jmp     short loc_4CF8FA
0x4CF8F8: xor     eax, eax
0x4CF8FA: push    eax; a2
0x4CF8FB: lea     ecx, [esp+15Ch+var_13C]; this
0x4CF8FF: mov     byte ptr [esp+15Ch+var_4], 5
0x4CF907: call    NiSmartPointer_Set??
0x4CF90C: lea     esi, [ebx+8]
0x4CF90F: add     edi, 8
0x4CF912: mov     ecx, 0Dh
0x4CF917: rep movsd
0x4CF919: mov     eax, [esp+158h+var_13C]
0x4CF91D: test    eax, eax
0x4CF91F: jz      short loc_4CF92C
0x4CF921: push    eax
0x4CF922: mov     ecx, offset ActorProcessManager_ptr
0x4CF927: call    sub_678D30
0x4CF92C: lea     ecx, [esp+158h+var_13C]; this
0x4CF930: mov     byte ptr [esp+158h+var_4], 2
0x4CF938: call    sub_7016A0
0x4CF93D: lea     ecx, [esp+158h+var_134]; this
0x4CF941: mov     byte ptr [esp+158h+var_4], 0
0x4CF949: call    sub_7016A0
0x4CF94E: mov     edi, [esp+158h+var_128]
0x4CF952: xor     ebx, ebx
0x4CF954: cmp     [edi], ebx
0x4CF956: mov     [esp+158h+var_4], 0FFFFFFFFh
0x4CF961: lea     ecx, [esp+158h+var_138]; this
0x4CF965: jl      short loc_4CF984
0x4CF967: call    sub_7016A0
0x4CF96C: xor     al, al
0x4CF96E: jmp     short loc_4CF98B
0x4CF970: add     eax, 0FFFFFFFFh
0x4CF973: mov     [edi], eax
0x4CF975: lea     ecx, [esp+158h+var_138]; this
0x4CF979: mov     [esp+158h+var_4], 0FFFFFFFFh
0x4CF984: call    sub_7016A0
0x4CF989: mov     al, 1
0x4CF98B: mov     ecx, dword ptr [esp+158h+var_C]
0x4CF992: mov     large fs:0, ecx
0x4CF999: pop     ecx
0x4CF99A: pop     edi
0x4CF99B: pop     esi
0x4CF99C: pop     ebp
0x4CF99D: pop     ebx
0x4CF99E: mov     ecx, [esp+144h+var_10]
0x4CF9A5: xor     ecx, esp
0x4CF9A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4CF9AC: add     esp, 144h
0x4CF9B2: retn    30h ; '0'
0x4CF9B5: mov     edx, [ebp+0]
0x4CF9B8: mov     eax, [edx+8]
0x4CF9BB: mov     ecx, ebp
0x4CF9BD: call    eax
0x4CF9BF: test    eax, eax
0x4CF9C1: jz      short loc_4CF975
0x4CF9C3: movzx   eax, word ptr [ebp+0B6h]
0x4CF9CA: cmp     eax, ebx
0x4CF9CC: mov     [esp+158h+var_134], ebx
0x4CF9D0: jbe     short loc_4CF975
0x4CF9D2: mov     esi, [esp+158h+arg_14]
0x4CF9D9: mov     edi, [esp+158h+arg_10]
0x4CF9E0: mov     ebx, [esp+158h+arg_C]
0x4CF9E7: cmp     eax, [esp+158h+var_134]
0x4CF9EB: jbe     short loc_4CFA5D
0x4CF9ED: mov     ecx, [ebp+0B0h]
0x4CF9F3: mov     edx, [esp+158h+var_134]
0x4CF9F7: mov     eax, [ecx+edx*4]
0x4CF9FA: test    eax, eax
0x4CF9FC: jz      short loc_4CFA5D
0x4CF9FE: mov     ecx, [esp+158h+arg_2C]
0x4CFA05: fld     [esp+158h+arg_28]
0x4CFA0C: mov     edx, [esp+158h+var_13C]
0x4CFA10: push    ecx
0x4CFA11: push    ecx
0x4CFA12: mov     ecx, [esp+160h+var_128]
0x4CFA16: fstp    [esp+160h+var_160]
0x4CFA19: push    edx
0x4CFA1A: mov     edx, [esp+164h+var_140]
0x4CFA1E: push    ecx
0x4CFA1F: mov     ecx, [esp+168h+arg_0]
0x4CFA26: push    eax; char
0x4CFA27: push    edx; float
0x4CFA28: mov     edx, [esp+170h+arg_4]
0x4CFA2F: sub     esp, 0Ch
0x4CFA32: mov     eax, esp
0x4CFA34: mov     [eax], ebx
0x4CFA36: mov     [eax+4], edi
0x4CFA39: mov     [eax+8], esi
0x4CFA3C: sub     esp, 0Ch
0x4CFA3F: mov     eax, esp
0x4CFA41: mov     [eax], ecx
0x4CFA43: mov     ecx, [esp+188h+arg_8]
0x4CFA4A: mov     [eax+4], edx
0x4CFA4D: mov     [eax+8], ecx
0x4CFA50: mov     ecx, [esp+188h+var_130]
0x4CFA54: call    sub_4CF1A0
0x4CFA59: test    al, al
0x4CFA5B: jz      short loc_4CFA7C
0x4CFA5D: mov     ecx, [esp+158h+var_134]
0x4CFA61: movzx   eax, word ptr [ebp+0B6h]
0x4CFA68: add     ecx, 1
0x4CFA6B: cmp     ecx, eax
0x4CFA6D: mov     [esp+158h+var_134], ecx
0x4CFA71: jb      loc_4CF9E7
0x4CFA77: jmp     loc_4CF975
0x4CFA7C: lea     ecx, [esp+158h+var_138]; this
0x4CFA80: mov     [esp+158h+var_4], 0FFFFFFFFh
0x4CFA8B: call    sub_7016A0
0x4CFA90: xor     al, al
0x4CFA92: jmp     loc_4CF98B
