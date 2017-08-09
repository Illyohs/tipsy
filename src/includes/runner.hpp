#include<string>
#include<vector>

namespace runner
{
    class CmdRunner
    {
        private:
            std::vector<string> _envars;
            std::string _cmd;
            std::vector<std::string> _args;
        
        public:
            void setEnvars(std::vector<string>)
            void setCmd(std::string);
            void setArgs(std::vector<string>);

            void exec();

            std::vector<std::string> getEnvars() const;
            std::vector<std::string> getCmd() const;
            std::vector<std::string> getArgs() const;

    };

    class WineRunner : CmdRunner
    {
        public:
            void installTricks() const;
            void runWine() const;
    };
}