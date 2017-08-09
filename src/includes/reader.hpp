#include <string>
#include <vector>

class Reader
{
    private:
        std::string _name;
        std::string _version;
        std::vector<std::string> _authors;
        std::vector<std::string> _tricks;
        std::string _exe;
    
    public:
        // Reader();

        void setName(std::string);
        void setVersion(std::string);
        void setAuthors(std::vector<std::string>);
        void setTricks(std::vector<std::string>);
        void setExe(std::string);

        std::string getName() const;
        std::string getVersion() const;
        std::vector<std::string> getAuthors() const;
        std::vector<std::string> getTricks() const;
        std::string getExe() const;

        // ~Reader();
};