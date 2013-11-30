//Init file
//created by -[EUTW]- trnapster


finishMissionInit;

call compileFinal preProcessFileLineNumbers "common\fn_common_init.sqf";

if (isServer) then 
{	
	call compileFinal preProcessFileLineNumbers "server\fn_server_init.sqf";
};

if (!isDedicated) then 
{
	waitUntil {!(isNull player)};
	waitUntil{alive player};
    
    call compileFinal preProcessFileLineNumbers "client\fn_client_init.sqf";
};