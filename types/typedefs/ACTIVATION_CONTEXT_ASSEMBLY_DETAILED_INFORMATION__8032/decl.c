struct __declspec(align(8)) _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION
{
DWORD ulFlags;
DWORD ulEncodedAssemblyIdentityLength;
DWORD ulManifestPathType;
DWORD ulManifestPathLength;
LARGE_INTEGER_1 liManifestLastWriteTime;
DWORD ulPolicyPathType;
DWORD ulPolicyPathLength;
LARGE_INTEGER_1 liPolicyLastWriteTime;
DWORD ulMetadataSatelliteRosterIndex;
DWORD ulManifestVersionMajor;
DWORD ulManifestVersionMinor;
DWORD ulPolicyVersionMajor;
DWORD ulPolicyVersionMinor;
DWORD ulAssemblyDirectoryNameLength;
PCWSTR lpAssemblyEncodedAssemblyIdentity;
PCWSTR lpAssemblyManifestPath;
PCWSTR lpAssemblyPolicyPath;
PCWSTR lpAssemblyDirectoryName;
DWORD ulFileCount;
};
