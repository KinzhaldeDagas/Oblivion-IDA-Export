0x40DF80: sub     esp, 6A8h
0x40DF86: mov     eax, ___security_cookie
0x40DF8B: xor     eax, esp
0x40DF8D: mov     [esp+6A8h+var_4], eax
0x40DF94: mov     eax, OblivionINI
0x40DF99: push    ebx
0x40DF9A: mov     ebx, [esp+6ACh+arg_0]
0x40DFA1: push    ebp
0x40DFA2: push    esi
0x40DFA3: push    edi; ArgList
0x40DFA4: push    eax
0x40DFA5: lea     ecx, [esp+6BCh+FileName]
0x40DFAC: push    offset a_S; ".\\%s"
0x40DFB1: push    ecx
0x40DFB2: call    __sprintf
0x40DFB7: add     esp, 0Ch
0x40DFBA: lea     edx, [esp+6B8h+FileName]
0x40DFC1: push    edx; lpFileName
0x40DFC2: push    1; nDefault
0x40DFC4: push    offset KeyName; "bUseMyGamesDirectory"
0x40DFC9: push    offset aGeneral; "General"
0x40DFCE: call    ds:GetPrivateProfileIntA
0x40DFD4: xor     ebp, ebp
0x40DFD6: test    eax, eax
0x40DFD8: jz      loc_40E116
0x40DFDE: mov     esi, ds:SHGetFolderPathA
0x40DFE4: lea     eax, [esp+6B8h+pszPath]
0x40DFEB: push    eax; pszPath
0x40DFEC: push    ebp; dwFlags
0x40DFED: push    ebp; hToken
0x40DFEE: push    1Ch; csidl
0x40DFF0: push    ebp; hwnd
0x40DFF1: mov     [esp+6CCh+FileName], 0
0x40DFF9: call    esi ; SHGetFolderPathA
0x40DFFB: lea     eax, [esp+6B8h+pszPath]
0x40E002: add     eax, 0FFFFFFFFh
0x40E005: mov     cl, [eax+1]
0x40E008: add     eax, 1
0x40E00B: test    cl, cl
0x40E00D: jnz     short loc_40E005
0x40E00F: mov     ecx, ds:dword_A31288
0x40E015: mov     edx, ds:dword_A3128C
0x40E01B: mov     edi, ds:CreateDirectoryA
0x40E021: mov     [eax], ecx
0x40E023: mov     cx, ds:word_A31290
0x40E02A: mov     [eax+4], edx
0x40E02D: mov     dl, ds:byte_A31292
0x40E033: mov     [eax+8], cx
0x40E037: mov     [eax+0Ah], dl
0x40E03A: push    ebp; lpSecurityAttributes
0x40E03B: lea     eax, [esp+6BCh+pszPath]
0x40E042: push    eax; lpPathName
0x40E043: call    edi ; CreateDirectoryA
0x40E045: xor     eax, eax
0x40E047: jmp     short loc_40E050
0x40E049: align 10h
0x40E050: mov     cl, [esp+eax+6B8h+pszPath]
0x40E057: mov     byte ptr AppDataPath[eax], cl
0x40E05D: add     eax, 1
0x40E060: test    cl, cl
0x40E062: jnz     short loc_40E050
0x40E064: lea     ecx, [esp+6B8h+pszPath]
0x40E06B: push    ecx; pszPath
0x40E06C: push    ebp; dwFlags
0x40E06D: push    ebp; hToken
0x40E06E: push    5; csidl
0x40E070: push    ebp; hwnd
0x40E071: call    esi ; SHGetFolderPathA
0x40E073: lea     eax, [esp+6B8h+pszPath]
0x40E07A: add     eax, 0FFFFFFFFh
0x40E07D: lea     ecx, [ecx+0]
0x40E080: mov     cl, [eax+1]
0x40E083: add     eax, 1
0x40E086: test    cl, cl
0x40E088: jnz     short loc_40E080
0x40E08A: mov     edx, ds:dword_A3127C
0x40E090: mov     ecx, ds:dword_A31280
0x40E096: mov     [eax], edx
0x40E098: mov     dx, ds:word_A31284
0x40E09F: mov     [eax+4], ecx
0x40E0A2: mov     cl, ds:byte_A31286
0x40E0A8: mov     [eax+8], dx
0x40E0AC: push    ebp; lpSecurityAttributes
0x40E0AD: lea     edx, [esp+6BCh+pszPath]
0x40E0B4: push    edx; lpPathName
0x40E0B5: mov     [eax+0Ah], cl
0x40E0B8: call    edi ; CreateDirectoryA
0x40E0BA: lea     eax, [esp+6B8h+pszPath]
0x40E0C1: add     eax, 0FFFFFFFFh
0x40E0C4: mov     cl, [eax+1]
0x40E0C7: add     eax, 1
0x40E0CA: test    cl, cl
0x40E0CC: jnz     short loc_40E0C4
0x40E0CE: mov     ecx, ds:dword_A31270
0x40E0D4: mov     edx, ds:dword_A31274
0x40E0DA: mov     [eax], ecx
0x40E0DC: mov     cx, ds:word_A31278
0x40E0E3: mov     [eax+4], edx
0x40E0E6: push    ebp; lpSecurityAttributes
0x40E0E7: lea     edx, [esp+6BCh+pszPath]
0x40E0EE: push    edx; lpPathName
0x40E0EF: mov     [eax+8], cx
0x40E0F3: call    edi ; CreateDirectoryA
0x40E0F5: xor     eax, eax
0x40E0F7: jmp     short loc_40E100
0x40E0F9: align 10h
0x40E100: mov     cl, [esp+eax+6B8h+pszPath]
0x40E107: mov     byte ptr word_B3F280[eax], cl
0x40E10D: add     eax, 1
0x40E110: test    cl, cl
0x40E112: jnz     short loc_40E100
0x40E114: jmp     short loc_40E13A
0x40E116: mov     ax, ds:word_A3126C
0x40E11C: mov     cl, ds:byte_A3126E
0x40E122: mov     AppDataPath, ax
0x40E128: mov     byte_B3F17A, cl
0x40E12E: mov     word_B3F280, ax
0x40E134: mov     byte_B3F282, cl
0x40E13A: xor     eax, eax
0x40E13C: lea     esp, [esp+0]
0x40E140: mov     cl, byte ptr word_B3F280[eax]
0x40E146: mov     [esp+eax+6B8h+FileName], cl
0x40E14D: add     eax, 1
0x40E150: test    cl, cl
0x40E152: jnz     short loc_40E140
0x40E154: mov     eax, OblivionINI
0x40E159: mov     edx, eax
0x40E15B: jmp     short loc_40E160
0x40E15D: align 10h
0x40E160: mov     cl, [eax]
0x40E162: add     eax, 1
0x40E165: test    cl, cl
0x40E167: jnz     short loc_40E160
0x40E169: lea     edi, [esp+6B8h+FileName]
0x40E170: sub     eax, edx
0x40E172: add     edi, 0FFFFFFFFh
0x40E175: mov     cl, [edi+1]
0x40E178: add     edi, 1
0x40E17B: test    cl, cl
0x40E17D: jnz     short loc_40E175
0x40E17F: mov     ecx, eax
0x40E181: shr     ecx, 2
0x40E184: mov     esi, edx
0x40E186: rep movsd
0x40E188: mov     ecx, eax
0x40E18A: and     ecx, 3
0x40E18D: rep movsb
0x40E18F: call    sub_494480
0x40E194: mov     esi, ds:DeleteFileA
0x40E19A: push    eax; lpFileName
0x40E19B: call    esi ; DeleteFileA
0x40E19D: call    sub_4944F0
0x40E1A2: push    eax; lpFileName
0x40E1A3: call    esi ; DeleteFileA
0x40E1A5: call    sub_494560
0x40E1AA: push    eax; lpFileName
0x40E1AB: call    esi ; DeleteFileA
0x40E1AD: lea     eax, [esp+6B8h+FileName]
0x40E1B4: push    ebp; int
0x40E1B5: push    eax; char *
0x40E1B6: call    __access
0x40E1BB: add     esp, 8
0x40E1BE: cmp     eax, 0FFFFFFFFh
0x40E1C1: jnz     short loc_40E227
0x40E1C3: mov     ecx, ds:dword_A31254
0x40E1C9: mov     edx, ds:dword_A31258
0x40E1CF: mov     eax, ds:dword_A3125C
0x40E1D4: mov     dword ptr [esp+6B8h+pszPath], ecx
0x40E1DB: mov     ecx, ds:dword_A31260
0x40E1E1: mov     [esp+6B8h+var_608], edx
0x40E1E8: mov     edx, ds:dword_A31264
0x40E1EE: mov     [esp+6B8h+var_600], ecx
0x40E1F5: push    1; bFailIfExists
0x40E1F7: lea     ecx, [esp+6BCh+FileName]
0x40E1FE: mov     [esp+6BCh+var_5FC], edx
0x40E205: mov     [esp+6BCh+var_604], eax
0x40E20C: mov     al, ds:byte_A31268
0x40E211: push    ecx; lpNewFileName
0x40E212: lea     edx, [esp+6C0h+pszPath]
0x40E219: push    edx; lpExistingFileName
0x40E21A: mov     [esp+6C4h+var_5F8], al
0x40E221: call    ds:CopyFileA
0x40E227: call    sub_404940
0x40E22C: test    al, al
0x40E22E: jnz     loc_40E2CB
0x40E234: mov     edx, lpCaption
0x40E23A: mov     esi, ds:GetPrivateProfileStringA
0x40E240: lea     eax, [esp+6B8h+FileName]
0x40E247: push    eax; lpFileName
0x40E248: push    400h; nSize
0x40E24D: lea     ecx, [esp+6C0h+ReturnedString]
0x40E254: push    ecx; lpReturnedString
0x40E255: push    edx; lpDefault
0x40E256: push    offset aScopyprotectio; "sCopyProtectionTitle"
0x40E25B: push    offset aCopyprotection; "CopyProtectionStrings"
0x40E260: call    esi ; GetPrivateProfileStringA
0x40E262: lea     eax, [esp+6B8h+ReturnedString]
0x40E269: push    eax
0x40E26A: mov     ecx, offset lpCaption
0x40E26F: call    Setting_SetStringValue
0x40E274: mov     eax, lpText
0x40E279: lea     ecx, [esp+6B8h+FileName]
0x40E280: push    ecx; lpFileName
0x40E281: push    400h; nSize
0x40E286: lea     edx, [esp+6C0h+ReturnedString]
0x40E28D: push    edx; lpReturnedString
0x40E28E: push    eax; lpDefault
0x40E28F: push    offset aScopyprotect_0; "sCopyProtectionMessage"
0x40E294: push    offset aCopyprotection; "CopyProtectionStrings"
0x40E299: call    esi ; GetPrivateProfileStringA
0x40E29B: lea     ecx, [esp+6B8h+ReturnedString]
0x40E2A2: push    ecx
0x40E2A3: mov     ecx, offset lpText
0x40E2A8: call    Setting_SetStringValue
0x40E2AD: mov     edx, lpCaption
0x40E2B3: mov     eax, lpText
0x40E2B8: push    40010h; uType
0x40E2BD: push    edx; lpCaption
0x40E2BE: push    eax; lpText
0x40E2BF: push    ebp; hWnd
0x40E2C0: call    ds:MessageBoxA
0x40E2C6: jmp     loc_40F61D
0x40E2CB: cmp     byte_B33394, 0
0x40E2D2: jnz     loc_40E393
0x40E2D8: mov     esi, ds:GetPrivateProfileStringA
0x40E2DE: mov     edi, ds:MessageBoxA
0x40E2E4: jmp     short loc_40E2F0
0x40E2E6: align 10h
0x40E2F0: mov     eax, lpDefault
0x40E2F5: lea     ecx, [esp+6B8h+FileName]
0x40E2FC: push    ecx; lpFileName
0x40E2FD: push    400h; nSize
0x40E302: lea     edx, [esp+6C0h+ReturnedString]
0x40E309: push    edx; lpReturnedString
0x40E30A: push    eax; lpDefault
0x40E30B: push    offset aScopyprotect_1; "sCopyProtectionTitle2"
0x40E310: push    offset aCopyprotection; "CopyProtectionStrings"
0x40E315: call    esi ; GetPrivateProfileStringA
0x40E317: lea     ecx, [esp+6B8h+ReturnedString]
0x40E31E: push    ecx
0x40E31F: mov     ecx, offset lpDefault
0x40E324: call    Setting_SetStringValue
0x40E329: mov     ecx, off_B02DF0; "Insert the Oblivion Disc."
0x40E32F: lea     edx, [esp+6B8h+FileName]
0x40E336: push    edx; lpFileName
0x40E337: push    400h; nSize
0x40E33C: lea     eax, [esp+6C0h+ReturnedString]
0x40E343: push    eax; lpReturnedString
0x40E344: push    ecx; lpDefault
0x40E345: push    offset aScopyprotect_2; "sCopyProtectionMessage2"
0x40E34A: push    offset aCopyprotection; "CopyProtectionStrings"
0x40E34F: call    esi ; GetPrivateProfileStringA
0x40E351: lea     edx, [esp+6B8h+ReturnedString]
0x40E358: push    edx
0x40E359: mov     ecx, offset off_B02DF0; "Insert the Oblivion Disc."
0x40E35E: call    Setting_SetStringValue
0x40E363: mov     eax, lpDefault
0x40E368: mov     ecx, off_B02DF0; "Insert the Oblivion Disc."
0x40E36E: push    40035h; uType
0x40E373: push    eax; lpCaption
0x40E374: push    ecx; lpText
0x40E375: push    ebp; hWnd
0x40E376: call    edi ; MessageBoxA
0x40E378: cmp     eax, 2
0x40E37B: jz      loc_40F61D
0x40E381: call    sub_404940
0x40E386: cmp     byte_B33394, 0
0x40E38D: jz      loc_40E2F0
0x40E393: mov     edx, lpClassName
0x40E399: push    ebp; lpWindowName
0x40E39A: push    edx; lpClassName
0x40E39B: call    ds:FindWindowA
0x40E3A1: cmp     eax, ebp
0x40E3A3: jz      short Oblivion_Main?___CreateMemoryPools?
0x40E3A5: push    eax; hWnd
0x40E3A6: call    ds:SetForegroundWindow
0x40E3AC: jmp     loc_40F61D
0x40E3B1: mov     eax, lpClassName
0x40E3B6: push    eax; ArgList
0x40E3B7: call    sub_47F670
0x40E3BC: add     esp, 4
0x40E3BF: push    offset aDefaultPool8; "Default Pool 8"
0x40E3C4: push    0C00000h
0x40E3C9: push    8
0x40E3CB: mov     ecx, offset FormHeap
0x40E3D0: call    MemoryPool_Create
0x40E3D5: push    offset aDefaultPool12; "Default Pool 12"
0x40E3DA: push    offset loc_800000
0x40E3DF: push    0Ch
0x40E3E1: mov     ecx, offset FormHeap
0x40E3E6: call    MemoryPool_Create
0x40E3EB: push    offset aDefaultPool16; "Default Pool 16"
0x40E3F0: push    400000h
0x40E3F5: push    10h
0x40E3F7: mov     ecx, offset FormHeap
0x40E3FC: call    MemoryPool_Create
0x40E401: push    offset aDefaultPool20; "Default Pool 20"
0x40E406: push    400000h
0x40E40B: push    14h
0x40E40D: mov     ecx, offset FormHeap
0x40E412: call    MemoryPool_Create
0x40E417: push    offset aDefaultPool24; "Default Pool 24"
0x40E41C: push    offset loc_800000
0x40E421: push    18h
0x40E423: mov     ecx, offset FormHeap
0x40E428: call    MemoryPool_Create
0x40E42D: push    offset aDefaultPool28; "Default Pool 28"
0x40E432: push    400000h
0x40E437: push    1Ch
0x40E439: mov     ecx, offset FormHeap
0x40E43E: call    MemoryPool_Create
0x40E443: push    offset aDefaultPool32; "Default Pool 32"
0x40E448: push    offset loc_800000
0x40E44D: push    20h ; ' '
0x40E44F: mov     ecx, offset FormHeap
0x40E454: call    MemoryPool_Create
0x40E459: push    offset aDefaultPool36; "Default Pool 36"
0x40E45E: push    400000h
0x40E463: push    24h ; '$'
0x40E465: mov     ecx, offset FormHeap
0x40E46A: call    MemoryPool_Create
0x40E46F: push    offset aDefaultPool40; "Default Pool 40"
0x40E474: push    400000h
0x40E479: push    28h ; '('
0x40E47B: mov     ecx, offset FormHeap
0x40E480: call    MemoryPool_Create
0x40E485: push    offset aDefaultPool44; "Default Pool 44"
0x40E48A: push    400000h
0x40E48F: push    2Ch ; ','
0x40E491: mov     ecx, offset FormHeap
0x40E496: call    MemoryPool_Create
0x40E49B: push    offset aDefaultPool56; "Default Pool 56"
0x40E4A0: push    2000000h
0x40E4A5: push    38h ; '8'
0x40E4A7: mov     ecx, offset FormHeap
0x40E4AC: call    MemoryPool_Create
0x40E4B1: push    offset aDefaultPool68; "Default Pool 68"
0x40E4B6: push    400000h
0x40E4BB: push    44h ; 'D'
0x40E4BD: mov     ecx, offset FormHeap
0x40E4C2: call    MemoryPool_Create
0x40E4C7: push    offset aDefaultPool72; "Default Pool 72"
0x40E4CC: push    offset loc_800000
0x40E4D1: push    48h ; 'H'
0x40E4D3: mov     ecx, offset FormHeap
0x40E4D8: call    MemoryPool_Create
0x40E4DD: push    offset aDefaultPool96; "Default Pool 96"
0x40E4E2: push    offset loc_800000
0x40E4E7: push    60h ; '`'
0x40E4E9: mov     ecx, offset FormHeap
0x40E4EE: call    MemoryPool_Create
0x40E4F3: push    offset aDefaultPool100; "Default Pool 100"
0x40E4F8: push    offset loc_800000
0x40E4FD: push    64h ; 'd'
0x40E4FF: mov     ecx, offset FormHeap
0x40E504: call    MemoryPool_Create
0x40E509: push    offset aDefaultPool48; "Default Pool 48"
0x40E50E: push    200000h
0x40E513: push    30h ; '0'
0x40E515: mov     ecx, offset FormHeap
0x40E51A: call    MemoryPool_Create
0x40E51F: push    offset aDefaultPool52; "Default Pool 52"
0x40E524: push    400000h
0x40E529: push    34h ; '4'
0x40E52B: mov     ecx, offset FormHeap
0x40E530: call    MemoryPool_Create
0x40E535: push    offset aDefaultPool64; "Default Pool 64"
0x40E53A: push    400000h
0x40E53F: push    40h ; '@'
0x40E541: mov     ecx, offset FormHeap
0x40E546: call    MemoryPool_Create
0x40E54B: push    offset aDefaultPool80; "Default Pool 80"
0x40E550: push    400000h
0x40E555: push    50h ; 'P'
0x40E557: mov     ecx, offset FormHeap
0x40E55C: call    MemoryPool_Create
0x40E561: push    offset aDefaultPool92; "Default Pool 92"
0x40E566: push    400000h
0x40E56B: push    5Ch ; '\'
0x40E56D: mov     ecx, offset FormHeap
0x40E572: call    MemoryPool_Create
0x40E577: push    offset aDefaultPool108; "Default Pool 108"
0x40E57C: push    400000h
0x40E581: push    6Ch ; 'l'
0x40E583: mov     ecx, offset FormHeap
0x40E588: call    MemoryPool_Create
0x40E58D: push    offset aDefaultPool120; "Default Pool 120"
0x40E592: push    400000h
0x40E597: push    78h ; 'x'
0x40E599: mov     ecx, offset FormHeap
0x40E59E: call    MemoryPool_Create
0x40E5A3: push    offset aDefaultPool200; "Default Pool 200"
0x40E5A8: push    offset loc_800000
0x40E5AD: push    0C8h ; 'È'
0x40E5B2: mov     ecx, offset FormHeap
0x40E5B7: call    MemoryPool_Create
0x40E5BC: push    offset aNigeometryPool; "NiGeometry Pool"
0x40E5C1: push    400000h
0x40E5C6: push    0D8h ; 'Ø'
0x40E5CB: mov     ecx, offset FormHeap
0x40E5D0: call    MemoryPool_Create
0x40E5D5: push    offset aNinodePool; "NiNode Pool"
0x40E5DA: push    400000h
0x40E5DF: push    0F4h ; 'ô'
0x40E5E4: mov     ecx, offset FormHeap
0x40E5E9: call    MemoryPool_Create
0x40E5EE: push    offset aDefaultPool256; "Default Pool 256"
0x40E5F3: push    offset loc_800000
0x40E5F8: push    100h
0x40E5FD: mov     ecx, offset FormHeap
0x40E602: call    MemoryPool_Create
0x40E607: push    offset aBsfadenodePool; "BSFadeNode Pool"
0x40E60C: push    400000h
0x40E611: push    108h
0x40E616: mov     ecx, offset FormHeap
0x40E61B: call    MemoryPool_Create
0x40E620: mov     dword_B02184, offset Memory_Cleanup
0x40E62A: call    sub_747BA0
0x40E62F: mov     byte_B3F958, 1
0x40E636: call    sub_6F98F0
0x40E63B: push    4; Size
0x40E63D: mov     dword_B40334, offset sub_430D60
0x40E647: call    FormHeapAlloc
0x40E64C: add     esp, 4
0x40E64F: cmp     eax, ebp
0x40E651: jz      short loc_40E65E
0x40E653: mov     dword_BA7A00, eax
0x40E658: mov     dword ptr [eax], offset ??_7SoundCollisionListener@@6B@; const SoundCollisionListener::`vftable'
0x40E65E: push    14h; Size
0x40E660: call    FormHeapAlloc
0x40E665: add     esp, 4
0x40E668: cmp     eax, ebp
0x40E66A: jz      short loc_40E673
0x40E66C: mov     ecx, eax
0x40E66E: call    sub_4316E0
0x40E673: mov     ecx, OBSE_g_FileFinder
0x40E679: cmp     ecx, ebp
0x40E67B: jz      short loc_40E689
0x40E67D: mov     edx, [ecx]
0x40E67F: mov     eax, [edx+8]
0x40E682: push    offset aData_2; "Data"
0x40E687: call    eax
0x40E689: push    10h; Size
0x40E68B: call    FormHeapAlloc
0x40E690: add     esp, 4
0x40E693: cmp     eax, ebp
0x40E695: jz      short loc_40E6A5
0x40E697: push    3F1h
0x40E69C: mov     ecx, eax; this
0x40E69E: call    ??0BSTexturePalette@@QAE@XZ; BSTexturePalette::BSTexturePalette(void)
0x40E6A3: jmp     short loc_40E6A7
0x40E6A5: xor     eax, eax
0x40E6A7: push    eax; a2
0x40E6A8: mov     ecx, offset dword_B35300; this
0x40E6AD: call    NiSmartPointer_Set??
0x40E6B2: mov     ecx, dword_B35300
0x40E6B8: mov     dword_B3FAC8, ecx
0x40E6BE: xor     eax, eax
0x40E6C0: mov     cl, ds:byte_A30FEC[eax]
0x40E6C6: mov     byte_B07D2C[eax], cl
0x40E6CC: add     eax, 1
0x40E6CF: test    cl, cl
0x40E6D1: jnz     short loc_40E6C0
0x40E6D3: mov     edx, RegSettingCollection
0x40E6D9: mov     eax, [edx+14h]
0x40E6DC: push    ebp
0x40E6DD: mov     ecx, offset RegSettingCollection
0x40E6E2: call    eax
0x40E6E4: test    al, al
0x40E6E6: jz      short loc_40E708
0x40E6E8: mov     edx, RegSettingCollection
0x40E6EE: mov     eax, [edx+20h]
0x40E6F1: mov     ecx, offset RegSettingCollection
0x40E6F6: call    eax
0x40E6F8: mov     edx, RegSettingCollection
0x40E6FE: mov     eax, [edx+18h]
0x40E701: mov     ecx, offset RegSettingCollection
0x40E706: call    eax
0x40E708: xor     eax, eax
0x40E70A: lea     ebx, [ebx+0]
0x40E710: mov     cl, [esp+eax+6B8h+FileName]
0x40E717: mov     byte_B07BF4[eax], cl
0x40E71D: add     eax, 1
0x40E720: test    cl, cl
0x40E722: jnz     short loc_40E710
0x40E724: mov     edx, INISettingCollection
0x40E72A: mov     eax, [edx+14h]
0x40E72D: push    ebp
0x40E72E: mov     ecx, offset INISettingCollection
0x40E733: call    eax
0x40E735: test    al, al
0x40E737: jz      short loc_40E759
0x40E739: mov     edx, INISettingCollection
0x40E73F: mov     eax, [edx+20h]
0x40E742: mov     ecx, offset INISettingCollection
0x40E747: call    eax
0x40E749: mov     edx, INISettingCollection
0x40E74F: mov     eax, [edx+18h]
0x40E752: mov     ecx, offset INISettingCollection
0x40E757: call    eax
0x40E759: call    sub_53AC60
0x40E75E: call    sub_42F610
0x40E763: push    65h ; 'e'; lpIconName
0x40E765: push    ebx; hInstance
0x40E766: mov     [esp+6C0h+WndClass.style], 3
0x40E76E: mov     [esp+6C0h+WndClass.lpfnWndProc], offset sub_4060F0
0x40E776: mov     [esp+6C0h+WndClass.cbClsExtra], ebp
0x40E77A: mov     [esp+6C0h+WndClass.cbWndExtra], ebp
0x40E77E: mov     [esp+6C0h+WndClass.hInstance], ebx
0x40E782: call    ds:LoadIconA
0x40E788: push    4; i
0x40E78A: mov     [esp+6BCh+WndClass.hIcon], eax
0x40E78E: mov     [esp+6BCh+WndClass.hCursor], ebp
0x40E792: call    ds:GetStockObject
0x40E798: mov     ecx, lpClassName
0x40E79E: lea     edx, [esp+6B8h+WndClass]
0x40E7A2: push    edx; lpWndClass
0x40E7A3: mov     [esp+6BCh+WndClass.hbrBackground], eax
0x40E7AA: mov     [esp+6BCh+WndClass.lpszClassName], ecx
0x40E7B1: mov     [esp+6BCh+WndClass.lpszMenuName], ebp
0x40E7B8: call    ds:RegisterClassA
0x40E7BE: push    ebp; bMenu
0x40E7BF: push    0CA0000h; dwStyle
0x40E7C4: lea     eax, [esp+6C0h+Rect]
0x40E7C8: push    eax; lpRect
0x40E7C9: mov     [esp+6C4h+Rect.left], ebp
0x40E7CD: mov     [esp+6C4h+Rect.top], ebp
0x40E7D1: mov     [esp+6C4h+Rect.right], 140h
0x40E7D9: mov     [esp+6C4h+Rect.bottom], 0F0h ; 'ð'
0x40E7E1: call    ds:AdjustWindowRect
0x40E7E7: mov     ecx, [esp+6B8h+Rect.bottom]
0x40E7EB: sub     ecx, [esp+6B8h+Rect.top]
0x40E7EF: mov     edx, [esp+6B8h+Rect.right]
0x40E7F3: sub     edx, [esp+6B8h+Rect.left]
0x40E7F7: mov     eax, lpClassName
0x40E7FC: push    ebp; lpParam
0x40E7FD: push    ebx; hInstance
0x40E7FE: push    ebp; hMenu
0x40E7FF: push    ebp; hWndParent
0x40E800: push    ecx; nHeight
0x40E801: push    edx; nWidth
0x40E802: push    ebp; Y
0x40E803: push    ebp; X
0x40E804: push    10CA0000h; dwStyle
0x40E809: push    eax; lpWindowName
0x40E80A: push    eax; lpClassName
0x40E80B: push    ebp; dwExStyle
0x40E80C: call    ds:CreateWindowExA
0x40E812: push    28h ; '('; Size
0x40E814: mov     esi, eax
0x40E816: call    FormHeapAlloc
0x40E81B: add     esp, 4
0x40E81E: cmp     eax, ebp
0x40E820: jz      short loc_40E82D
0x40E822: push    ebx
0x40E823: push    esi
0x40E824: mov     ecx, eax
0x40E826: call    InitializeOSGlobals
0x40E82B: jmp     short loc_40E82F
0x40E82D: xor     eax, eax
0x40E82F: push    8; Size
0x40E831: mov     OSGlobals, eax
0x40E836: call    FormHeapAlloc
0x40E83B: add     esp, 4
0x40E83E: cmp     eax, ebp
0x40E840: jz      short loc_40E84B
0x40E842: mov     ecx, eax
0x40E844: call    sub_572DC0
0x40E849: jmp     short loc_40E84D
0x40E84B: xor     eax, eax
0x40E84D: push    offset aInitializingRe; "Initializing Renderer..."
0x40E852: mov     dword_B3A6B0, eax
0x40E857: call    PrintToLog???
0x40E85C: mov     ecx, OSGlobals
0x40E862: add     esp, 4
0x40E865: call    sub_4052F0
0x40E86A: mov     ecx, g_Renderer; this
0x40E870: push    ebp; a3
0x40E871: push    offset nullsub_returnTrue_0arg; a2
0x40E876: mov     byte_B3F709, 1
0x40E87D: call    NiDX9Renderer__AddLostDeviceCallbak
0x40E882: mov     ecx, g_Renderer; this
0x40E888: push    ebp; a3
0x40E889: push    offset sub_405440; a2
0x40E88E: call    NiRenderer_RegisterOnDeviceLostCallback
0x40E893: call    sub_553550
0x40E898: push    offset aInitializingSh; "Initializing Shader System..."
0x40E89D: call    PrintToLog???
0x40E8A2: fld     flt_B06D9C
0x40E8A8: movzx   eax, bDoImageSpaceEffect
0x40E8AF: fstp    [esp+6BCh+var_6BC]; float
0x40E8B2: fld     flt_B06D94
0x40E8B8: mov     ecx, dword_B35300
0x40E8BE: sub     esp, 8
0x40E8C1: mov     dword_B42E8C, offset sub_405150
0x40E8CB: mov     ImageSpaceEffectEnabled, al
0x40E8D0: fstp    [esp+6C4h+a2]; float
0x40E8D4: mov     dword_B42EBC, ecx
0x40E8DA: fld     flt_B06D8C
0x40E8E0: mov     dword_B42D78, offset sub_405290
0x40E8EA: fstp    [esp+6C4h+var_6C4]; float
0x40E8ED: call    sub_7B4870
0x40E8F2: movzx   eax, byte_B02D70
0x40E8F9: fld     flt_B02D78
0x40E8FF: mov     dl, bUseHardDriveCache
0x40E905: fstp    flt_B430A8
0x40E90B: fld     flt_B02D80
0x40E911: mov     cl, byte_B06D1C
0x40E917: add     esp, 0Ch
0x40E91A: fstp    flt_B430A4
0x40E920: cmp     UseHDR, 0
0x40E927: mov     useHardDriveCache, dl
0x40E92D: mov     byte_B43077, al
0x40E932: mov     byte_B42D40, cl
0x40E938: jz      loc_40EA3A
0x40E93E: fld     flt_B06E24
0x40E944: mov     edx, dword_B06DEC
0x40E94A: fstp    flt_B2C2BC
0x40E950: mov     eax, dword_B06DF4
0x40E955: fld     flt_B06E2C
0x40E95B: mov     ecx, dword_B06E6C
0x40E961: fstp    flt_B2C2C0
0x40E967: mov     dword_B2C1E4, edx
0x40E96D: fld     flt_B06DFC
0x40E973: mov     dword_B43220, eax
0x40E978: fstp    flt_B431F8
0x40E97E: mov     dword_B43224, ecx
0x40E984: fld     flt_B06E74
0x40E98A: fstp    flt_B431FC
0x40E990: fld     flt_B06E04
0x40E996: fstp    flt_B431E8
0x40E99C: fld     flt_B06E7C
0x40E9A2: fstp    flt_B431EC
0x40E9A8: fld     flt_B06E0C
0x40E9AE: fstp    flt_B431F0
0x40E9B4: fld     flt_B06E84
0x40E9BA: fstp    flt_B431F4
0x40E9C0: fld     flt_B06E3C
0x40E9C6: fstp    flt_B43200
0x40E9CC: fld     flt_B06E8C
0x40E9D2: fstp    flt_B43204
0x40E9D8: fld     flt_B06E44
0x40E9DE: fstp    flt_B43208
0x40E9E4: fld     flt_B06E94
0x40E9EA: fstp    flt_B4320C
0x40E9F0: fld     flt_B06E5C
0x40E9F6: fstp    flt_B43210
0x40E9FC: fld     flt_B06E9C
0x40EA02: fstp    flt_B43214
0x40EA08: fld     flt_B06E64
0x40EA0E: fstp    flt_B43218
0x40EA14: fld     flt_B06EA4
0x40EA1A: fstp    flt_B4321C
0x40EA20: fld     flt_B06E14
0x40EA26: fstp    flt_B43154
0x40EA2C: fld     flt_B06E1C
0x40EA32: fstp    flt_B43158
0x40EA38: jmp     short loc_40EAA6
0x40EA3A: mov     edx, dword_B06D54
0x40EA40: fld     flt_B06D64
0x40EA46: mov     eax, dword_B06D44
0x40EA4B: mov     ecx, dword_B06D3C
0x40EA51: push    edx; int
0x40EA52: sub     esp, 0Ch
0x40EA55: fstp    [esp+6C8h+a2]; float
0x40EA59: fld     flt_B06D5C
0x40EA5F: fstp    [esp+6C8h+var_6C4]; float
0x40EA63: fld     flt_B06D4C
0x40EA69: fstp    [esp+6C8h+var_6C8]; float
0x40EA6C: push    eax; int
0x40EA6D: push    ecx; int
0x40EA6E: call    sub_7B4830
0x40EA73: fld     flt_B06D6C
0x40EA79: fstp    flt_B43154
0x40EA7F: add     esp, 18h
0x40EA82: fld     flt_B06D74
0x40EA88: fstp    flt_B43158
0x40EA8E: fld     flt_B06D7C
0x40EA94: fstp    flt_B2C2BC
0x40EA9A: fld     flt_B06D84
0x40EAA0: fstp    flt_B2C2C0
0x40EAA6: mov     ecx, OSGlobals
0x40EAAC: call    sub_406950
0x40EAB1: mov     esi, OSGlobals
0x40EAB7: mov     ecx, [esi+20h]; this
0x40EABA: cmp     ecx, ebp
0x40EABC: lea     edi, [esi+20h]
0x40EABF: jz      short loc_40EACD
0x40EAC1: call    InputGlobals__FlushKeyboardBuffer
0x40EAC6: mov     ecx, [edi]; this
0x40EAC8: call    InputGlobals__PollAndUpdateInputState
0x40EACD: mov     ecx, offset TimeInfo
0x40EAD2: call    sub_47D0F0
0x40EAD7: mov     byte ptr [esi+2], 1
0x40EADB: call    sub_410310
0x40EAE0: mov     edx, lpParameter
0x40EAE6: push    0FFFFFFFFh; int
0x40EAE8: push    ebp; char
0x40EAE9: push    edx; lpParameter
0x40EAEA: call    sub_410E40
0x40EAEF: mov     eax, g_worldScenegraph
0x40EAF4: mov     ecx, [eax+0DCh]
0x40EAFA: mov     dword_B39B84, ecx
0x40EB00: mov     edx, [eax+0DCh]
0x40EB06: mov     dword_B39E00, edx
0x40EB0C: call    sub_67FCF0
0x40EB11: call    GetPathBuilderSingleton
0x40EB16: push    1
0x40EB18: call    sub_578CC0
0x40EB1D: mov     eax, g_worldScenegraph
0x40EB22: mov     ecx, OSGlobals
0x40EB28: add     esp, 10h
0x40EB2B: push    eax
0x40EB2C: call    OSGlobals_Initialize???
0x40EB31: push    ebp
0x40EB32: call    sub_55F750
0x40EB37: fld     ds:flt_A2FF44
0x40EB3D: mov     ecx, TESDataHandler
0x40EB43: fst     [esp+6BCh+var_69C]
0x40EB47: fstp    [esp+6BCh+var_698]
0x40EB4B: add     esp, 4
0x40EB4E: fld     ds:flt_A2FFE8
0x40EB54: fstp    [esp+6B8h+var_694]
0x40EB58: mov     edx, [ecx+0Ch]
0x40EB5B: mov     ecx, TES
0x40EB61: push    edx
0x40EB62: call    sub_4431F0
0x40EB67: mov     ecx, TESDataHandler_g_PlayerRef
0x40EB6D: call    sub_662EE0
0x40EB72: call    ArchiveManager_DisacrdAllBSARetainedFilenames
0x40EB77: mov     eax, TlsIndex
0x40EB7C: mov     ecx, large fs:2Ch
0x40EB83: mov     edx, [ecx+eax*4]
0x40EB86: push    offset aInitializingAc; "Initializing Actor Locations..."
0x40EB8B: mov     byte ptr [edx+185h], 1
0x40EB92: call    PrintToLog???
0x40EB97: add     esp, 4
0x40EB9A: mov     ecx, offset ActorProcessManager_ptr
0x40EB9F: call    sub_675310
0x40EBA4: mov     ecx, TESDataHandler
0x40EBAA: call    sub_447300
0x40EBAF: push    offset aLoadingInitial; "Loading initial area..."
0x40EBB4: call    PrintToLog???
0x40EBB9: mov     edx, off_B02CE0
0x40EBBF: mov     eax, edx
0x40EBC1: add     esp, 4
0x40EBC4: lea     esi, [eax+1]
0x40EBC7: mov     cl, [eax]
0x40EBC9: add     eax, 1
0x40EBCC: test    cl, cl
0x40EBCE: jnz     short loc_40EBC7
0x40EBD0: sub     eax, esi
0x40EBD2: jz      loc_40EC8C
0x40EBD8: mov     ecx, TESDataHandler
0x40EBDE: push    edx
0x40EBDF: call    sub_4476B0
0x40EBE4: mov     esi, eax
0x40EBE6: cmp     esi, ebp
0x40EBE8: jnz     loc_40ED5B
0x40EBEE: mov     edx, off_B02CE0
0x40EBF4: lea     eax, [esp+6B8h+var_6A0]
0x40EBF8: push    eax
0x40EBF9: lea     ecx, [esp+6BCh+var_6A4]
0x40EBFD: push    ecx
0x40EBFE: mov     ecx, TESDataHandler
0x40EC04: xor     ebp, ebp
0x40EC06: push    edx
0x40EC07: mov     [esp+6C4h+var_6A4], ebp
0x40EC0B: mov     [esp+6C4h+var_6A0], ebp
0x40EC0F: call    sub_4478B0
0x40EC14: mov     edi, eax
0x40EC16: cmp     edi, ebp
0x40EC18: jz      loc_40ED57
0x40EC1E: mov     ecx, TES
0x40EC24: push    edi
0x40EC25: call    sub_4431F0
0x40EC2A: mov     eax, [esp+6B8h+var_6A4]
0x40EC2E: mov     ecx, [esp+6B8h+var_6A0]
0x40EC32: shl     eax, 0Ch
0x40EC35: mov     [esp+6B8h+var_6A8], eax
0x40EC39: fild    [esp+6B8h+var_6A8]
0x40EC3D: shl     ecx, 0Ch
0x40EC40: fld     ds:dbl_A30F70
0x40EC46: mov     [esp+6B8h+var_6A8], ecx
0x40EC4A: mov     ecx, TES
0x40EC50: fadd    st(1), st
0x40EC52: lea     edx, [esp+6B8h+var_69C]
0x40EC56: fxch    st(1)
0x40EC58: push    edx
0x40EC59: fstp    [esp+6BCh+var_69C]
0x40EC5D: fiadd   [esp+6BCh+var_6A8]
0x40EC61: fstp    [esp+6BCh+var_698]
0x40EC65: fldz
0x40EC67: fstp    [esp+6BCh+var_694]
0x40EC6B: call    sub_445A10
0x40EC70: mov     eax, [esp+6B8h+var_6A0]
0x40EC74: mov     ecx, [esp+6B8h+var_6A4]
0x40EC78: push    ebp
0x40EC79: push    edi
0x40EC7A: push    eax
0x40EC7B: push    ecx
0x40EC7C: mov     ecx, TESDataHandler
0x40EC82: call    sub_447740
0x40EC87: jmp     loc_40EE7A
0x40EC8C: mov     edx, off_B02CF8
0x40EC92: mov     eax, edx
0x40EC94: lea     esi, [eax+1]
0x40EC97: mov     cl, [eax]
0x40EC99: add     eax, 1
0x40EC9C: test    cl, cl
0x40EC9E: jnz     short loc_40EC97
0x40ECA0: sub     eax, esi
0x40ECA2: jz      loc_40EE7A
0x40ECA8: mov     eax, off_B02D00
0x40ECAD: lea     esi, [eax+1]
0x40ECB0: mov     cl, [eax]
0x40ECB2: add     eax, 1
0x40ECB5: test    cl, cl
0x40ECB7: jnz     short loc_40ECB0
0x40ECB9: sub     eax, esi
0x40ECBB: jz      loc_40EE7A
0x40ECC1: push    edx; Str
0x40ECC2: call    j__atol
0x40ECC7: mov     edx, off_B02D00
0x40ECCD: push    edx; Str
0x40ECCE: mov     ebx, eax
0x40ECD0: call    j__atol
0x40ECD5: mov     esi, TESDataHandler
0x40ECDB: mov     edi, [esi+0Ch]
0x40ECDE: add     esi, 0Ch
0x40ECE1: add     esp, 8
0x40ECE4: cmp     esi, ebp
0x40ECE6: mov     [esp+6B8h+var_6A8], eax
0x40ECEA: jz      short loc_40ED28
0x40ECEC: lea     esp, [esp+0]
0x40ECF0: cmp     [esi+4], ebp
0x40ECF3: jnz     short loc_40ECF9
0x40ECF5: cmp     [esi], ebp
0x40ECF7: jz      short loc_40ED28
0x40ECF9: mov     ebp, [esi]
0x40ECFB: mov     eax, off_B02CF0
0x40ED00: mov     edx, [ebp+0]
0x40ED03: push    eax; Str2
0x40ED04: mov     eax, [edx+0D4h]
0x40ED0A: mov     ecx, ebp
0x40ED0C: call    eax
0x40ED0E: push    eax; Str1
0x40ED0F: call    __strcmp
0x40ED14: add     esp, 8
0x40ED17: test    eax, eax
0x40ED19: jz      short loc_40ED26
0x40ED1B: mov     esi, [esi+4]
0x40ED1E: test    esi, esi
0x40ED20: jz      short loc_40ED28
0x40ED22: xor     ebp, ebp
0x40ED24: jmp     short loc_40ECF0
0x40ED26: mov     edi, ebp
0x40ED28: test    edi, edi
0x40ED2A: jz      loc_40EDD2
0x40ED30: mov     ebp, [esp+6B8h+var_6A8]
0x40ED34: push    ebp; int
0x40ED35: push    ebx; ArgList
0x40ED36: mov     ecx, edi
0x40ED38: call    sub_4F1630
0x40ED3D: mov     esi, eax
0x40ED3F: test    esi, esi
0x40ED41: jnz     short loc_40ED5B
0x40ED43: mov     ecx, TESDataHandler
0x40ED49: push    1
0x40ED4B: push    edi
0x40ED4C: push    ebp
0x40ED4D: push    ebx
0x40ED4E: call    sub_447740
0x40ED53: mov     esi, eax
0x40ED55: xor     ebp, ebp
0x40ED57: cmp     esi, ebp
0x40ED59: jz      short loc_40EDD2
0x40ED5B: mov     ecx, esi; this
0x40ED5D: call    TESObjectCELL_IsInterior
0x40ED62: test    al, al
0x40ED64: jz      short loc_40ED7C
0x40ED66: lea     ecx, [esp+6B8h+var_69C]
0x40ED6A: push    ecx
0x40ED6B: mov     ecx, TES
0x40ED71: push    esi
0x40ED72: call    sub_4455E0
0x40ED77: jmp     loc_40EE4C
0x40ED7C: mov     ecx, esi; this
0x40ED7E: call    TESObjectCELL_GetWorldSpace
0x40ED83: mov     ecx, TES
0x40ED89: push    eax
0x40ED8A: call    sub_4431F0
0x40ED8F: mov     ecx, esi; this
0x40ED91: call    TESObjectCELL_GetXCoordinate
0x40ED96: shl     eax, 0Ch
0x40ED99: mov     [esp+6B8h+var_6A8], eax
0x40ED9D: fild    [esp+6B8h+var_6A8]
0x40EDA1: mov     ecx, esi; this
0x40EDA3: fadd    ds:dbl_A30F70
0x40EDA9: fstp    [esp+6B8h+var_69C]
0x40EDAD: call    TESObjectCELL_GetYCoordinate
0x40EDB2: shl     eax, 0Ch
0x40EDB5: mov     [esp+6B8h+var_6A8], eax
0x40EDB9: fild    [esp+6B8h+var_6A8]
0x40EDBD: fadd    ds:dbl_A30F70
0x40EDC3: fstp    [esp+6B8h+var_698]
0x40EDC7: fldz
0x40EDC9: fstp    [esp+6B8h+var_694]
0x40EDCD: jmp     loc_40EE4C
0x40EDD2: mov     eax, off_B02CE0
0x40EDD7: test    eax, eax
0x40EDD9: jz      short loc_40EDF0
0x40EDDB: cmp     byte ptr [eax], 0
0x40EDDE: jz      short loc_40EDF0
0x40EDE0: push    eax; ArgList
0x40EDE1: push    offset aCouldNotFindSt; "Could not find starting cell '%s'."
0x40EDE6: call    PrintError
0x40EDEB: add     esp, 8
0x40EDEE: jmp     short loc_40EE4C
0x40EDF0: mov     edx, off_B02CF8
0x40EDF6: test    edx, edx
0x40EDF8: jz      short loc_40EE3F
0x40EDFA: mov     ecx, off_B02D00
0x40EE00: test    ecx, ecx
0x40EE02: jz      short loc_40EE3F
0x40EE04: cmp     byte ptr [edx], 0
0x40EE07: jz      short loc_40EE3F
0x40EE09: cmp     byte ptr [ecx], 0
0x40EE0C: jz      short loc_40EE3F
0x40EE0E: mov     eax, off_B02CF0
0x40EE13: test    eax, eax
0x40EE15: jz      short loc_40EE2E
0x40EE17: cmp     byte ptr [eax], 0
0x40EE1A: jz      short loc_40EE2E
0x40EE1C: push    eax
0x40EE1D: push    ecx
0x40EE1E: push    edx; ArgList
0x40EE1F: push    offset aCouldNotFind_6; "Could not find starting cell (%s, %s) i"...
0x40EE24: call    PrintError
0x40EE29: add     esp, 10h
0x40EE2C: jmp     short loc_40EE4C
0x40EE2E: push    ecx
0x40EE2F: push    edx; ArgList
0x40EE30: push    offset aCouldNotFind_7; "Could not find starting cell (%s, %s) i"...
0x40EE35: call    PrintError
0x40EE3A: add     esp, 0Ch
0x40EE3D: jmp     short loc_40EE4C
0x40EE3F: push    offset aCouldNotFind_8; "Could not find starting cell for INI da"...
0x40EE44: call    PrintError
0x40EE49: add     esp, 4
0x40EE4C: mov     ecx, TESDataHandler
0x40EE52: push    0FFFFFFFFh
0x40EE54: call    sub_447DB0
0x40EE59: mov     ecx, TES
0x40EE5F: push    1
0x40EE61: lea     edx, [esp+6BCh+var_69C]
0x40EE65: push    edx
0x40EE66: call    sub_444EC0
0x40EE6B: mov     eax, TES
0x40EE70: mov     ecx, [eax+8]
0x40EE73: call    sub_482310
0x40EE78: xor     ebp, ebp
0x40EE7A: push    offset aPlacingPlayer_; "Placing player..."
0x40EE7F: call    PrintToLog???
0x40EE84: mov     ecx, TES
0x40EE8A: mov     esi, [ecx+34h]
0x40EE8D: mov     edx, dword ptr Vector3_InitValue?
0x40EE93: mov     eax, dword ptr Vector3_InitValue?+4
0x40EE98: mov     dword ptr [esp+6BCh+var_680], edx
0x40EE9C: mov     edx, dword_B3F9B0
0x40EEA2: add     esp, 4
0x40EEA5: cmp     esi, ebp
0x40EEA7: mov     dword ptr [esp+6B8h+var_680+4], eax
0x40EEAB: mov     [esp+6B8h+var_678], edx
0x40EEAF: jnz     short loc_40EEC8
0x40EEB1: mov     eax, uGridsToLoad
0x40EEB6: mov     ecx, [ecx+8]
0x40EEB9: shr     eax, 1
0x40EEBB: push    eax
0x40EEBC: push    eax
0x40EEBD: call    GetGridEntry
0x40EEC2: mov     esi, [eax]
0x40EEC4: cmp     esi, ebp
0x40EEC6: jz      short loc_40EED9
0x40EEC8: lea     eax, [esp+6B8h+var_680]
0x40EECC: push    eax
0x40EECD: lea     ecx, [esp+6BCh+var_69C]
0x40EED1: push    ecx
0x40EED2: mov     ecx, esi
0x40EED4: call    sub_4D5D70
0x40EED9: mov     ecx, TESDataHandler_g_PlayerRef
0x40EEDF: fld     [esp+6B8h+var_678]
0x40EEE3: mov     edx, [ecx]
0x40EEE5: mov     eax, [edx+1E8h]
0x40EEEB: push    ecx
0x40EEEC: fstp    [esp+6BCh+var_6BC]
0x40EEEF: call    eax
0x40EEF1: mov     ecx, TESDataHandler_g_PlayerRef
0x40EEF7: mov     edx, [ecx]
0x40EEF9: mov     edx, [edx+1CCh]
0x40EEFF: lea     eax, [esp+6B8h+var_69C]
0x40EF03: push    eax
0x40EF04: call    edx
0x40EF06: cmp     esi, ebp
0x40EF08: jz      short loc_40EF54
0x40EF0A: mov     eax, TESDataHandler_g_PlayerRef
0x40EF0F: push    eax; Concurrency::details::SchedulerBase *
0x40EF10: mov     ecx, esi
0x40EF12: call    sub_4D35D0
0x40EF17: mov     ecx, ioManager
0x40EF1D: push    5
0x40EF1F: call    sub_434020
0x40EF24: mov     ecx, TESDataHandler_g_PlayerRef
0x40EF2A: push    ebp
0x40EF2B: call    PlayerCharacter_GetPlayerNode
0x40EF30: mov     ecx, eax; this
0x40EF32: call    NiAVObject_InitializePropertyState
0x40EF37: mov     ecx, TESDataHandler_g_PlayerRef
0x40EF3D: push    ebp
0x40EF3E: call    PlayerCharacter_GetPlayerNode
0x40EF43: push    eax
0x40EF44: push    ebp
0x40EF45: call    GetShadowSceneNode
0x40EF4A: add     esp, 4
0x40EF4D: mov     ecx, eax
0x40EF4F: call    ShadowSceneNodeAddShadowCaster
0x40EF54: mov     ecx, TESDataHandler_g_PlayerRef
0x40EF5A: call    sub_4D70E0
0x40EF5F: mov     eax, g_worldScenegraph
0x40EF64: cmp     [eax+0B6h], bp
0x40EF6B: ja      short loc_40EF71
0x40EF6D: xor     eax, eax
0x40EF6F: jmp     short loc_40EF79
0x40EF71: mov     ecx, [eax+0B0h]
0x40EF77: mov     eax, [ecx]
0x40EF79: mov     edx, [esp+6B8h+var_69C]
0x40EF7D: mov     [eax+54h], edx
0x40EF80: mov     ecx, [esp+6B8h+var_698]
0x40EF84: mov     [eax+58h], ecx
0x40EF87: mov     edx, [esp+6B8h+var_694]
0x40EF8B: mov     [eax+5Ch], edx
0x40EF8E: mov     eax, g_worldScenegraph
0x40EF93: cmp     [eax+0B6h], bp
0x40EF9A: ja      short loc_40EFA0
0x40EF9C: xor     esi, esi
0x40EF9E: jmp     short loc_40EFA8
0x40EFA0: mov     eax, [eax+0B0h]
0x40EFA6: mov     esi, [eax]
0x40EFA8: lea     ecx, [esp+6B8h+var_630]
0x40EFAF: push    ecx
0x40EFB0: mov     ecx, TESDataHandler_g_PlayerRef
0x40EFB6: call    sub_4D7AF0
0x40EFBB: lea     edi, [esi+30h]
0x40EFBE: mov     esi, eax
0x40EFC0: mov     ecx, 9
0x40EFC5: rep movsd
0x40EFC7: mov     eax, g_worldScenegraph
0x40EFCC: cmp     [eax+0B6h], bp
0x40EFD3: ja      short loc_40EFD9
0x40EFD5: xor     ecx, ecx
0x40EFD7: jmp     short loc_40EFE1
0x40EFD9: mov     edx, [eax+0B0h]
0x40EFDF: mov     ecx, [edx]; this
0x40EFE1: fldz
0x40EFE3: push    1; a3
0x40EFE5: push    ecx
0x40EFE6: fstp    [esp+6C0h+a2]; a2
0x40EFE9: call    NiAVObject_UpdateNiAVObject
0x40EFEE: call    sub_578CD0
0x40EFF3: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40EFF9: push    ebp; a2
0x40EFFA: call    Actor_GetActorBaseForm
0x40EFFF: mov     esi, eax
0x40F001: add     esi, 58h ; 'X'
0x40F004: jz      short loc_40F04A
0x40F006: cmp     [esi+4], ebp
0x40F009: jnz     short loc_40F00F
0x40F00B: cmp     [esi], ebp
0x40F00D: jz      short loc_40F04A
0x40F00F: mov     edi, [esi]
0x40F011: lea     ecx, [edi+24h]
0x40F014: call    EffectItemList_GetSchoolAV
0x40F019: cmp     eax, 19h
0x40F01C: jz      short loc_40F027
0x40F01E: mov     esi, [esi+4]
0x40F021: cmp     esi, ebp
0x40F023: jnz     short loc_40F006
0x40F025: jmp     short loc_40F04A
0x40F027: mov     ecx, TESDataHandler_g_PlayerRef
0x40F02D: push    ebp
0x40F02E: call    sub_664850
0x40F033: cmp     edi, ebp
0x40F035: jz      short loc_40F03C
0x40F037: add     edi, 18h
0x40F03A: jmp     short loc_40F03E
0x40F03C: xor     edi, edi
0x40F03E: mov     ecx, TESDataHandler_g_PlayerRef
0x40F044: push    edi
0x40F045: call    PlayerCharacter_SetCurrentMagicItem
0x40F04A: mov     ecx, TESDataHandler_g_PlayerRef
0x40F050: call    sub_6632A0
0x40F055: mov     eax, OSGlobals
0x40F05A: mov     byte ptr [eax+3], 1
0x40F05E: call    sub_42BA50
0x40F063: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40F069: call    TESObjectREFR_GetParentCell
0x40F06E: test    eax, eax
0x40F070: jnz     short loc_40F0DB
0x40F072: mov     ecx, TESDataHandler
0x40F078: push    0FFFFFFFFh
0x40F07A: call    sub_447DB0
0x40F07F: mov     ecx, TES
0x40F085: push    ebp
0x40F086: push    ebp
0x40F087: push    ebp
0x40F088: call    sub_440AF0
0x40F08D: call    sub_5B6040
0x40F092: call    sub_40FDD0
0x40F097: push    ebp; a2
0x40F098: push    7; a1
0x40F09A: call    NiRenderer_BeginScene1
0x40F09F: call    sub_7D7210
0x40F0A4: push    ebp
0x40F0A5: call    nullsub_returnTrue_0arg
0x40F0AA: call    sub_5B5AC0
0x40F0AF: mov     ecx, off_B0308C; "Oblivion iv logo.bik"
0x40F0B5: push    ebp; char
0x40F0B6: push    ebp; float
0x40F0B7: push    ebp; int
0x40F0B8: push    ebp; int
0x40F0B9: push    1; int
0x40F0BB: push    1; int
0x40F0BD: push    ecx; ArgList
0x40F0BE: call    sub_410BA0
0x40F0C3: call    sub_5B5C90
0x40F0C8: push    1
0x40F0CA: mov     byte_B33430, 0
0x40F0D1: call    nullsub_returnTrue_0arg
0x40F0D6: add     esp, 2Ch
0x40F0D9: jmp     short Oblivion_Main?___IdleLoop_Prolog
0x40F0DB: call    sub_40FDD0
0x40F0E0: push    offset aBeginIdleLoop_; "Begin Idle loop..."
0x40F0E5: call    PrintToLog???
0x40F0EA: mov     edx, OSGlobals
0x40F0F0: mov     edi, ds:PeekMessageA
0x40F0F6: mov     ebx, ds:TranslateMessage
0x40F0FC: mov     ebp, ds:DispatchMessageA
0x40F102: add     esp, 4
0x40F105: xor     eax, eax
0x40F107: mov     [esp+6B8h+Msg.hwnd], eax
0x40F10B: mov     [esp+6B8h+Msg.message], eax
0x40F10F: mov     [esp+6B8h+Msg.wParam], eax
0x40F113: mov     [esp+6B8h+Msg.lParam], eax
0x40F117: mov     [esp+6B8h+Msg.time], eax
0x40F11B: mov     [esp+6B8h+Msg.pt.x], eax
0x40F11F: mov     [esp+6B8h+Msg.pt.y], eax
0x40F123: mov     eax, [edx+8]
0x40F126: mov     [esp+6B8h+var_6A8], eax
0x40F12A: lea     ebx, [ebx+0]
0x40F130: push    1; wRemoveMsg
0x40F132: push    0; wMsgFilterMax
0x40F134: push    0; wMsgFilterMin
0x40F136: push    0; hWnd
0x40F138: lea     ecx, [esp+6C8h+Msg]
0x40F13C: push    ecx; lpMsg
0x40F13D: call    edi ; PeekMessageA
0x40F13F: test    eax, eax
0x40F141: jz      short loc_40F164
0x40F143: lea     edx, [esp+6B8h+Msg]
0x40F147: push    edx; lpMsg
0x40F148: call    ebx ; TranslateMessage
0x40F14A: lea     eax, [esp+6B8h+Msg]
0x40F14E: push    eax; lpMsg
0x40F14F: call    ebp ; DispatchMessageA
0x40F151: push    1; wRemoveMsg
0x40F153: push    0; wMsgFilterMax
0x40F155: push    0; wMsgFilterMin
0x40F157: push    0; hWnd
0x40F159: lea     ecx, [esp+6C8h+Msg]
0x40F15D: push    ecx; lpMsg
0x40F15E: call    edi ; PeekMessageA
0x40F160: test    eax, eax
0x40F162: jnz     short loc_40F143
0x40F164: call    ds:GetActiveWindow
0x40F16A: cmp     eax, [esp+6B8h+var_6A8]
0x40F16E: jz      short loc_40F197
0x40F170: mov     eax, TES
0x40F175: cmp     byte ptr [eax+51h], 0
0x40F179: jnz     short loc_40F197
0x40F17B: cmp     byte ptr [eax+52h], 0
0x40F17F: jnz     short loc_40F197
0x40F181: cmp     dword_B333F0, 0
0x40F188: jnz     short loc_40F197
0x40F18A: push    32h ; '2'; dwMilliseconds
0x40F18C: call    ds:Sleep
0x40F192: jmp     loc_40F275
0x40F197: mov     edx, g_Renderer
0x40F19D: mov     eax, [edx+280h]
0x40F1A3: mov     ecx, [eax]
0x40F1A5: mov     edx, [ecx+0Ch]
0x40F1A8: push    eax
0x40F1A9: call    edx
0x40F1AB: test    eax, eax
0x40F1AD: jge     loc_40F26A
0x40F1B3: mov     ecx, g_Renderer
0x40F1B9: cmp     dword ptr [ecx+204h], 0
0x40F1C0: lea     esi, [ecx+204h]
0x40F1C6: jnz     short loc_40F1EB
0x40F1C8: cmp     dword ptr [ecx+200h], 0
0x40F1CF: jnz     short loc_40F1EB
0x40F1D1: mov     eax, [ecx]
0x40F1D3: mov     edx, [eax+130h]
0x40F1D9: call    edx
0x40F1DB: test    al, al
0x40F1DD: jz      short loc_40F1E5
0x40F1DF: mov     dword ptr [esi], 1
0x40F1E5: mov     ecx, g_Renderer
0x40F1EB: cmp     dword ptr [ecx+204h], 1
0x40F1F2: lea     esi, [ecx+204h]
0x40F1F8: jnz     short loc_40F21D
0x40F1FA: cmp     dword ptr [ecx+200h], 0
0x40F201: jnz     short loc_40F21D
0x40F203: mov     eax, [ecx]
0x40F205: mov     edx, [eax+134h]
0x40F20B: call    edx
0x40F20D: test    al, al
0x40F20F: jz      short loc_40F217
0x40F211: mov     dword ptr [esi], 0
0x40F217: mov     ecx, g_Renderer
0x40F21D: mov     ecx, [ecx+280h]
0x40F223: mov     eax, [ecx]
0x40F225: push    ecx
0x40F226: mov     ecx, [eax+0Ch]
0x40F229: call    ecx
0x40F22B: test    eax, eax
0x40F22D: jl      short loc_40F260
0x40F22F: mov     edx, TES
0x40F235: cmp     dword ptr [edx+54h], 0
0x40F239: jz      short loc_40F260
0x40F23B: cmp     byte_B0703C, 0
0x40F242: jz      short loc_40F260
0x40F244: mov     ecx, SaveLoad_CurrentSavegame
0x40F24A: call    sub_45A500
0x40F24F: test    al, al
0x40F251: jnz     short loc_40F260
0x40F253: mov     eax, TES
0x40F258: mov     ecx, [eax+54h]
0x40F25B: call    WaterSurfaceLoop
0x40F260: push    32h ; '2'; dwMilliseconds
0x40F262: call    ds:Sleep
0x40F268: jmp     short loc_40F275
0x40F26A: mov     ecx, OSGlobals
0x40F270: call    sub_40D800
0x40F275: mov     eax, OSGlobals
0x40F27A: cmp     byte ptr [eax], 0
0x40F27D: jnz     Oblivion_Main?___exitPath?
0x40F283: cmp     byte ptr [eax+1], 0
0x40F287: jz      Oblivion_Main?___IdleLoop_GetMessage
0x40F28D: mov     ecx, [eax+24h]
0x40F290: call    SoundManager_StopFilterGraph
0x40F295: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40F29B: call    TESObjectREFR_GetParentCell
0x40F2A0: test    eax, eax
0x40F2A2: jz      short loc_40F2B7
0x40F2A4: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40F2AA: push    ecx
0x40F2AB: call    TESObjectREFR_GetParentCell
0x40F2B0: mov     ecx, eax
0x40F2B2: call    sub_4CECD0
0x40F2B7: mov     ecx, TESDataHandler_g_PlayerRef
0x40F2BD: push    1
0x40F2BF: call    PlayerCharacter_GetPlayerNode
0x40F2C4: mov     esi, eax
0x40F2C6: test    esi, esi
0x40F2C8: jz      short loc_40F314
0x40F2CA: mov     edx, [esi]
0x40F2CC: mov     eax, [edx+8]
0x40F2CF: mov     ecx, esi
0x40F2D1: call    eax
0x40F2D3: test    eax, eax
0x40F2D5: jz      short loc_40F314
0x40F2D7: mov     ecx, [eax+1Ch]
0x40F2DA: test    ecx, ecx
0x40F2DC: jz      short loc_40F314
0x40F2DE: mov     edx, [ecx]
0x40F2E0: mov     edx, [edx+88h]
0x40F2E6: push    esi
0x40F2E7: lea     eax, [esp+6BCh+var_6A4]
0x40F2EB: push    eax
0x40F2EC: call    edx
0x40F2EE: mov     eax, [esp+6B8h+var_6A4]
0x40F2F2: test    eax, eax
0x40F2F4: jz      short loc_40F314
0x40F2F6: mov     esi, eax
0x40F2F8: add     eax, 4
0x40F2FB: push    eax; lpAddend
0x40F2FC: call    ds:InterlockedDecrement
0x40F302: test    eax, eax
0x40F304: jnz     short loc_40F314
0x40F306: test    esi, esi
0x40F308: jz      short loc_40F314
0x40F30A: mov     eax, [esi]
0x40F30C: mov     edx, [eax]
0x40F30E: push    1
0x40F310: mov     ecx, esi
0x40F312: call    edx
0x40F314: mov     ecx, TESDataHandler_g_PlayerRef
0x40F31A: push    0
0x40F31C: call    PlayerCharacter_GetPlayerNode
0x40F321: mov     esi, eax
0x40F323: test    esi, esi
0x40F325: jz      short loc_40F371
0x40F327: mov     eax, [esi]
0x40F329: mov     edx, [eax+8]
0x40F32C: mov     ecx, esi
0x40F32E: call    edx
0x40F330: test    eax, eax
0x40F332: jz      short loc_40F371
0x40F334: mov     ecx, [eax+1Ch]
0x40F337: test    ecx, ecx
0x40F339: jz      short loc_40F371
0x40F33B: mov     eax, [ecx]
0x40F33D: mov     eax, [eax+88h]
0x40F343: push    esi
0x40F344: lea     edx, [esp+6BCh+var_6A0]
0x40F348: push    edx
0x40F349: call    eax
0x40F34B: mov     eax, [esp+6B8h+var_6A0]
0x40F34F: test    eax, eax
0x40F351: jz      short loc_40F371
0x40F353: mov     esi, eax
0x40F355: add     eax, 4
0x40F358: push    eax; lpAddend
0x40F359: call    ds:InterlockedDecrement
0x40F35F: test    eax, eax
0x40F361: jnz     short loc_40F371
0x40F363: test    esi, esi
0x40F365: jz      short loc_40F371
0x40F367: mov     edx, [esi]
0x40F369: mov     eax, [edx]
0x40F36B: push    1
0x40F36D: mov     ecx, esi
0x40F36F: call    eax
0x40F371: mov     ecx, TES; this
0x40F377: push    0; a3
0x40F379: push    0; a2
0x40F37B: call    sub_442630
0x40F380: mov     ecx, TES
0x40F386: mov     eax, 7FFFFFFFh
0x40F38B: mov     [ecx+20h], eax
0x40F38E: mov     edx, TES
0x40F394: mov     [edx+24h], eax
0x40F397: mov     eax, TESDataHandler_g_PlayerRef
0x40F39C: mov     ecx, SaveLoad_CurrentSavegame
0x40F3A2: push    0
0x40F3A4: push    eax
0x40F3A5: call    sub_4533F0
0x40F3AA: mov     ecx, SaveLoad_CurrentSavegame
0x40F3B0: push    1
0x40F3B2: mov     esi, eax
0x40F3B4: call    sub_45A530
0x40F3B9: mov     ecx, SaveLoad_CurrentSavegame
0x40F3BF: push    0
0x40F3C1: call    sub_464440
0x40F3C6: mov     ecx, TESDataHandler_g_PlayerRef
0x40F3CC: mov     edx, [ecx]
0x40F3CE: mov     eax, [edx+150h]
0x40F3D4: push    0
0x40F3D6: call    eax
0x40F3D8: mov     ecx, TESDataHandler_g_PlayerRef
0x40F3DE: mov     edx, [ecx]
0x40F3E0: mov     eax, [edx+170h]
0x40F3E6: call    eax
0x40F3E8: mov     ecx, eax
0x40F3EA: call    sub_405CE0
0x40F3EF: mov     ecx, TESDataHandler_g_PlayerRef
0x40F3F5: call    sub_5E9690
0x40F3FA: mov     ecx, TESDataHandler_g_PlayerRef
0x40F400: mov     ecx, [ecx+58h]
0x40F403: test    ecx, ecx
0x40F405: jz      short loc_40F413
0x40F407: mov     edx, [ecx]
0x40F409: mov     eax, [edx+3A8h]
0x40F40F: push    0
0x40F411: call    eax
0x40F413: mov     ecx, TESDataHandler_g_PlayerRef
0x40F419: push    esi
0x40F41A: call    sub_663340
0x40F41F: mov     ecx, SaveLoad_CurrentSavegame
0x40F425: call    sub_462080
0x40F42A: mov     ecx, SaveLoad_CurrentSavegame
0x40F430: call    SaveLoad_ValidateCreatedObj??
0x40F435: mov     ecx, SaveLoad_CurrentSavegame
0x40F43B: push    0
0x40F43D: call    sub_45A530
0x40F442: mov     ecx, SaveLoad_CurrentSavegame
0x40F448: call    sub_45C320
0x40F44D: mov     ecx, offset ActorProcessManager_ptr
0x40F452: call    sub_675310
0x40F457: mov     ecx, TESDataHandler
0x40F45D: call    sub_447300
0x40F462: push    0
0x40F464: call    sub_57CCC0
0x40F469: add     esp, 4
0x40F46C: call    sub_5B5AC0
0x40F471: call    sub_5B6040
0x40F476: mov     eax, OSGlobals
0x40F47B: mov     byte ptr [eax+1], 0
0x40F47F: mov     byte ptr [eax+4], 0
0x40F483: jmp     Oblivion_Main?___IdleLoop_GetMessage
0x40F488: mov     byte ptr [eax+3], 0
0x40F48C: cmp     dword_B3F940, 0
0x40F493: jz      short loc_40F49A
0x40F495: call    sub_701A80
0x40F49A: mov     ecx, ModelLoaderPtr
0x40F4A0: call    sub_43E0F0
0x40F4A5: call    sub_410B80
0x40F4AA: call    sub_67F180
0x40F4AF: call    sub_682430
0x40F4B4: call    sub_6844D0
0x40F4B9: call    sub_684710
0x40F4BE: call    sub_405B00
0x40F4C3: call    Interface3dScenegraph_Destructor
0x40F4C8: mov     ecx, offset dword_B3BDB0
0x40F4CD: call    sub_67CF00
0x40F4D2: call    sub_578EF0
0x40F4D7: call    sub_5C0FC0
0x40F4DC: mov     ecx, TES
0x40F4E2: mov     ecx, [ecx+5Ch]
0x40F4E5: test    ecx, ecx
0x40F4E7: jz      short loc_40F4EE
0x40F4E9: call    sub_53FB30
0x40F4EE: mov     edx, OSGlobals
0x40F4F4: mov     ecx, [edx+24h]
0x40F4F7: push    0FFFFFFFFh
0x40F4F9: call    sub_6AC330
0x40F4FE: call    sub_6F96B0
0x40F503: mov     ecx, TES
0x40F509: xor     ebx, ebx
0x40F50B: cmp     ecx, ebx
0x40F50D: mov     esi, ecx
0x40F50F: jz      short loc_40F51F
0x40F511: call    TES_destr
0x40F516: push    esi
0x40F517: call    FormHeapFree
0x40F51C: add     esp, 4
0x40F51F: mov     esi, OSGlobals
0x40F525: mov     edi, [esi+24h]
0x40F528: add     esi, 24h ; '$'
0x40F52B: cmp     edi, ebx
0x40F52D: jz      short loc_40F53F
0x40F52F: mov     ecx, edi
0x40F531: call    sub_6AC020
0x40F536: push    edi
0x40F537: call    FormHeapFree
0x40F53C: add     esp, 4
0x40F53F: mov     [esi], ebx
0x40F541: call    sub_5535D0
0x40F546: call    sub_55F720
0x40F54B: mov     ecx, offset EffectSettingCollection
0x40F550: call    EffectSettingCollection_Clear
0x40F555: call    ActiveEffect_Base_ClearCreateFuncTable
0x40F55A: mov     ecx, dword_B3A6B0; void *
0x40F560: cmp     ecx, ebx
0x40F562: mov     esi, ecx
0x40F564: jz      short loc_40F574
0x40F566: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x40F56B: push    esi
0x40F56C: call    FormHeapFree
0x40F571: add     esp, 4
0x40F574: mov     ecx, OSGlobals
0x40F57A: cmp     ecx, ebx
0x40F57C: mov     esi, ecx
0x40F57E: jz      short loc_40F58E
0x40F580: call    sub_40C350
0x40F585: push    esi
0x40F586: call    FormHeapFree
0x40F58B: add     esp, 4
0x40F58E: push    offset byte_B07BF4
0x40F593: mov     ecx, offset INISettingCollection
0x40F598: mov     OSGlobals, ebx
0x40F59E: call    sub_40C180
0x40F5A3: call    sub_53AD60
0x40F5A8: mov     ecx, g_Renderer; this
0x40F5AE: push    offset sub_405440; a2
0x40F5B3: call    sub_40C220
0x40F5B8: mov     ecx, g_Renderer; this
0x40F5BE: push    offset nullsub_returnTrue_0arg; a2
0x40F5C3: call    sub_40C2F0
0x40F5C8: push    1
0x40F5CA: call    sub_497B50
0x40F5CF: mov     ecx, OBSE_g_FileFinder
0x40F5D5: add     esp, 4
0x40F5D8: cmp     ecx, ebx
0x40F5DA: jz      short loc_40F5EC
0x40F5DC: mov     esi, ecx
0x40F5DE: call    sub_431770
0x40F5E3: push    esi
0x40F5E4: call    FormHeapFree
0x40F5E9: add     esp, 4
0x40F5EC: mov     esi, dword_B35300
0x40F5F2: cmp     esi, ebx
0x40F5F4: jz      short loc_40F618
0x40F5F6: lea     eax, [esi+4]
0x40F5F9: push    eax; lpAddend
0x40F5FA: call    ds:InterlockedDecrement
0x40F600: test    eax, eax
0x40F602: jnz     short loc_40F612
0x40F604: cmp     esi, ebx
0x40F606: jz      short loc_40F612
0x40F608: mov     edx, [esi]
0x40F60A: mov     eax, [edx]
0x40F60C: push    1
0x40F60E: mov     ecx, esi
0x40F610: call    eax
0x40F612: mov     dword_B35300, ebx
0x40F618: call    sub_747BE0
0x40F61D: mov     ecx, [esp+6B8h+var_4]
0x40F624: pop     edi
0x40F625: pop     esi
0x40F626: pop     ebp
0x40F627: pop     ebx
0x40F628: xor     ecx, esp
0x40F62A: xor     eax, eax
0x40F62C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x40F631: add     esp, 6A8h
0x40F637: retn    10h
